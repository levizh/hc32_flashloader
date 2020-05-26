/*************************************************************************
 *
 *   Used with ICCARM and AARM.
 *
 *    File name   : FlashHC32.c
 *    Description : FlashLoader HC32 internal flash loader
 *
 *    History :
 *    1. Date        : May, 2017
 *       Author      : Levi Zhang
 *       Description : Initial revision
 *
 *
 *
 **************************************************************************/
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//
#include "hc32f4a0_drv.h"

//#include "hc32f460_reg.h"
//
//#include "flash_loader.h"       // The flash loader framework API declarations.
//#include "flash_loader_extra.h"

// Flash-specific definitions
// These encompass all the commands and status checks the program makes.
#define MULT                0x0001

/*
** definition
*/
#define TIMEOUT             (40000)             //1000 is error,10000 is ok.
                                                //set 20000

/** default settings **/

/** external functions **/

/** external data **/

/** internal functions **/



/** public data **/
/** private data **/
__no_init static volatile uint32_t flashBase;
#if USE_ARGC_ARGV
#pragma location=".flash_init_const"
const char protec_str[] = "--protect";
#pragma location=".flash_init_const"
const char cr_trim_str[] = "--cr_trim";
__no_init static volatile uint32_t protect;
__no_init static volatile uint16_t cr_trim;
__no_init static const char * cr_trim_value;
#endif

//FL_Drv_Typedef fl_drv =
//{
//    _FlashPrepare,
//    _FlashCleanup,
//    _FlashWrite,
//    _FlashEraseSector,
//    CLK_PLLInit,
//    CLK_HRCInit,
//    WDT_Process,
//};
FL_Drv_Typedef fl_drv;

/** static functions **/

void loop_wait(int lpcnt)
{
    while(lpcnt--);
}

/* CLK HRC*/
void CLK_HRCInit(void)
{
    /* HRC as system clock */
    M4_CMU->CKSWR = 0U;
    /* 0 wait @ HRC */
    M4_EFM->FRMC = 0U;
    /* stop PLLH*/
    M4_CMU->PLLHCR = 1U;
}

void CLK_PLLInit(void)
{
    /* HRC = 16MHz */
    if (1UL == (*((volatile unsigned int*)(0x404UL)) & 1UL))
    {
        /*
        Fpll = clkin/m*n/p_q_r;
        M=1  (div2) -->8MHz
        N=59 (mul60)-->480MHz
        PQR=1(div2) -->240MHz
        */
        M4_CMU->PLLHCFGR = (1UL<<28) | (1UL<<24) | (1UL<<20) | (59UL << 8) | (1UL << 7) | (1UL);
    }
    /* HRC = 20MHz */
    else
    {
        /*
        Fpll = clkin/m*n/p_q_r;
        M=1  (div2) -->10MHz
        N=47 (mul48)-->480MHz
        PQR=1(div2) -->240MHz
        */
        M4_CMU->PLLHCFGR = (1UL<<28) | (1UL<<24) | (1UL<<20) | (47UL << 8) | (1UL << 7) | (1UL);
    }
    /* 240MHz/6 = 40MHz@0wait */
    M4_EFM->FRMC = 5U;

    /* divide SWDT/WDT clock PCLK3 */
    M4_CMU->SCFGR = (0UL << 24) | (1UL << 20) | (1UL << 16) | (3UL << 12) | (3UL << 8) |(1UL << 4) | (0UL);

    /* enable PLLH*/
    M4_CMU->PLLHCR = 0U;
    /* PLLH as system clock */
    M4_CMU->CKSWR = 5U;
}

void SWDT_Feed(void)
{
//    M4_SWDT->RR = 0xFFFF0123ul;
//    M4_SWDT->RR = 0xFFFF3210ul;
}

void WDT_Feed(void)
{
//    M4_WDT->RR = 0xFFFF0123ul;
//    M4_WDT->RR = 0xFFFF3210ul;
}

void swdt_judge(void)
{
//    loop_wait(0x0010);
}

void wdt_judge(void)
{
//    loop_wait(0x0010);
}

void WDT_Process(void)
{
    //todo
}

/** private functions **/

