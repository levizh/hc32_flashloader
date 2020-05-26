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
#include "hc32f460_drv.h"

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

#define IS_BOOT_MODE()          (*(volatile unsigned char *)(0x40054002)& 0x10)==0x10?1:0
//#define EFM_FLASH_TRIMLOAD()    *((volatile unsigned int*)(0x40010490UL)) = 2

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
    M4_SYSREG->PWR_FPRC = 0xa501;                   // Clock write enable
    M4_SYSREG->CMU_CKSWR_f.CKSW = 0;                // Set Source Clock internal HRC
//    while(0 != M4_SYSREG->CMU_CKSWR_f.CKSW);        // wait clk switch to HRC
    M4_EFM->FRMC_f.FLWT = 0u;                       // 0 wait read cycle
    M4_SYSREG->CMU_PLLCR = 1u;                      // MPLL stop

    M4_SYSREG->CMU_SCFGR_f.PCLK3S = 6;
}

void CLK_PLLInit(void)
{
    uint32_t u32Tmp;
    M4_SYSREG->PWR_FPRC = 0xa501;                           //Clock write enable

    M4_SYSREG->CMU_SCFGR_f.PCLK1S = 1;
    u32Tmp = *((volatile unsigned int*)(0x404UL)) & 1u;

    if (1 == u32Tmp)
    {
        M4_SYSREG->CMU_PLLCFGR = 0x10102781u;
        M4_EFM->FRMC_f.FLWT = 4u;                           //insert 4 wait cycle
    }
    else
    {
        M4_SYSREG->CMU_PLLCFGR = 0x10101F81u;
        M4_EFM->FRMC_f.FLWT = 5u;                           //insert 5 wait cycle
    }
    M4_SYSREG->CMU_PLLCR = 0;
    /* use MPLL */
    M4_SYSREG->CMU_CKSWR = 5;

    M4_SYSREG->CMU_SCFGR_f.PCLK3S = 6;
}

void SWDT_Feed(void)
{
    M4_SWDT->RR = 0xFFFF0123ul;
    M4_SWDT->RR = 0xFFFF3210ul;
}

void WDT_Feed(void)
{
    M4_WDT->RR = 0xFFFF0123ul;
    M4_WDT->RR = 0xFFFF3210ul;
}

void swdt_judge(void)
{
    int swcnt;
    int swpmtarea, swperi;

    swcnt = M4_SWDT->SR ;
    swperi = M4_ICG->ICG0_f.SWDTPERI;
    swpmtarea = M4_ICG->ICG0_f.SWDTWDPT;


    //swdt count data use high 2 bit
    if(swperi == 0x00)
    {
        swcnt = swcnt>>6 ;
    }
    else if(swperi == 0x01)
    {
        swcnt = swcnt>>10 ;
    }
    else if(swperi == 0x02)
    {
        swcnt = swcnt>>12 ;
    }
    else
    {
        swcnt = swcnt>>14 ;
    }

    if((swpmtarea == 0x00) | (swpmtarea == 0x0f))
    {
        SWDT_Feed(); //100% area refresh enable
    }
    else if ((swpmtarea & 0x01 )== 0x01) //0-25% area refresh enable
    {
        if(swcnt == 0x00)
        {
            SWDT_Feed();
        }
    }
      else if ((swpmtarea & 0x02 )== 0x02) //25-50% area refresh enable
    {
        if(swcnt == 0x01)
        {
            SWDT_Feed();
        }
    }
    else if ((swpmtarea & 0x04 )== 0x04) //50-75% area refresh enable
    {
        if(swcnt == 0x02)
        {
            SWDT_Feed();
        }
    }
    else if ((swpmtarea & 0x08 )== 0x08) //75-100% area refresh enable
    {
        if(swcnt == 0x03)
        {
            SWDT_Feed();
        }
    }

//    loop_wait(0x0010);
}

void wdt_judge(void)
{
    int wcnt;
    int wpmtarea, wperi;

    wcnt = M4_WDT->SR_f.CNT ;
    wperi = M4_ICG->ICG0_f.WDTPERI;
    wpmtarea = M4_ICG->ICG0_f.WDTWDPT;


    //swdt count data use high 2 bit
    if(wperi == 0x00)
    {
        wcnt = wcnt>>6 ;
    }
    else if(wperi == 0x01)
    {
        wcnt = wcnt>>10 ;
    }
    else if(wperi == 0x02)
    {
        wcnt = wcnt>>12 ;
    }
    else
    {
        wcnt = wcnt>>14 ;
    }

    if((wpmtarea == 0x00) | (wpmtarea == 0x0f))
    {
        WDT_Feed(); //100% area refresh enable
    }
    else if ((wpmtarea & 0x01 )== 0x01) //0-25% area refresh enable
    {
        if(wcnt == 0x00)
        {
            WDT_Feed();
        }
    }
      else if ((wpmtarea & 0x02 )== 0x02) //25-50% area refresh enable
    {
        if(wcnt == 0x01)
        {
            WDT_Feed();
        }
    }
    else if ((wpmtarea & 0x04 )== 0x04) //50-75% area refresh enable
    {
        if(wcnt == 0x02)
        {
            WDT_Feed();
        }
    }
    else if ((wpmtarea & 0x08 )== 0x08) //75-100% area refresh enable
    {
        if(wcnt == 0x03)
        {
            WDT_Feed();
        }
    }

//    loop_wait(0x0010);
}