uint32_t _FlashWrite(void *block_start,
                    uint32_t offset_into_block,
                    uint32_t count,
                    char const *buffer)
{
    volatile uint32_t u32To = TIMEOUT;

    uint32_t LoadAddr = (uint32_t)block_start + offset_into_block;
    flashunit * pData = (flashunit *)buffer;

    WDT_Process();
    /*
    1 --> single program mode
    2 --> single program mode and read back
    3 --> continue program mode
    */
    M4_EFM->FWMC = (1UL << 8) | 3UL;
//    M4_EFM->FWMC = (0UL << 8) | 1UL;

    do
    {
        *((volatile flashunit *)LoadAddr) = *pData;

        if ((LoadAddr < 0x00100000U) && (0x005A5A5AUL != *(volatile uint32_t *)(0x03002000UL)))
//        if ((LoadAddr < 0x00100000U))
        {
            u32To = 0UL;
            while (EFM_FSR_OPTEND0 != (M4_EFM->FSR & EFM_FSR_OPTEND0))
            //while (EFM_FSR_RDY0 != (M4_EFM->FSR & EFM_FSR_RDY0))
            {
                u32To++;
                if (u32To >= TIMEOUT)
                {
                    WDT_Process();
                    _FlashCleanup();
                    return(RESULT_ERROR);
                }
            }
            M4_EFM->FSCLR |= EFM_FSCLR_OPTENDCLR0;
        }
        else
        {
            u32To = 0UL;
            while (EFM_FSR_OPTEND1 != (M4_EFM->FSR & EFM_FSR_OPTEND1))
            //while (EFM_FSR_RDY1 != (M4_EFM->FSR & EFM_FSR_RDY1))
            {
                u32To++;
                if (u32To >= TIMEOUT)
                {
                    WDT_Process();
                    _FlashCleanup();
                    return(RESULT_ERROR);
                }
            }
            M4_EFM->FSCLR |= EFM_FSCLR_OPTENDCLR1;
        }

        ++pData;
        LoadAddr += sizeof(flashunit);
        count -= sizeof(flashunit);

    } while(count >= sizeof(flashunit));

    /*
    read only mode
    */
    //M4_EFM->FWMC = (1UL << 8) |0UL;
    M4_EFM->FWMC = (0UL << 8) |0UL;

    u32To = 0UL;
    while ((EFM_FSR_RDY0 != (M4_EFM->FSR & EFM_FSR_RDY0)) && \
            (EFM_FSR_RDY1 != (M4_EFM->FSR & EFM_FSR_RDY1)))
    {
        u32To++;
        if (u32To >= TIMEOUT)
        {
            WDT_Process();
            _FlashCleanup();
            return(RESULT_ERROR);
        }
    }

    WDT_Process();
    return (RESULT_OK);
}

uint32_t _FlashPrepare(void)
{
    // todo for 4A0
    //WDT_Process();

    /* release write protect */
    M4_EFM->FAPRT = 0x00000123U;
    M4_EFM->FAPRT = 0x00003210U;

    //M4_EFM->WLOCK = 0x00UL;
    M4_EFM->F0NWPRT0 = 0xFFFFFFFFUL;
    M4_EFM->F0NWPRT1 = 0xFFFFFFFFUL;
    M4_EFM->F0NWPRT2 = 0xFFFFFFFFUL;
    M4_EFM->F0NWPRT3 = 0xFFFFFFFFUL;
    M4_EFM->F1NWPRT0 = 0xFFFFFFFFUL;
    M4_EFM->F1NWPRT1 = 0xFFFFFFFFUL;
    M4_EFM->F1NWPRT2 = 0xFFFFFFFFUL;
    M4_EFM->F1NWPRT3 = 0xFFFFFFFFUL;

    /* */
    M4_EFM->KEY1 = 0x01234567U;
    M4_EFM->KEY1 = 0xFEDCBA98U;

    /*
    reset cache
    prefetch off
    Dcache off
    ICache off
    normal voltage
    insert 5 read cycles
    */
    M4_EFM->FRMC = 0x00080005UL;

    /*
    Bus hold disable
    */
    M4_EFM->FWMC = 0x00000100UL;

    M4_PWC->FPRC = 0xA501U;

    CLK_HRCInit();
    /* Set PLLH 240M as HCLK */
    //CLK_PLLInit();

    return(RESULT_OK) ;
}

void _FlashCleanup(void)
{
}

//uint32_t _FlashWriteUnit(uint32_t LoadAddr, flashunit Data)
//{
//    uint32_t u32To = TIMEOUT;
//
//    // todo
//    WDT_Process();
//
//    /*
//    1 --> single program mode
//    2 --> single program mode and read back
//    3 --> continue program mode
//    */
//    M4_EFM->FWMC = (1UL << 8) |1UL;
//
//    *((volatile flashunit *)LoadAddr) = Data ;
//    return (RESULT_OK);
//}

uint32_t _FlashEraseSector(uint32_t SectorAddr)
{
    uint32_t u32To = 0UL;

    WDT_Process();

    /*
    4 --> page erase
    5 --> single chip erase
    6 --> dual chip erase
    */
    //M4_EFM->FWMC = (1UL << 8) |4UL;
    M4_EFM->FWMC = (0UL << 8) |4UL;

    *((volatile flashunit *)SectorAddr ) = 0 ;

    while ((EFM_FSR_RDY0 != M4_EFM->FSR & EFM_FSR_RDY0) && \
            (EFM_FSR_RDY1 != M4_EFM->FSR & EFM_FSR_RDY1))
    {
        u32To++;
        if (u32To >= TIMEOUT*10UL)
        {
            WDT_Process();
            _FlashCleanup();
            return(RESULT_ERROR);
        }
    }

    while ((EFM_FSR_OPTEND0 | EFM_FSR_OPTEND1) & M4_EFM->FSR)
    {
        M4_EFM->FSCLR |= (EFM_FSCLR_OPTENDCLR1 | EFM_FSCLR_OPTENDCLR0);
    }
    //M4_EFM->FWMC = (1UL << 8) |0UL;
    M4_EFM->FWMC = (0UL << 8) |0UL;
    return (RESULT_OK);
}