void WDT_Process(void)
{
    if(0 == M4_ICG->ICG0_f.WDTAUTS)
    {
        wdt_judge();
    }
    if(0 == M4_ICG->ICG0_f.SWDTAUTS)
    {
        swdt_judge();
    }
}

/** private functions **/

uint32_t _FlashWrite(void *block_start,
                    uint32_t offset_into_block,
                    uint32_t count,
                    char const *buffer)
{
    //(*((volatile unsigned int*)(0x4005384C))) = 0x40; // for test
    uint32_t LoadAddr = (uint32_t)block_start + offset_into_block;
    flashunit * pData = (flashunit *)buffer;
    do
    {
        if(RESULT_OK != _FlashWriteUnit(LoadAddr, *pData))
        {
            _FlashCleanup();
            return(RESULT_ERROR);
        }
        ++pData;
        LoadAddr += sizeof(flashunit);
        count -= sizeof(flashunit);
    }
    while(count >= sizeof(flashunit));

    //CLK_HRCInit();
    return(RESULT_OK);
}

uint32_t _FlashPrepare(void)
{
    WDT_Process();

    /* release write protect */
    M4_EFM->FAPRT = 0xFFFF0123ul;
    M4_EFM->FAPRT = 0xFFFF3210ul;

    WDT_Process();

    return(RESULT_OK) ;
}

void _FlashCleanup(void)
{
}

uint32_t _FlashWriteUnit(uint32_t LoadAddr, flashunit Data)
{
    uint32_t u32To = TIMEOUT;
//    if(IS_BOOT_MODE())
//    {
//        return (RESULT_ERROR);
//    }

    WDT_Process();

    /* FWMC:PEMODE = 1 */
    M4_EFM->FWMC = 0x00000001ul;
    /* FWMC:PEMOD[2:0] = 001b */
    M4_EFM->FWMC = 0x00000011ul;
    *( ( volatile flashunit * )LoadAddr ) = Data ;
    while ((0 == M4_EFM->FSR & 0x100ul) && --u32To >0)
    {
        WDT_Process();
    }

    WDT_Process();

    if(0 == u32To)
    {
        return RESULT_ERROR;
    }
    /* FWMC:BUSHLDCTL = 0 */
//    M4_EFM->FWMC_f.BUSHLDCTL = 0ul;
    /* FWMC:PEMOD[2:0] = 0 */
    M4_EFM->FWMC_f.PEMOD = 0ul;
    /* FWMC:PEMODE = 0 */
    M4_EFM->FWMC_f.PEMODE = 0ul;

    WDT_Process();

    return( RESULT_OK ) ;
}

uint32_t _FlashEraseSector(uint32_t SectorAddr)
{
    uint32_t u32To = TIMEOUT*10;
//    if(IS_BOOT_MODE())
//    {
//        return (RESULT_ERROR);
//    }

    CLK_HRCInit();
    WDT_Process();

    /* FWMC:PEMODE = 1 */
    M4_EFM->FWMC = 0x00000001ul;
    /* FWMC:PEMOD[2:0] = 100b */
    M4_EFM->FWMC = 0x00000041ul;
    /* FWMC:BUSHLDCTL = 1 */
//    M4_EFM->FWMC_f.BUSHLDCTL = 1ul;
    WDT_Process();
    *( ( volatile flashunit * )SectorAddr ) = 0 ;
    while ((0 == M4_EFM->FSR & 0x100ul) && --u32To >0)
    {
        WDT_Process();
    }

    /* FWMC:BUSHLDCTL = 0 */
//    M4_EFM->FWMC_f.BUSHLDCTL = 0ul;
    /* FWMC:PEMOD[2:0] = 0 */
    M4_EFM->FWMC_f.PEMOD = 0ul;
    /* FWMC:PEMODE = 0 */
    M4_EFM->FWMC_f.PEMODE = 0ul;

//    if(0 == SectorAddr)
//    {
//        EFM_Trimload();
//    }

    WDT_Process();

    if(0 == u32To)
    {
        return RESULT_ERROR;
    }

    CLK_PLLInit();
    WDT_Process();

    return( RESULT_OK ) ;
}
