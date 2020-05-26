/**
 *******************************************************************************
 * @file  HC32M423.h
 * @brief Headerfile for HC32M423 series MCU
 @verbatim
   Change Logs:
   Date             Author          Notes
   2020-02-17       Levi          First version
 @endverbatim
 *******************************************************************************
 * Copyright (C) 2016, Huada Semiconductor Co.,Ltd. All rights reserved.
 *
 * This software is owned and published by:
 * Huada Semiconductor Co.,Ltd. ("HDSC").
 *
 * BY DOWNLOADING, INSTALLING OR USING THIS SOFTWARE, YOU AGREE TO BE BOUND
 * BY ALL THE TERMS AND CONDITIONS OF THIS AGREEMENT.
 *
 * This software contains source code for use with HDSC
 * components. This software is licensed by HDSC to be adapted only
 * for use in systems utilizing HDSC components. HDSC shall not be
 * responsible for misuse or illegal use of this software for devices not
 * supported herein. HDSC is providing this software "AS IS" and will
 * not be responsible for issues arising from incorrect user implementation
 * of the software.
 *
 * Disclaimer:
 * HDSC MAKES NO WARRANTY, EXPRESS OR IMPLIED, ARISING BY LAW OR OTHERWISE,
 * REGARDING THE SOFTWARE (INCLUDING ANY ACCOMPANYING WRITTEN MATERIALS),
 * ITS PERFORMANCE OR SUITABILITY FOR YOUR INTENDED USE, INCLUDING,
 * WITHOUT LIMITATION, THE IMPLIED WARRANTY OF MERCHANTABILITY, THE IMPLIED
 * WARRANTY OF FITNESS FOR A PARTICULAR PURPOSE OR USE, AND THE IMPLIED
 * WARRANTY OF NONINFRINGEMENT.
 * HDSC SHALL HAVE NO LIABILITY (WHETHER IN CONTRACT, WARRANTY, TORT,
 * NEGLIGENCE OR OTHERWISE) FOR ANY DAMAGES WHATSOEVER (INCLUDING, WITHOUT
 * LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS, BUSINESS INTERRUPTION,
 * LOSS OF BUSINESS INFORMATION, OR OTHER PECUNIARY LOSS) ARISING FROM USE OR
 * INABILITY TO USE THE SOFTWARE, INCLUDING, WITHOUT LIMITATION, ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL OR CONSEQUENTIAL DAMAGES OR LOSS OF DATA,
 * SAVINGS OR PROFITS,
 * EVEN IF Disclaimer HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
 * YOU ASSUME ALL RESPONSIBILITIES FOR SELECTION OF THE SOFTWARE TO ACHIEVE YOUR
 * INTENDED RESULTS, AND FOR THE INSTALLATION OF, USE OF, AND RESULTS OBTAINED
 * FROM, THE SOFTWARE.
 *
 * This software may be replicated in part or whole for the licensed use,
 * with the restriction that this Disclaimer and Copyright notice must be
 * included with each copy of this software, whether used in part or whole,
 * at all times.
 */
/******************************************************************************/
/** \file HC32M423.h
 **
 ** Auto generate.
 ** Header file for HC32M423 series MCU
 **
 ** History:
 **
 **   - 2020-02-17  1.0   First version for Device Driver Library of HC32M423 series MCU.
 **
 ******************************************************************************/

#ifndef __HC32M423_H__
#define __HC32M423_H__

#ifdef __cplusplus
extern "C" {
#endif

/*******************************************************************************
 * Configuration of the Cortex-M4 Processor and Core Peripherals
 ******************************************************************************/
#define __MPU_PRESENT             1       /*!< HC32M423 provides MPU                            */
#define __VTOR_PRESENT            1       /*!< HC32M423 supported vector table registers            */
#define __NVIC_PRIO_BITS          4       /*!< HC32M423 uses 4 Bits for the Priority Levels         */
#define __Vendor_SysTickConfig    0       /*!< Set to 1 if different SysTick Config is used              */
#define __FPU_PRESENT             1       /*!< FPU present                                               */

/*******************************************************************************
 * Interrupt Number Definition
 ******************************************************************************/
typedef enum IRQn
{
        NMI_IRQn            = -14,  /* Non Maskable                             */
        HardFault_IRQn      = -13,  /* Hard Fault                               */
        MemManageFault_IRQn = -12,  /* MemManage Fault                          */
        BusFault_IRQn       = -11,  /* Bus Fault                                */
        UsageFault_IRQn     = -10,  /* Usage Fault                              */
        SVC_IRQn            = -5,   /* SVCall                                   */
        DebugMonitor_IRQn   = -4,   /* DebugMonitor                             */
        PendSV_IRQn         = -2,   /* Pend SV                                  */
        SysTick_IRQn        = -1,   /* System Tick                              */
        Int000_IRQn         = 0,
        Int001_IRQn         = 1,
        Int002_IRQn         = 2,
        Int003_IRQn         = 3,
        Int004_IRQn         = 4,
        Int005_IRQn         = 5,
        Int006_IRQn         = 6,
        Int007_IRQn         = 7,
        ExInt0_IRQn         = 8,
        ExInt1_IRQn         = 9,
        ExInt2_IRQn         = 10,
        ExInt3_IRQn         = 11,
        ExInt4_IRQn         = 12,
        ExInt5_IRQn         = 13,
        ExInt6_IRQn         = 14,
        ExInt7_IRQn         = 15,
        SwInt0_IRQn         = 0,
        SwInt1_IRQn         = 1,
        SwInt2_IRQn         = 2,
        SwInt3_IRQn         = 3,
        SwInt4_IRQn         = 4,
        SwInt5_IRQn         = 5,
        SwInt6_IRQn         = 6,
        SwInt7_IRQn         = 7,
        SwInt8_IRQn         = 8,
        SwInt9_IRQn         = 9,
        SwInt10_IRQn        = 10,
        SwInt11_IRQn        = 11,
        SwInt12_IRQn        = 12,
        SwInt13_IRQn        = 13,
        SwInt14_IRQn        = 14,
        SwInt15_IRQn        = 15,
        DmacTC0_IRQn        = 16,
        DmacTC1_IRQn        = 17,
        DmacTC2_IRQn        = 18,
        DmacTC3_IRQn        = 19,
        DmacBTC0_IRQn       = 20,
        DmacBTC1_IRQn       = 21,
        DmacBTC2_IRQn       = 22,
        DmacBTC3_IRQn       = 23,
        DmacErr_IRQn        = 24,
        EfmErr_IRQn         = 25,
        EfmReadCol_IRQn     = 26,
        EfmOpEnd_IRQn       = 27,
        Dcu_IRQn            = 28,
        Tmr01GCMA_IRQn      = 29,
        Tmr01GCMB_IRQn      = 30,
        Tmr02GCMA_IRQn      = 31,
        Tmr02GCMB_IRQn      = 32,
        XtalStop_IRQn       = 33,
        Swdt_IRQn           = 34,
        TmrA1OVF_IRQn       = 35,
        TmrA1UDF_IRQn       = 36,
        TmrA1CMP_IRQn       = 37,
        TmrA2OVF_IRQn       = 38,
        TmrA2UDF_IRQn       = 39,
        TmrA2CMP_IRQn       = 40,
        TmrA3OVF_IRQn       = 41,
        TmrA3UDF_IRQn       = 42,
        TmrA3CMP_IRQn       = 43,
        TmrA4OVF_IRQn       = 44,
        TmrA4UDF_IRQn       = 45,
        TmrA4CMP_IRQn       = 46,
        TmrBOVF_IRQn        = 47,
        TmrBUDF_IRQn        = 48,
        TmrBCMP_IRQn        = 49,
        Usart1EI_IRQn       = 50,
        Usart1RI_IRQn       = 51,
        Usart1TI_IRQn       = 52,
        Usart1TCI_IRQn      = 53,
        Usart2EI_IRQn       = 54,
        Usart2RI_IRQn       = 55,
        Usart2TI_IRQn       = 56,
        Usart2TCI_IRQn      = 57,
        Usart3EI_IRQn       = 58,
        Usart3RI_IRQn       = 59,
        Usart3TI_IRQn       = 60,
        Usart3TCI_IRQn      = 61,
        Usart4EI_IRQn       = 62,
        Usart4RI_IRQn       = 63,
        Usart4TI_IRQn       = 64,
        Usart4TCI_IRQn      = 65,
        SpiSRRI_IRQn        = 66,
        SpiSRTI_IRQn        = 67,
        SpiSpiI_IRQn        = 68,
        SpiSPEI_IRQn        = 69,
        Tmr4GCMUH_IRQn      = 70,
        Tmr4GCMUL_IRQn      = 71,
        Tmr4GCMVH_IRQn      = 72,
        Tmr4GCMVL_IRQn      = 73,
        Tmr4GCMWH_IRQn      = 74,
        Tmr4GCMWL_IRQn      = 75,
        Tmr4OVF_IRQn        = 76,
        Tmr4UDF_IRQn        = 77,
        Tmr4RLOU_IRQn       = 78,
        Tmr4RLOV_IRQn       = 79,
        Tmr4RLOW_IRQn       = 80,
        EmbGR0_IRQn         = 81,
        Acmp1_IRQn          = 82,
        Acmp2_IRQn          = 83,
        Acmp3_IRQn          = 84,
        I2cRXI_IRQn         = 85,
        I2cTXI_IRQn         = 86,
        I2cTEI_IRQn         = 87,
        I2cEEI_IRQn         = 88,
        Usart1WUPI_IRQn     = 89,
        Lvd1_IRQn           = 90,
        Lvd2_IRQn           = 91,
        FCMFERRI_IRQn       = 92,
        FCMMENDI_IRQn       = 93,
        FCMCOVFI_IRQn       = 94,
        Wdt_IRQn            = 95,
        CtcErr_IRQn         = 96,
        AdcEOCA_IRQn        = 97,
        AdcEOCB_IRQn        = 98,
        AdcCHCMP_IRQn       = 99,
        AdcSEQCMP_IRQn      = 100,

} IRQn_Type;

#include <core_cm4.h>
#include <stdint.h>

/**
 *******************************************************************************
 ** \brief Event number enumeration
 ******************************************************************************/
typedef enum en_event_src
{
        EVT_SWI_IRQ0        = 0,
        EVT_SWI_IRQ1        = 1,
        EVT_SWI_IRQ2        = 2,
        EVT_SWI_IRQ3        = 3,
        EVT_SWI_IRQ4        = 4,
        EVT_SWI_IRQ5        = 5,
        EVT_SWI_IRQ6        = 6,
        EVT_SWI_IRQ7        = 7,
        EVT_SWI_IRQ8        = 8,
        EVT_SWI_IRQ9        = 9,
        EVT_SWI_IRQ10       = 10,
        EVT_SWI_IRQ11       = 11,
        EVT_SWI_IRQ12       = 12,
        EVT_SWI_IRQ13       = 13,
        EVT_SWI_IRQ14       = 14,
        EVT_SWI_IRQ15       = 15,

        /* External Interrupt */
        EVT_PORT_EIRQ0      = 0,
        EVT_PORT_EIRQ1      = 1,
        EVT_PORT_EIRQ2      = 2,
        EVT_PORT_EIRQ3      = 3,
        EVT_PORT_EIRQ4      = 4,
        EVT_PORT_EIRQ5      = 5,
        EVT_PORT_EIRQ6      = 6,
        EVT_PORT_EIRQ7      = 7,

        /*  DMA  */
        EVT_DMA_TC0         = 32,
        EVT_DMA_TC1         = 33,
        EVT_DMA_TC2         = 34,
        EVT_DMA_TC3         = 35,

        EVT_DMA_BTC0        = 40,
        EVT_DMA_BTC1        = 41,
        EVT_DMA_BTC2        = 42,
        EVT_DMA_BTC3        = 43,

        /* EFM  */
        EVT_EFM_OPTEND      = 52,

        /* DCU  */
        EVT_DCU             = 55,

        /* TMR0  */
        EVT_TMR01_GCMA      = 64,
        EVT_TMR01_GCMB      = 65,
        EVT_TMR02_GCMA      = 66,
        EVT_TMR02_GCMB      = 67,

        /* TMRA */
        EVT_TMRA1_OVF       = 256,
        EVT_TMRA1_UDF       = 257,
        EVT_TMRA1_CMP       = 258,
        EVT_TMRA2_OVF       = 259,
        EVT_TMRA2_UDF       = 260,
        EVT_TMRA2_CMP       = 261,
        EVT_TMRA3_OVF       = 262,
        EVT_TMRA3_UDF       = 263,
        EVT_TMRA3_CMP       = 264,
        EVT_TMRA4_OVF       = 265,
        EVT_TMRA4_UDF       = 266,
        EVT_TMRA4_CMP       = 267,

        /* TMRB */
        EVT_TMRB_OVF        = 274,
        EVT_TMRB_UDF        = 275,
        EVT_TMRB_CMP        = 276,

        /* USART */
        EVT_USART1_EI       = 278,
        EVT_USART1_RI       = 279,
        EVT_USART1_TI       = 280,
        EVT_USART1_TCI      = 281,
        EVT_USART2_EI       = 283,
        EVT_USART2_RI       = 284,
        EVT_USART2_TI       = 285,
        EVT_USART2_TCI      = 286,
        EVT_USART3_EI       = 288,
        EVT_USART3_RI       = 289,
        EVT_USART3_TI       = 290,
        EVT_USART3_TCI      = 291,
        EVT_USART4_EI       = 293,
        EVT_USART4_RI       = 294,
        EVT_USART4_TI       = 295,
        EVT_USART4_TCI      = 296,

        /* SPI */
        EVT_SPI_SRRI        = 299,
        EVT_SPI_SRTI        = 300,
        EVT_SPI_SPII        = 301,
        EVT_SPI_SPEI        = 302,
        EVT_SPI_SPTEND      = 303,

        /* AOS */
        EVT_AOS_STRG        = 319,

        /* TMR4 */
        EVT_TMR4_SCMUH      = 368,
        EVT_TMR4_SCMUL      = 369,
        EVT_TMR4_SCMVH      = 370,
        EVT_TMR4_SCMVL      = 371,
        EVT_TMR4_SCMWH      = 372,
        EVT_TMR4_SCMWL      = 373,

        /* ACMP */
        EVT_ACMP1           = 416,
        EVT_ACMP2           = 417,
        EVT_ACMP3           = 418,

        /* I2C */
        EVT_I2C_RXI         = 420,
        EVT_I2C_TXI         = 421,
        EVT_I2C_TEI         = 422,
        EVT_I2C_EE1         = 423,

        /* LVD */
        EVT_LVD1            = 433,
        EVT_LVD2            = 434,

        /* WDT */
        EVT_WDT_REFUDF      = 439,

        /* ADC */
        EVT_ADC_EOCA        = 448,
        EVT_ADC_EOCB        = 449,
        EVT_ADC_CHCMP       = 450,
        EVT_ADC_SEQCMP      = 451,
} en_event_src_t;

/**
 *******************************************************************************
 ** \brief Interrupt number enumeration
 ******************************************************************************/
typedef enum en_int_src
{
        INT_SWI_IRQ0        = 0,
        INT_SWI_IRQ1        = 1,
        INT_SWI_IRQ2        = 2,
        INT_SWI_IRQ3        = 3,
        INT_SWI_IRQ4        = 4,
        INT_SWI_IRQ5        = 5,
        INT_SWI_IRQ6        = 6,
        INT_SWI_IRQ7        = 7,
        INT_SWI_IRQ8        = 8,
        INT_SWI_IRQ9        = 9,
        INT_SWI_IRQ10       = 10,
        INT_SWI_IRQ11       = 11,
        INT_SWI_IRQ12       = 12,
        INT_SWI_IRQ13       = 13,
        INT_SWI_IRQ14       = 14,
        INT_SWI_IRQ15       = 15,

        /* External Interrupt */
        INT_PORT_EIRQ0      = 0,
        INT_PORT_EIRQ1      = 1,
        INT_PORT_EIRQ2      = 2,
        INT_PORT_EIRQ3      = 3,
        INT_PORT_EIRQ4      = 4,
        INT_PORT_EIRQ5      = 5,
        INT_PORT_EIRQ6      = 6,
        INT_PORT_EIRQ7      = 7,

        /* DMA */
        INT_DMA_TC0         = 32,
        INT_DMA_TC1         = 33,
        INT_DMA_TC2         = 34,
        INT_DMA_TC3         = 35,

        INT_DMA_BTC0        = 40,
        INT_DMA_BTC1        = 41,
        INT_DMA_BTC2        = 42,
        INT_DMA_BTC3        = 43,
        INT_DMA_ERR         = 48,

        /* EFM */
        INT_EFM_PEERR       = 50,
        INT_EFM_COLERR      = 51,
        INT_EFM_OPTEND      = 52,

        /* DCU */
        INT_DCU             = 55,

        /* TMR0 */
        INT_TMR01_GCMA      = 64,
        INT_TMR01_GCMB      = 65,
        INT_TMR02_GCMA      = 66,
        INT_TMR02_GCMB      = 67,

        /* XTAL */
        INT_XTAL_STOP       = 85,

        /* SWDT */
        INT_SWDT_REFUDF     = 87,

        /* TMRA */
        INT_TMRA1_OVF       = 256,
        INT_TMRA1_UDF       = 257,
        INT_TMRA1_CMP       = 258,
        INT_TMRA2_OVF       = 259,
        INT_TMRA2_UDF       = 260,
        INT_TMRA2_CMP       = 261,
        INT_TMRA3_OVF       = 262,
        INT_TMRA3_UDF       = 263,
        INT_TMRA3_CMP       = 264,
        INT_TMRA4_OVF       = 265,
        INT_TMRA4_UDF       = 266,
        INT_TMRA4_CMP       = 267,

        /* TMRB */
        INT_TMRB_OVF        = 274,
        INT_TMRB_UDF        = 275,
        INT_TMRB_CMP        = 276,

        /* USART */
        INT_USART1_EI       = 278,
        INT_USART1_RI       = 279,
        INT_USART1_TI       = 280,
        INT_USART1_TCI      = 281,
        INT_USART2_EI       = 283,
        INT_USART2_RI       = 284,
        INT_USART2_TI       = 285,
        INT_USART2_TCI      = 286,
        INT_USART3_EI       = 288,
        INT_USART3_RI       = 289,
        INT_USART3_TI       = 290,
        INT_USART3_TCI      = 291,
        INT_USART4_EI       = 293,
        INT_USART4_RI       = 294,
        INT_USART4_TI       = 295,
        INT_USART4_TCI      = 296,

        /* SPI */
        INT_SPI_SRRI        = 299,
        INT_SPI_SRTI        = 300,
        INT_SPI_SPII        = 301,
        INT_SPI_SPEI        = 302,

        /* TMR4 */
        INT_TMR4_GCMUH      = 320,
        INT_TMR4_GCMUL      = 321,
        INT_TMR4_GCMVH      = 322,
        INT_TMR4_GCMVL      = 323,
        INT_TMR4_GCMWH      = 324,
        INT_TMR4_GCMWL      = 325,
        INT_TMR4_GOVF       = 326,
        INT_TMR4_GUDF       = 327,
        INT_TMR4_RLOU       = 328,
        INT_TMR4_RLOV       = 329,
        INT_TMR4_RLOW       = 330,

        /* EMB */
        INT_EMB_GR0         = 390,

        /* ACMP */
        INT_ACMP1           = 416,
        INT_ACMP2           = 417,
        INT_ACMP3           = 418,

        /* I2C */
        INT_I2C_RXI         = 420,
        INT_I2C_TXI         = 421,
        INT_I2C_TEI         = 422,
        INT_I2C_EE1         = 423,

        /* USART1 wakeup */
        INT_USART1_WUPI     = 432,

        /* LVD */
        INT_LVD1            = 433,
        INT_LVD2            = 434,

        /* FCM */
        INT_FCMFERRI        = 436,
        INT_FCMMENDI        = 437,
        INT_FCMCOVFI        = 438,

        /* WDT */
        INT_WDT_REFUDF      = 439,

        /* CTC */
        INT_CTC_ERR         = 440,

        /* ADC */
        INT_ADC_EOCA        = 448,
        INT_ADC_EOCB        = 449,
        INT_ADC_CHCMP       = 450,
        INT_ADC_SEQCMP      = 451,
} en_int_src_t;

#if defined ( __CC_ARM   )
#pragma anon_unions
#endif

/******************************************************************************/
/*                Device Specific Peripheral Registers structures             */
/******************************************************************************/
/**
 * @brief ADC
 */
typedef struct
{
    __IO uint8_t  STR;
    uint8_t RESERVED0[1];
    __IO uint16_t CR0;
    __IO uint16_t CR1;
    uint8_t RESERVED1[4];
    __IO uint16_t TRGSR;
    __IO uint16_t CHSELRA0;
    uint8_t RESERVED2[2];
    __IO uint16_t CHSELRB0;
    uint8_t RESERVED3[2];
    __IO uint16_t AVCHSELR0;
    uint8_t RESERVED4[2];
    __IO uint8_t  EXCHSELR;
    uint8_t RESERVED5[1];
    __IO uint16_t SHCR;
    uint8_t RESERVED6[4];
    __IO uint8_t  SSTR0;
    __IO uint8_t  SSTR1;
    __IO uint8_t  SSTR2;
    __IO uint8_t  SSTR3;
    __IO uint8_t  SSTR4;
    __IO uint8_t  SSTR5;
    __IO uint8_t  SSTR6;
    __IO uint8_t  SSTR7;
    __IO uint8_t  SSTR8;
    __IO uint8_t  SSTR9;
    uint8_t RESERVED7[26];
    __IO uint8_t  ISR;
    __IO uint8_t  ICR;
    __IO uint8_t  ISCLRR;
    uint8_t RESERVED8[9];
    __IO uint16_t DR0;
    __IO uint16_t DR1;
    __IO uint16_t DR2;
    __IO uint16_t DR3;
    __IO uint16_t DR4;
    __IO uint16_t DR5;
    __IO uint16_t DR6;
    __IO uint16_t DR7;
    __IO uint16_t DR8;
    __IO uint16_t DR9;
} M4_ADC_TypeDef;

/**
 * @brief AOS
 */
typedef struct
{
    __IO uint32_t INTC_STRGCR;
    uint8_t RESERVED0[28];
    __IO uint32_t TMR00_HTSSR;
    __IO uint32_t TMR01_HTSSR;
    uint8_t RESERVED1[24];
    __IO uint32_t TMRA0_HTSSR;
    __IO uint32_t TMRA1_HTSSR;
    uint8_t RESERVED2[8];
    __IO uint32_t TMRB_HTSSR;
    uint8_t RESERVED3[12];
    __IO uint32_t ADC_ITRGSELR0;
    __IO uint32_t ADC_ITRGSELR1;
    uint8_t RESERVED4[24];
    __IO uint32_t DMA0_TRGSEL;
    __IO uint32_t DMA1_TRGSEL;
    __IO uint32_t DMA2_TRGSEL;
    __IO uint32_t DMA3_TRGSEL;
    __IO uint32_t DCU_TRGSEL;
} M4_AOS_TypeDef;

/**
 * @brief CMP
 */
typedef struct
{
    __IO uint8_t  MDR;
    __IO uint8_t  FIR;
    __IO uint8_t  OCR;
    __IO uint8_t  VSR;
    __IO uint8_t  TWR1;
    __IO uint8_t  TWR2;
} M4_CMP_TypeDef;

/**
 * @brief CMU
 */
typedef struct
{
    __IO uint8_t  ADCKSEL;
    uint8_t RESERVED0[3];
    __IO uint8_t  XTALSTDSR;
    uint8_t RESERVED1[3];
    __IO uint32_t SCFGR;
    __IO uint8_t  CKSWR;
    uint8_t RESERVED2[3];
    __IO uint8_t  XTALCR;
    uint8_t RESERVED3[3];
    __IO uint8_t  XTALCFGR;
    __IO uint8_t  XTALSTBCR;
    uint8_t RESERVED4[2];
    __IO uint8_t  HRCCR;
    uint8_t RESERVED5[3];
    __IO uint8_t  HRCCFGR;
    uint8_t RESERVED6[3];
    __IO uint8_t  OSCSTBSR;
    uint8_t RESERVED7[3];
    __IO uint8_t  MCOCFGR;
    uint8_t RESERVED8[3];
    __IO uint8_t  XTALSTDCR;
    uint8_t RESERVED9[7];
    __IO uint32_t FCG;
    uint8_t RESERVED10[8];
    __IO uint8_t  LRCCR;
    uint8_t RESERVED11[3];
    __IO uint8_t  MRCCR;
    uint8_t RESERVED12[3];
    __IO uint32_t PLLCFGR;
    __IO uint8_t  PLLCR;
    uint8_t RESERVED13[3];
    __IO uint8_t  TPIUCKCFGR;
} M4_CMU_TypeDef;

/**
 * @brief CRC
 */
typedef struct
{
    __IO uint32_t CR;
    __IO uint32_t RESLT;
    uint8_t RESERVED0[120];
    __IO uint32_t DAT0;
    __IO uint32_t DAT1;
    __IO uint32_t DAT2;
    __IO uint32_t DAT3;
    __IO uint32_t DAT4;
    __IO uint32_t DAT5;
    __IO uint32_t DAT6;
    __IO uint32_t DAT7;
    __IO uint32_t DAT8;
    __IO uint32_t DAT9;
    __IO uint32_t DAT10;
    __IO uint32_t DAT11;
    __IO uint32_t DAT12;
    __IO uint32_t DAT13;
    __IO uint32_t DAT14;
    __IO uint32_t DAT15;
    __IO uint32_t DAT16;
    __IO uint32_t DAT17;
    __IO uint32_t DAT18;
    __IO uint32_t DAT19;
    __IO uint32_t DAT20;
    __IO uint32_t DAT21;
    __IO uint32_t DAT22;
    __IO uint32_t DAT23;
    __IO uint32_t DAT24;
    __IO uint32_t DAT25;
    __IO uint32_t DAT26;
    __IO uint32_t DAT27;
    __IO uint32_t DAT28;
    __IO uint32_t DAT29;
    __IO uint32_t DAT30;
    __IO uint32_t DAT31;
} M4_CRC_TypeDef;

/**
 * @brief CTC
 */
typedef struct
{
    __IO uint32_t CR1;
    __IO uint32_t CR2;
    __IO uint32_t STR;
} M4_CTC_TypeDef;

/**
 * @brief DAC
 */
typedef struct
{
    __IO uint16_t DADR1;
    uint8_t RESERVED0[6];
    __IO uint16_t DACR1;
    uint8_t RESERVED1[2];
    __IO uint16_t DADC1;
} M4_DAC_TypeDef;

/**
 * @brief DBGC
 */
typedef struct
{
    __IO uint32_t AUTHID0;
    __IO uint32_t AUTHID1;
    __IO uint32_t AUTHID2;
    __IO uint32_t RESV0;
    __IO uint32_t MCUSTAT;
    __IO uint32_t MCUCTL;
    __IO uint32_t FMCCTL;
} M4_DBGC_TypeDef;

/**
 * @brief DCU
 */
typedef struct
{
    __IO uint32_t CTL;
    __IO uint32_t FLAG;
    __IO uint32_t DATA0;
    __IO uint32_t DATA1;
    __IO uint32_t DATA2;
    __IO uint32_t FLAGCLR;
    __IO uint32_t INTSEL;
} M4_DCU_TypeDef;

/**
 * @brief DMA
 */
typedef struct
{
    __IO uint32_t EN;
    __IO uint32_t INTSTAT0;
    __IO uint32_t INTSTAT1;
    __IO uint32_t INTMASK0;
    __IO uint32_t INTMASK1;
    __IO uint32_t INTCLR0;
    __IO uint32_t INTCLR1;
    __IO uint32_t CHEN;
    uint8_t RESERVED0[4];
    __IO uint32_t CHSTAT;
    uint8_t RESERVED1[8];
    __IO uint32_t RAM_LLP;
    __IO uint32_t ROM_LLP;
    __IO uint32_t CHENCLR;
    uint8_t RESERVED2[4];
    __IO uint32_t SAR0;
    __IO uint32_t DAR0;
    __IO uint32_t CH0CTL0;
    __IO uint32_t CH0CTL1;
    uint8_t RESERVED3[48];
    __IO uint32_t SAR1;
    __IO uint32_t DAR1;
    __IO uint32_t CH1CTL0;
    __IO uint32_t CH1CTL1;
    uint8_t RESERVED4[48];
    __IO uint32_t SAR2;
    __IO uint32_t DAR2;
    __IO uint32_t CH2CTL0;
    __IO uint32_t CH2CTL1;
    uint8_t RESERVED5[48];
    __IO uint32_t SAR3;
    __IO uint32_t DAR3;
    __IO uint32_t CH3CTL0;
    __IO uint32_t CH3CTL1;
} M4_DMA_TypeDef;

/**
 * @brief EFM
 */
typedef struct
{
    __IO uint32_t FAPRT;
    __IO uint32_t FSTP;
    __IO uint32_t FRMC;
    __IO uint32_t FWMC;
    __IO uint32_t FSR;
    __IO uint32_t FSCLR;
    __IO uint32_t FITE;
    uint8_t RESERVED0[4];
    __IO uint32_t FPMTSW;
    __IO uint32_t FPMTEW;
    uint8_t RESERVED1[40];
    __IO uint32_t UQID0;
    __IO uint32_t UQID1;
    __IO uint32_t UQID2;
    __IO uint32_t UQID3;
    uint8_t RESERVED2[546];
    __IO uint8_t  HRCCFGR;
} M4_EFM_TypeDef;

/**
 * @brief EMB
 */
typedef struct
{
    __IO uint32_t CTL0;
    __IO uint32_t PWMLV0;
    __IO uint32_t SOE0;
    __IO uint32_t STAT0;
    __IO uint32_t STATCLR0;
    __IO uint32_t INTEN0;
    uint8_t RESERVED0[8];
    __IO uint32_t CTL1;
    uint8_t RESERVED1[4];
    __IO uint32_t SOE1;
    __IO uint32_t STAT1;
    __IO uint32_t STATCLR1;
    __IO uint32_t INTEN1;
    __IO uint32_t ECSR;
} M4_EMB_TypeDef;

/**
 * @brief FCM
 */
typedef struct
{
    __IO uint32_t LVR;
    __IO uint32_t UVR;
    __IO uint32_t CNTR;
    __IO uint32_t STR;
    __IO uint32_t MCCR;
    __IO uint32_t RCCR;
    __IO uint32_t RIER;
    __IO uint32_t SR;
    __IO uint32_t CLR;
} M4_FCM_TypeDef;

/**
 * @brief GPIO
 */
typedef struct
{
    __IO uint8_t  PIDR0;
    __IO uint8_t  PIDR1;
    __IO uint8_t  PIDR2;
    __IO uint8_t  PIDR3;
    __IO uint8_t  PIDR4;
    __IO uint8_t  PIDR5;
    uint8_t RESERVED0[1];
    __IO uint8_t  PIDR7;
    uint8_t RESERVED1[1];
    __IO uint8_t  PIDR9;
    __IO uint8_t  PIDRA;
    __IO uint8_t  PIDRB;
    uint8_t RESERVED2[1];
    __IO uint8_t  PIDRD;
    __IO uint8_t  PIDRE;
    uint8_t RESERVED3[1];
    __IO uint8_t  PODR0;
    __IO uint8_t  PODR1;
    __IO uint8_t  PODR2;
    __IO uint8_t  PODR3;
    __IO uint8_t  PODR4;
    __IO uint8_t  PODR5;
    uint8_t RESERVED4[1];
    __IO uint8_t  PODR7;
    uint8_t RESERVED5[1];
    __IO uint8_t  PODR9;
    __IO uint8_t  PODRA;
    __IO uint8_t  PODRB;
    uint8_t RESERVED6[1];
    __IO uint8_t  PODRD;
    __IO uint8_t  PODRE;
    uint8_t RESERVED7[1];
    __IO uint8_t  POER0;
    __IO uint8_t  POER1;
    __IO uint8_t  POER2;
    __IO uint8_t  POER3;
    __IO uint8_t  POER4;
    __IO uint8_t  POER5;
    uint8_t RESERVED8[1];
    __IO uint8_t  POER7;
    uint8_t RESERVED9[1];
    __IO uint8_t  POER9;
    __IO uint8_t  POERA;
    __IO uint8_t  POERB;
    uint8_t RESERVED10[1];
    __IO uint8_t  POERD;
    __IO uint8_t  POERE;
    uint8_t RESERVED11[1];
    __IO uint8_t  POSR0;
    __IO uint8_t  POSR1;
    __IO uint8_t  POSR2;
    __IO uint8_t  POSR3;
    __IO uint8_t  POSR4;
    __IO uint8_t  POSR5;
    uint8_t RESERVED12[1];
    __IO uint8_t  POSR7;
    uint8_t RESERVED13[1];
    __IO uint8_t  POSR9;
    __IO uint8_t  POSRA;
    __IO uint8_t  POSRB;
    uint8_t RESERVED14[1];
    __IO uint8_t  POSRD;
    __IO uint8_t  POSRE;
    uint8_t RESERVED15[1];
    __IO uint8_t  PORR0;
    __IO uint8_t  PORR1;
    __IO uint8_t  PORR2;
    __IO uint8_t  PORR3;
    __IO uint8_t  PORR4;
    __IO uint8_t  PORR5;
    uint8_t RESERVED16[1];
    __IO uint8_t  PORR7;
    uint8_t RESERVED17[1];
    __IO uint8_t  PORR9;
    __IO uint8_t  PORRA;
    __IO uint8_t  PORRB;
    uint8_t RESERVED18[1];
    __IO uint8_t  PORRD;
    __IO uint8_t  PORRE;
    uint8_t RESERVED19[1];
    __IO uint8_t  POTR0;
    __IO uint8_t  POTR1;
    __IO uint8_t  POTR2;
    __IO uint8_t  POTR3;
    __IO uint8_t  POTR4;
    __IO uint8_t  POTR5;
    uint8_t RESERVED20[1];
    __IO uint8_t  POTR7;
    uint8_t RESERVED21[1];
    __IO uint8_t  POTR9;
    __IO uint8_t  POTRA;
    __IO uint8_t  POTRB;
    uint8_t RESERVED22[1];
    __IO uint8_t  POTRD;
    __IO uint8_t  POTRE;
    uint8_t RESERVED23[673];
    __IO uint16_t PSPCR;
    uint8_t RESERVED24[2];
    __IO uint16_t PCCR;
    __IO uint16_t PINAER;
    __IO uint16_t PWPR;
    uint8_t RESERVED25[246];
    __IO uint16_t PCR00;
    __IO uint16_t PFSR00;
    __IO uint16_t PCR01;
    __IO uint16_t PFSR01;
    __IO uint16_t PCR02;
    __IO uint16_t PFSR02;
    uint8_t RESERVED26[20];
    __IO uint16_t PCR10;
    __IO uint16_t PFSR10;
    __IO uint16_t PCR11;
    __IO uint16_t PFSR11;
    uint8_t RESERVED27[32];
    __IO uint16_t PCR22;
    __IO uint16_t PFSR22;
    __IO uint16_t PCR23;
    __IO uint16_t PFSR23;
    __IO uint16_t PCR24;
    __IO uint16_t PFSR24;
    uint8_t RESERVED28[12];
    __IO uint16_t PCR30;
    __IO uint16_t PFSR30;
    __IO uint16_t PCR31;
    __IO uint16_t PFSR31;
    __IO uint16_t PCR32;
    __IO uint16_t PFSR32;
    __IO uint16_t PCR33;
    __IO uint16_t PFSR33;
    uint8_t RESERVED29[8];
    __IO uint16_t PCR36;
    __IO uint16_t PFSR36;
    __IO uint16_t PCR37;
    __IO uint16_t PFSR37;
    __IO uint16_t PCR40;
    __IO uint16_t PFSR40;
    __IO uint16_t PCR41;
    __IO uint16_t PFSR41;
    __IO uint16_t PCR42;
    __IO uint16_t PFSR42;
    __IO uint16_t PCR43;
    __IO uint16_t PFSR43;
    __IO uint16_t PCR44;
    __IO uint16_t PFSR44;
    __IO uint16_t PCR45;
    __IO uint16_t PFSR45;
    __IO uint16_t PCR46;
    __IO uint16_t PFSR46;
    __IO uint16_t PCR47;
    __IO uint16_t PFSR47;
    __IO uint16_t PCR50;
    __IO uint16_t PFSR50;
    uint8_t RESERVED30[60];
    __IO uint16_t PCR70;
    __IO uint16_t PFSR70;
    __IO uint16_t PCR71;
    __IO uint16_t PFSR71;
    __IO uint16_t PCR72;
    __IO uint16_t PFSR72;
    __IO uint16_t PCR73;
    __IO uint16_t PFSR73;
    __IO uint16_t PCR74;
    __IO uint16_t PFSR74;
    __IO uint16_t PCR75;
    __IO uint16_t PFSR75;
    __IO uint16_t PCR76;
    __IO uint16_t PFSR76;
    uint8_t RESERVED31[40];
    __IO uint16_t PCR91;
    __IO uint16_t PFSR91;
    __IO uint16_t PCR92;
    __IO uint16_t PFSR92;
    __IO uint16_t PCR93;
    __IO uint16_t PFSR93;
    __IO uint16_t PCR94;
    __IO uint16_t PFSR94;
    uint8_t RESERVED32[20];
    __IO uint16_t PCRA2;
    __IO uint16_t PFSRA2;
    __IO uint16_t PCRA3;
    __IO uint16_t PFSRA3;
    __IO uint16_t PCRA4;
    __IO uint16_t PFSRA4;
    __IO uint16_t PCRA5;
    __IO uint16_t PFSRA5;
    uint8_t RESERVED33[8];
    __IO uint16_t PCRB0;
    __IO uint16_t PFSRB0;
    __IO uint16_t PCRB1;
    __IO uint16_t PFSRB1;
    __IO uint16_t PCRB2;
    __IO uint16_t PFSRB2;
    __IO uint16_t PCRB3;
    __IO uint16_t PFSRB3;
    __IO uint16_t PCRB4;
    __IO uint16_t PFSRB4;
    __IO uint16_t PCRB5;
    __IO uint16_t PFSRB5;
    __IO uint16_t PCRB6;
    __IO uint16_t PFSRB6;
    __IO uint16_t PCRB7;
    __IO uint16_t PFSRB7;
    uint8_t RESERVED34[44];
    __IO uint16_t PCRD3;
    __IO uint16_t PFSRD3;
    __IO uint16_t PCRD4;
    __IO uint16_t PFSRD4;
    __IO uint16_t PCRD5;
    __IO uint16_t PFSRD5;
    __IO uint16_t PCRD6;
    __IO uint16_t PFSRD6;
    __IO uint16_t PCRD7;
    __IO uint16_t PFSRD7;
    uint8_t RESERVED35[8];
    __IO uint16_t PCRE2;
    __IO uint16_t PFSRE2;
} M4_GPIO_TypeDef;

/**
 * @brief I2C
 */
typedef struct
{
    __IO uint32_t CR1;
    __IO uint32_t CR2;
    uint8_t RESERVED0[8];
    __IO uint32_t SLR0;
    __IO uint32_t SLR1;
    uint8_t RESERVED1[4];
    __IO uint32_t SR;
    __IO uint32_t CLR;
    __IO uint32_t DTR;
    __IO uint32_t DRR;
    __IO uint32_t CCR;
    __IO uint32_t FLTR;
} M4_I2C_TypeDef;

/**
 * @brief ICG
 */
typedef struct
{
    __IO uint32_t ICG0;
    __IO uint32_t ICG1;
    __IO uint32_t ICG2;
    __IO uint32_t ICG3;
    __IO uint32_t ICG4;
    __IO uint32_t ICG5;
    __IO uint32_t ICG6;
    __IO uint32_t ICG7;
} M4_ICG_TypeDef;

/**
 * @brief INTC
 */
typedef struct
{
    __IO uint32_t NMICR;
    __IO uint32_t NMIER;
    __IO uint32_t NMIFR;
    __IO uint32_t NMICFR;
    __IO uint32_t EIRQCR0;
    __IO uint32_t EIRQCR1;
    __IO uint32_t EIRQCR2;
    __IO uint32_t EIRQCR3;
    __IO uint32_t EIRQCR4;
    __IO uint32_t EIRQCR5;
    __IO uint32_t EIRQCR6;
    __IO uint32_t EIRQCR7;
    uint8_t RESERVED0[32];
    __IO uint32_t WUPEN;
    __IO uint32_t EIRQFR;
    __IO uint32_t EIRQCFR;
    __IO uint32_t SEL0;
    __IO uint32_t SEL1;
    __IO uint32_t SEL2;
    __IO uint32_t SEL3;
    __IO uint32_t SEL4;
    __IO uint32_t SEL5;
    __IO uint32_t SEL6;
    __IO uint32_t SEL7;
    __IO uint32_t SEL8;
    __IO uint32_t SEL9;
    __IO uint32_t SEL10;
    __IO uint32_t SEL11;
    __IO uint32_t SEL12;
    __IO uint32_t SEL13;
    __IO uint32_t SEL14;
    __IO uint32_t SEL15;
    __IO uint32_t SEL16;
    __IO uint32_t SEL17;
    __IO uint32_t SEL18;
    __IO uint32_t SEL19;
    __IO uint32_t SEL20;
    __IO uint32_t SEL21;
    __IO uint32_t SEL22;
    __IO uint32_t SEL23;
    __IO uint32_t SEL24;
    __IO uint32_t SEL25;
    __IO uint32_t SEL26;
    __IO uint32_t SEL27;
    __IO uint32_t SEL28;
    __IO uint32_t SEL29;
    __IO uint32_t SEL30;
    __IO uint32_t SEL31;
    __IO uint32_t SEL32;
    __IO uint32_t SEL33;
    __IO uint32_t SEL34;
    __IO uint32_t SEL35;
    __IO uint32_t SEL36;
    __IO uint32_t SEL37;
    __IO uint32_t SEL38;
    __IO uint32_t SEL39;
    __IO uint32_t SEL40;
    __IO uint32_t SEL41;
    __IO uint32_t SEL42;
    __IO uint32_t SEL43;
    __IO uint32_t SEL44;
    __IO uint32_t SEL45;
    __IO uint32_t SEL46;
    __IO uint32_t SEL47;
    __IO uint32_t SEL48;
    __IO uint32_t SEL49;
    __IO uint32_t SEL50;
    __IO uint32_t SEL51;
    __IO uint32_t SEL52;
    __IO uint32_t SEL53;
    __IO uint32_t SEL54;
    __IO uint32_t SEL55;
    __IO uint32_t SEL56;
    __IO uint32_t SEL57;
    __IO uint32_t SEL58;
    __IO uint32_t SEL59;
    __IO uint32_t SEL60;
    __IO uint32_t SEL61;
    __IO uint32_t SEL62;
    __IO uint32_t SEL63;
    __IO uint32_t SEL64;
    __IO uint32_t SEL65;
    __IO uint32_t SEL66;
    __IO uint32_t SEL67;
    __IO uint32_t SEL68;
    __IO uint32_t SEL69;
    __IO uint32_t SEL70;
    __IO uint32_t SEL71;
    __IO uint32_t SEL72;
    __IO uint32_t SEL73;
    __IO uint32_t SEL74;
    __IO uint32_t SEL75;
    __IO uint32_t SEL76;
    __IO uint32_t SEL77;
    __IO uint32_t SEL78;
    __IO uint32_t SEL79;
    __IO uint32_t SEL80;
    __IO uint32_t SEL81;
    __IO uint32_t SEL82;
    __IO uint32_t SEL83;
    __IO uint32_t SEL84;
    __IO uint32_t SEL85;
    __IO uint32_t SEL86;
    __IO uint32_t SEL87;
    __IO uint32_t SEL88;
    __IO uint32_t SEL89;
    __IO uint32_t SEL90;
    __IO uint32_t SEL91;
    __IO uint32_t SEL92;
    __IO uint32_t SEL93;
    __IO uint32_t SEL94;
    __IO uint32_t SEL95;
    __IO uint32_t SEL96;
    __IO uint32_t SEL97;
    __IO uint32_t SEL98;
    __IO uint32_t SEL99;
    __IO uint32_t SEL100;
    uint8_t RESERVED1[172];
    __IO uint32_t SWIER;
    __IO uint32_t EVTER;
    __IO uint32_t IER;
} M4_INTC_TypeDef;

/**
 * @brief PWC
 */
typedef struct
{
    __IO uint8_t  STPMCR;
    uint8_t RESERVED0[3];
    __IO uint16_t PWRC;
    uint8_t RESERVED1[2];
    __IO uint8_t  PWRMONR;
    uint8_t RESERVED2[3];
    __IO uint8_t  RAMCR;
    uint8_t RESERVED3[3];
    __IO uint32_t LVDCR0;
    __IO uint8_t  LVDCSR1;
    uint8_t RESERVED4[11];
    __IO uint16_t FPRC;
    uint8_t RESERVED5[30];
    __IO uint16_t DBGC;
    uint8_t RESERVED6[190];
    __IO uint16_t RSTF0;
} M4_PWC_TypeDef;

/**
 * @brief RMU
 */
typedef struct
{
    __IO uint16_t RSTF0;
} M4_RMU_TypeDef;

/**
 * @brief SPI
 */
typedef struct
{
    __IO uint32_t DR;
    __IO uint32_t CR1;
    uint8_t RESERVED0[4];
    __IO uint32_t CFG1;
    uint8_t RESERVED1[4];
    __IO uint32_t SR;
    __IO uint32_t CFG2;
} M4_SPI_TypeDef;

/**
 * @brief SWDT
 */
typedef struct
{
    uint8_t RESERVED0[4];
    __IO uint32_t SR;
    __IO uint32_t RR;
} M4_SWDT_TypeDef;

/**
 * @brief TMR0
 */
typedef struct
{
    __IO uint32_t CNTAR;
    __IO uint32_t CNTBR;
    __IO uint32_t CMPAR;
    __IO uint32_t CMPBR;
    __IO uint32_t BCONR;
    __IO uint32_t STFLR;
} M4_TMR0_TypeDef;

/**
 * @brief TMR4
 */
typedef struct
{
    uint8_t RESERVED0[2];
    __IO uint16_t OCCRUH;
    uint8_t RESERVED1[2];
    __IO uint16_t OCCRUL;
    uint8_t RESERVED2[2];
    __IO uint16_t OCCRVH;
    uint8_t RESERVED3[2];
    __IO uint16_t OCCRVL;
    uint8_t RESERVED4[2];
    __IO uint16_t OCCRWH;
    uint8_t RESERVED5[2];
    __IO uint16_t OCCRWL;
    __IO uint16_t OCSRU;
    __IO uint16_t OCERU;
    __IO uint16_t OCSRV;
    __IO uint16_t OCERV;
    __IO uint16_t OCSRW;
    __IO uint16_t OCERW;
    __IO uint16_t OCMRHUH;
    uint8_t RESERVED6[2];
    __IO uint32_t OCMRLUL;
    __IO uint16_t OCMRHVH;
    uint8_t RESERVED7[2];
    __IO uint32_t OCMRLVL;
    __IO uint16_t OCMRHWH;
    uint8_t RESERVED8[2];
    __IO uint32_t OCMRLWL;
    uint8_t RESERVED9[6];
    __IO uint16_t CPSR;
    uint8_t RESERVED10[2];
    __IO uint16_t CNTR;
    __IO uint16_t CCSR;
    __IO uint16_t CVPR;
    uint8_t RESERVED11[54];
    __IO uint16_t PFSRU;
    __IO uint16_t PDARU;
    __IO uint16_t PDBRU;
    uint8_t RESERVED12[2];
    __IO uint16_t PFSRV;
    __IO uint16_t PDARV;
    __IO uint16_t PDBRV;
    uint8_t RESERVED13[2];
    __IO uint16_t PFSRW;
    __IO uint16_t PDARW;
    __IO uint16_t PDBRW;
    __IO uint16_t POCRU;
    uint8_t RESERVED14[2];
    __IO uint16_t POCRV;
    uint8_t RESERVED15[2];
    __IO uint16_t POCRW;
    uint8_t RESERVED16[2];
    __IO uint16_t RCSR;
    uint8_t RESERVED17[12];
    __IO uint16_t SCCRUH;
    uint8_t RESERVED18[2];
    __IO uint16_t SCCRUL;
    uint8_t RESERVED19[2];
    __IO uint16_t SCCRVH;
    uint8_t RESERVED20[2];
    __IO uint16_t SCCRVL;
    uint8_t RESERVED21[2];
    __IO uint16_t SCCRWH;
    uint8_t RESERVED22[2];
    __IO uint16_t SCCRWL;
    __IO uint16_t SCSRUH;
    __IO uint16_t SCMRUH;
    __IO uint16_t SCSRUL;
    __IO uint16_t SCMRUL;
    __IO uint16_t SCSRVH;
    __IO uint16_t SCMRVH;
    __IO uint16_t SCSRVL;
    __IO uint16_t SCMRVL;
    __IO uint16_t SCSRWH;
    __IO uint16_t SCMRWH;
    __IO uint16_t SCSRWL;
    __IO uint16_t SCMRWL;
    __IO uint32_t PSCR;
    __IO uint16_t SCER;
} M4_TMR4_TypeDef;

/**
 * @brief TMRA
 */
typedef struct
{
    __IO uint16_t CNTER;
    uint8_t RESERVED0[2];
    __IO uint16_t PERAR;
    uint8_t RESERVED1[58];
    __IO uint16_t CMPAR1;
    uint8_t RESERVED2[2];
    __IO uint16_t CMPAR2;
    uint8_t RESERVED3[58];
    __IO uint16_t BCSTR;
    uint8_t RESERVED4[2];
    __IO uint16_t HCONR;
    uint8_t RESERVED5[2];
    __IO uint16_t HCUPR;
    uint8_t RESERVED6[2];
    __IO uint16_t HCDOR;
    uint8_t RESERVED7[2];
    __IO uint16_t ICONR;
    uint8_t RESERVED8[2];
    __IO uint16_t ECONR;
    uint8_t RESERVED9[2];
    __IO uint16_t FCONR;
    uint8_t RESERVED10[2];
    __IO uint16_t STFLR;
    uint8_t RESERVED11[34];
    __IO uint16_t BCONR;
    uint8_t RESERVED12[62];
    __IO uint16_t CCONR1;
    uint8_t RESERVED13[2];
    __IO uint16_t CCONR2;
    uint8_t RESERVED14[58];
    __IO uint16_t PCONR1;
    uint8_t RESERVED15[2];
    __IO uint16_t PCONR2;
} M4_TMRA_TypeDef;

/**
 * @brief TMRB
 */
typedef struct
{
    __IO uint16_t CNTER;
    uint8_t RESERVED0[2];
    __IO uint16_t PERAR;
    uint8_t RESERVED1[58];
    __IO uint16_t CMPAR1;
    uint8_t RESERVED2[2];
    __IO uint16_t CMPAR2;
    uint8_t RESERVED3[2];
    __IO uint16_t CMPAR3;
    uint8_t RESERVED4[2];
    __IO uint16_t CMPAR4;
    uint8_t RESERVED5[2];
    __IO uint16_t CMPAR5;
    uint8_t RESERVED6[2];
    __IO uint16_t CMPAR6;
    uint8_t RESERVED7[42];
    __IO uint16_t BCSTR;
    uint8_t RESERVED8[2];
    __IO uint16_t HCONR;
    uint8_t RESERVED9[2];
    __IO uint16_t HCUPR;
    uint8_t RESERVED10[2];
    __IO uint16_t HCDOR;
    uint8_t RESERVED11[2];
    __IO uint16_t ICONR;
    uint8_t RESERVED12[2];
    __IO uint16_t ECONR;
    uint8_t RESERVED13[6];
    __IO uint16_t STFLR;
    uint8_t RESERVED14[34];
    __IO uint16_t BCONR1;
    uint8_t RESERVED15[6];
    __IO uint16_t BCONR2;
    uint8_t RESERVED16[6];
    __IO uint16_t BCONR3;
    uint8_t RESERVED17[46];
    __IO uint16_t CCONR1;
    uint8_t RESERVED18[2];
    __IO uint16_t CCONR2;
    uint8_t RESERVED19[2];
    __IO uint16_t CCONR3;
    uint8_t RESERVED20[2];
    __IO uint16_t CCONR4;
    uint8_t RESERVED21[50];
    __IO uint16_t PCONR1;
    uint8_t RESERVED22[2];
    __IO uint16_t PCONR2;
    uint8_t RESERVED23[2];
    __IO uint16_t PCONR3;
    uint8_t RESERVED24[2];
    __IO uint16_t PCONR4;
} M4_TMRB_TypeDef;

/**
 * @brief USART
 */
typedef struct
{
    __IO uint32_t SR;
    __IO uint32_t DR;
    __IO uint32_t BRR;
    __IO uint32_t CR1;
    __IO uint32_t CR2;
    __IO uint32_t CR3;
    __IO uint32_t PR;
} M4_USART_TypeDef;

/**
 * @brief WDT
 */
typedef struct
{
    __IO uint32_t CR;
    __IO uint32_t SR;
    __IO uint32_t RR;
} M4_WDT_TypeDef;



/******************************************************************************/
/*           Device Specific Peripheral declaration & memory map              */
/******************************************************************************/

#define M4_ADC                               ((M4_ADC_TypeDef *)0x40030000UL)
#define M4_AOS                               ((M4_AOS_TypeDef *)0x40010800UL)
#define M4_CMP1                              ((M4_CMP_TypeDef *)0x4004A000UL)
#define M4_CMP2                              ((M4_CMP_TypeDef *)0x4004A010UL)
#define M4_CMP3                              ((M4_CMP_TypeDef *)0x4004A020UL)
#define M4_CMU                               ((M4_CMU_TypeDef *)0x40054400UL)
#define M4_CRC                               ((M4_CRC_TypeDef *)0x40050400UL)
#define M4_CTC                               ((M4_CTC_TypeDef *)0x40010000UL)
#define M4_DAC                               ((M4_DAC_TypeDef *)0x4004A100UL)
#define M4_DBGC                              ((M4_DBGC_TypeDef *)0xE0042000UL)
#define M4_DCU                               ((M4_DCU_TypeDef *)0x40052000UL)
#define M4_DMA                               ((M4_DMA_TypeDef *)0x40053000UL)
#define M4_EFM                               ((M4_EFM_TypeDef *)0x40010400UL)
#define M4_EMB                               ((M4_EMB_TypeDef *)0x40017C00UL)
#define M4_FCM                               ((M4_FCM_TypeDef *)0x40048400UL)
#define M4_GPIO                              ((M4_GPIO_TypeDef *)0x40053800UL)
#define M4_I2C                               ((M4_I2C_TypeDef *)0x4004E000UL)
#define M4_ICG                               ((M4_ICG_TypeDef *)0x00000240UL)
#define M4_INTC                              ((M4_INTC_TypeDef *)0x40051000UL)
#define M4_PWC                               ((M4_PWC_TypeDef *)0x40054000UL)
#define M4_RMU                               ((M4_RMU_TypeDef *)0x40054100UL)
#define M4_SPI                               ((M4_SPI_TypeDef *)0x4001C000UL)
#define M4_SWDT                              ((M4_SWDT_TypeDef *)0x40049400UL)
#define M4_TMR01                             ((M4_TMR0_TypeDef *)0x40024000UL)
#define M4_TMR02                             ((M4_TMR0_TypeDef *)0x40024400UL)
#define M4_TMR4                              ((M4_TMR4_TypeDef *)0x40017000UL)
#define M4_TMRA1                             ((M4_TMRA_TypeDef *)0x40015000UL)
#define M4_TMRA2                             ((M4_TMRA_TypeDef *)0x40015400UL)
#define M4_TMRA3                             ((M4_TMRA_TypeDef *)0x40015800UL)
#define M4_TMRA4                             ((M4_TMRA_TypeDef *)0x40015C00UL)
#define M4_TMRB                              ((M4_TMRB_TypeDef *)0x40025000UL)
#define M4_USART1                            ((M4_USART_TypeDef *)0x4001D000UL)
#define M4_USART2                            ((M4_USART_TypeDef *)0x4001D400UL)
#define M4_USART3                            ((M4_USART_TypeDef *)0x40021000UL)
#define M4_USART4                            ((M4_USART_TypeDef *)0x40021400UL)
#define M4_WDT                               ((M4_WDT_TypeDef *)0x40049000UL)


/******************************************************************************/
/*                   Peripheral Registers Bits Definition                     */
/******************************************************************************/

/*******************************************************************************
                Bit definition for Peripheral ADC
*******************************************************************************/
/*  Bit definition for ADC_STR register  */
#define ADC_STR_STRT_POS                               (0U)
#define ADC_STR_STRT                                   ((uint8_t)0x01U)

/*  Bit definition for ADC_CR0 register  */
#define ADC_CR0_MS_POS                                 (0U)
#define ADC_CR0_MS                                     ((uint16_t)0x0003U)
#define ADC_CR0_MS_0                                   ((uint16_t)0x0001U)
#define ADC_CR0_MS_1                                   ((uint16_t)0x0002U)
#define ADC_CR0_ACCSEL_POS                             (4U)
#define ADC_CR0_ACCSEL                                 ((uint16_t)0x0030U)
#define ADC_CR0_ACCSEL_0                               ((uint16_t)0x0010U)
#define ADC_CR0_ACCSEL_1                               ((uint16_t)0x0020U)
#define ADC_CR0_CLREN_POS                              (6U)
#define ADC_CR0_CLREN                                  ((uint16_t)0x0040U)
#define ADC_CR0_DFMT_POS                               (7U)
#define ADC_CR0_DFMT                                   ((uint16_t)0x0080U)
#define ADC_CR0_AVCNT_POS                              (8U)
#define ADC_CR0_AVCNT                                  ((uint16_t)0x0700U)
#define ADC_CR0_AVCNT_0                                ((uint16_t)0x0100U)
#define ADC_CR0_AVCNT_1                                ((uint16_t)0x0200U)
#define ADC_CR0_AVCNT_2                                ((uint16_t)0x0400U)

/*  Bit definition for ADC_CR1 register  */
#define ADC_CR1_RSCHSEL_POS                            (2U)
#define ADC_CR1_RSCHSEL                                ((uint16_t)0x0004U)

/*  Bit definition for ADC_TRGSR register  */
#define ADC_TRGSR_TRGSELA_POS                          (0U)
#define ADC_TRGSR_TRGSELA                              ((uint16_t)0x0003U)
#define ADC_TRGSR_TRGSELA_0                            ((uint16_t)0x0001U)
#define ADC_TRGSR_TRGSELA_1                            ((uint16_t)0x0002U)
#define ADC_TRGSR_TRGENA_POS                           (7U)
#define ADC_TRGSR_TRGENA                               ((uint16_t)0x0080U)
#define ADC_TRGSR_TRGSELB_POS                          (8U)
#define ADC_TRGSR_TRGSELB                              ((uint16_t)0x0300U)
#define ADC_TRGSR_TRGSELB_0                            ((uint16_t)0x0100U)
#define ADC_TRGSR_TRGSELB_1                            ((uint16_t)0x0200U)
#define ADC_TRGSR_TRGENB_POS                           (15U)
#define ADC_TRGSR_TRGENB                               ((uint16_t)0x8000U)

/*  Bit definition for ADC_CHSELRA0 register  */
#define ADC_CHSELRA0_CHSELA_POS                        (0U)
#define ADC_CHSELRA0_CHSELA                            ((uint16_t)0x03FFU)
#define ADC_CHSELRA0_CHSELA_0                          ((uint16_t)0x0001U)
#define ADC_CHSELRA0_CHSELA_1                          ((uint16_t)0x0002U)
#define ADC_CHSELRA0_CHSELA_2                          ((uint16_t)0x0004U)
#define ADC_CHSELRA0_CHSELA_3                          ((uint16_t)0x0008U)
#define ADC_CHSELRA0_CHSELA_4                          ((uint16_t)0x0010U)
#define ADC_CHSELRA0_CHSELA_5                          ((uint16_t)0x0020U)
#define ADC_CHSELRA0_CHSELA_6                          ((uint16_t)0x0040U)
#define ADC_CHSELRA0_CHSELA_7                          ((uint16_t)0x0080U)
#define ADC_CHSELRA0_CHSELA_8                          ((uint16_t)0x0100U)
#define ADC_CHSELRA0_CHSELA_9                          ((uint16_t)0x0200U)

/*  Bit definition for ADC_CHSELRB0 register  */
#define ADC_CHSELRB0_CHSELB_POS                        (0U)
#define ADC_CHSELRB0_CHSELB                            ((uint16_t)0x03FFU)
#define ADC_CHSELRB0_CHSELB_0                          ((uint16_t)0x0001U)
#define ADC_CHSELRB0_CHSELB_1                          ((uint16_t)0x0002U)
#define ADC_CHSELRB0_CHSELB_2                          ((uint16_t)0x0004U)
#define ADC_CHSELRB0_CHSELB_3                          ((uint16_t)0x0008U)
#define ADC_CHSELRB0_CHSELB_4                          ((uint16_t)0x0010U)
#define ADC_CHSELRB0_CHSELB_5                          ((uint16_t)0x0020U)
#define ADC_CHSELRB0_CHSELB_6                          ((uint16_t)0x0040U)
#define ADC_CHSELRB0_CHSELB_7                          ((uint16_t)0x0080U)
#define ADC_CHSELRB0_CHSELB_8                          ((uint16_t)0x0100U)
#define ADC_CHSELRB0_CHSELB_9                          ((uint16_t)0x0200U)

/*  Bit definition for ADC_AVCHSELR0 register  */
#define ADC_AVCHSELR0_AVCHSEL_POS                      (0U)
#define ADC_AVCHSELR0_AVCHSEL                          ((uint16_t)0x03FFU)
#define ADC_AVCHSELR0_AVCHSEL_0                        ((uint16_t)0x0001U)
#define ADC_AVCHSELR0_AVCHSEL_1                        ((uint16_t)0x0002U)
#define ADC_AVCHSELR0_AVCHSEL_2                        ((uint16_t)0x0004U)
#define ADC_AVCHSELR0_AVCHSEL_3                        ((uint16_t)0x0008U)
#define ADC_AVCHSELR0_AVCHSEL_4                        ((uint16_t)0x0010U)
#define ADC_AVCHSELR0_AVCHSEL_5                        ((uint16_t)0x0020U)
#define ADC_AVCHSELR0_AVCHSEL_6                        ((uint16_t)0x0040U)
#define ADC_AVCHSELR0_AVCHSEL_7                        ((uint16_t)0x0080U)
#define ADC_AVCHSELR0_AVCHSEL_8                        ((uint16_t)0x0100U)
#define ADC_AVCHSELR0_AVCHSEL_9                        ((uint16_t)0x0200U)

/*  Bit definition for ADC_EXCHSELR register  */
#define ADC_EXCHSELR_EXCHSEL_POS                       (0U)
#define ADC_EXCHSELR_EXCHSEL                           ((uint8_t)0x01U)

/*  Bit definition for ADC_SHCR register  */
#define ADC_SHCR_SHT_POS                               (0U)
#define ADC_SHCR_SHT                                   ((uint16_t)0x00FFU)
#define ADC_SHCR_SHT_0                                 ((uint16_t)0x0001U)
#define ADC_SHCR_SHT_1                                 ((uint16_t)0x0002U)
#define ADC_SHCR_SHT_2                                 ((uint16_t)0x0004U)
#define ADC_SHCR_SHT_3                                 ((uint16_t)0x0008U)
#define ADC_SHCR_SHT_4                                 ((uint16_t)0x0010U)
#define ADC_SHCR_SHT_5                                 ((uint16_t)0x0020U)
#define ADC_SHCR_SHT_6                                 ((uint16_t)0x0040U)
#define ADC_SHCR_SHT_7                                 ((uint16_t)0x0080U)
#define ADC_SHCR_SHSEL_POS                             (8U)
#define ADC_SHCR_SHSEL                                 ((uint16_t)0x0700U)
#define ADC_SHCR_SHSEL_0                               ((uint16_t)0x0100U)
#define ADC_SHCR_SHSEL_1                               ((uint16_t)0x0200U)
#define ADC_SHCR_SHSEL_2                               ((uint16_t)0x0400U)
#define ADC_SHCR_SHMD_POS                              (15U)
#define ADC_SHCR_SHMD                                  ((uint16_t)0x8000U)

/*  Bit definition for ADC_SSTR0 register  */
#define ADC_SSTR0                                      ((uint8_t)0xFFU)

/*  Bit definition for ADC_SSTR1 register  */
#define ADC_SSTR1                                      ((uint8_t)0xFFU)

/*  Bit definition for ADC_SSTR2 register  */
#define ADC_SSTR2                                      ((uint8_t)0xFFU)

/*  Bit definition for ADC_SSTR3 register  */
#define ADC_SSTR3                                      ((uint8_t)0xFFU)

/*  Bit definition for ADC_SSTR4 register  */
#define ADC_SSTR4                                      ((uint8_t)0xFFU)

/*  Bit definition for ADC_SSTR5 register  */
#define ADC_SSTR5                                      ((uint8_t)0xFFU)

/*  Bit definition for ADC_SSTR6 register  */
#define ADC_SSTR6                                      ((uint8_t)0xFFU)

/*  Bit definition for ADC_SSTR7 register  */
#define ADC_SSTR7                                      ((uint8_t)0xFFU)

/*  Bit definition for ADC_SSTR8 register  */
#define ADC_SSTR8                                      ((uint8_t)0xFFU)

/*  Bit definition for ADC_SSTR9 register  */
#define ADC_SSTR9                                      ((uint8_t)0xFFU)

/*  Bit definition for ADC_ISR register  */
#define ADC_ISR_EOCAF_POS                              (0U)
#define ADC_ISR_EOCAF                                  ((uint8_t)0x01U)
#define ADC_ISR_EOCBF_POS                              (1U)
#define ADC_ISR_EOCBF                                  ((uint8_t)0x02U)
#define ADC_ISR_SASTPDF_POS                            (4U)
#define ADC_ISR_SASTPDF                                ((uint8_t)0x10U)

/*  Bit definition for ADC_ICR register  */
#define ADC_ICR_EOCAIEN_POS                            (0U)
#define ADC_ICR_EOCAIEN                                ((uint8_t)0x01U)
#define ADC_ICR_EOCBIEN_POS                            (1U)
#define ADC_ICR_EOCBIEN                                ((uint8_t)0x02U)

/*  Bit definition for ADC_ISCLRR register  */
#define ADC_ISCLRR_CLREOCAF_POS                        (0U)
#define ADC_ISCLRR_CLREOCAF                            ((uint8_t)0x01U)
#define ADC_ISCLRR_CLREOCBF_POS                        (1U)
#define ADC_ISCLRR_CLREOCBF                            ((uint8_t)0x02U)
#define ADC_ISCLRR_CLRSASTPDF_POS                      (4U)
#define ADC_ISCLRR_CLRSASTPDF                          ((uint8_t)0x10U)

/*  Bit definition for ADC_DR0 register  */
#define ADC_DR0                                        ((uint16_t)0xFFFFU)

/*  Bit definition for ADC_DR1 register  */
#define ADC_DR1                                        ((uint16_t)0xFFFFU)

/*  Bit definition for ADC_DR2 register  */
#define ADC_DR2                                        ((uint16_t)0xFFFFU)

/*  Bit definition for ADC_DR3 register  */
#define ADC_DR3                                        ((uint16_t)0xFFFFU)

/*  Bit definition for ADC_DR4 register  */
#define ADC_DR4                                        ((uint16_t)0xFFFFU)

/*  Bit definition for ADC_DR5 register  */
#define ADC_DR5                                        ((uint16_t)0xFFFFU)

/*  Bit definition for ADC_DR6 register  */
#define ADC_DR6                                        ((uint16_t)0xFFFFU)

/*  Bit definition for ADC_DR7 register  */
#define ADC_DR7                                        ((uint16_t)0xFFFFU)

/*  Bit definition for ADC_DR8 register  */
#define ADC_DR8                                        ((uint16_t)0xFFFFU)

/*  Bit definition for ADC_DR9 register  */
#define ADC_DR9                                        ((uint16_t)0xFFFFU)


/*******************************************************************************
                Bit definition for Peripheral AOS
*******************************************************************************/
/*  Bit definition for AOS_INTC_STRGCR register  */
#define AOS_INTC_STRGCR_STRG_POS                       (0U)
#define AOS_INTC_STRGCR_STRG                           ((uint32_t)0x00000001U)

/*  Bit definition for AOS_TMR00_HTSSR register  */
#define AOS_TMR00_HTSSR_TRGSEL_POS                     (0U)
#define AOS_TMR00_HTSSR_TRGSEL                         ((uint32_t)0x000001FFU)
#define AOS_TMR00_HTSSR_TRGSEL_0                       ((uint32_t)0x00000001U)
#define AOS_TMR00_HTSSR_TRGSEL_1                       ((uint32_t)0x00000002U)
#define AOS_TMR00_HTSSR_TRGSEL_2                       ((uint32_t)0x00000004U)
#define AOS_TMR00_HTSSR_TRGSEL_3                       ((uint32_t)0x00000008U)
#define AOS_TMR00_HTSSR_TRGSEL_4                       ((uint32_t)0x00000010U)
#define AOS_TMR00_HTSSR_TRGSEL_5                       ((uint32_t)0x00000020U)
#define AOS_TMR00_HTSSR_TRGSEL_6                       ((uint32_t)0x00000040U)
#define AOS_TMR00_HTSSR_TRGSEL_7                       ((uint32_t)0x00000080U)
#define AOS_TMR00_HTSSR_TRGSEL_8                       ((uint32_t)0x00000100U)

/*  Bit definition for AOS_TMR01_HTSSR register  */
#define AOS_TMR01_HTSSR_TRGSEL_POS                     (0U)
#define AOS_TMR01_HTSSR_TRGSEL                         ((uint32_t)0x000001FFU)
#define AOS_TMR01_HTSSR_TRGSEL_0                       ((uint32_t)0x00000001U)
#define AOS_TMR01_HTSSR_TRGSEL_1                       ((uint32_t)0x00000002U)
#define AOS_TMR01_HTSSR_TRGSEL_2                       ((uint32_t)0x00000004U)
#define AOS_TMR01_HTSSR_TRGSEL_3                       ((uint32_t)0x00000008U)
#define AOS_TMR01_HTSSR_TRGSEL_4                       ((uint32_t)0x00000010U)
#define AOS_TMR01_HTSSR_TRGSEL_5                       ((uint32_t)0x00000020U)
#define AOS_TMR01_HTSSR_TRGSEL_6                       ((uint32_t)0x00000040U)
#define AOS_TMR01_HTSSR_TRGSEL_7                       ((uint32_t)0x00000080U)
#define AOS_TMR01_HTSSR_TRGSEL_8                       ((uint32_t)0x00000100U)

/*  Bit definition for AOS_TMRA0_HTSSR register  */
#define AOS_TMRA0_HTSSR_TRGSEL_POS                     (0U)
#define AOS_TMRA0_HTSSR_TRGSEL                         ((uint32_t)0x000001FFU)
#define AOS_TMRA0_HTSSR_TRGSEL_0                       ((uint32_t)0x00000001U)
#define AOS_TMRA0_HTSSR_TRGSEL_1                       ((uint32_t)0x00000002U)
#define AOS_TMRA0_HTSSR_TRGSEL_2                       ((uint32_t)0x00000004U)
#define AOS_TMRA0_HTSSR_TRGSEL_3                       ((uint32_t)0x00000008U)
#define AOS_TMRA0_HTSSR_TRGSEL_4                       ((uint32_t)0x00000010U)
#define AOS_TMRA0_HTSSR_TRGSEL_5                       ((uint32_t)0x00000020U)
#define AOS_TMRA0_HTSSR_TRGSEL_6                       ((uint32_t)0x00000040U)
#define AOS_TMRA0_HTSSR_TRGSEL_7                       ((uint32_t)0x00000080U)
#define AOS_TMRA0_HTSSR_TRGSEL_8                       ((uint32_t)0x00000100U)

/*  Bit definition for AOS_TMRA1_HTSSR register  */
#define AOS_TMRA1_HTSSR_TRGSEL_POS                     (0U)
#define AOS_TMRA1_HTSSR_TRGSEL                         ((uint32_t)0x000001FFU)
#define AOS_TMRA1_HTSSR_TRGSEL_0                       ((uint32_t)0x00000001U)
#define AOS_TMRA1_HTSSR_TRGSEL_1                       ((uint32_t)0x00000002U)
#define AOS_TMRA1_HTSSR_TRGSEL_2                       ((uint32_t)0x00000004U)
#define AOS_TMRA1_HTSSR_TRGSEL_3                       ((uint32_t)0x00000008U)
#define AOS_TMRA1_HTSSR_TRGSEL_4                       ((uint32_t)0x00000010U)
#define AOS_TMRA1_HTSSR_TRGSEL_5                       ((uint32_t)0x00000020U)
#define AOS_TMRA1_HTSSR_TRGSEL_6                       ((uint32_t)0x00000040U)
#define AOS_TMRA1_HTSSR_TRGSEL_7                       ((uint32_t)0x00000080U)
#define AOS_TMRA1_HTSSR_TRGSEL_8                       ((uint32_t)0x00000100U)

/*  Bit definition for AOS_TMRB_HTSSR register  */
#define AOS_TMRB_HTSSR_TRGSEL_POS                      (0U)
#define AOS_TMRB_HTSSR_TRGSEL                          ((uint32_t)0x000001FFU)
#define AOS_TMRB_HTSSR_TRGSEL_0                        ((uint32_t)0x00000001U)
#define AOS_TMRB_HTSSR_TRGSEL_1                        ((uint32_t)0x00000002U)
#define AOS_TMRB_HTSSR_TRGSEL_2                        ((uint32_t)0x00000004U)
#define AOS_TMRB_HTSSR_TRGSEL_3                        ((uint32_t)0x00000008U)
#define AOS_TMRB_HTSSR_TRGSEL_4                        ((uint32_t)0x00000010U)
#define AOS_TMRB_HTSSR_TRGSEL_5                        ((uint32_t)0x00000020U)
#define AOS_TMRB_HTSSR_TRGSEL_6                        ((uint32_t)0x00000040U)
#define AOS_TMRB_HTSSR_TRGSEL_7                        ((uint32_t)0x00000080U)
#define AOS_TMRB_HTSSR_TRGSEL_8                        ((uint32_t)0x00000100U)

/*  Bit definition for AOS_ADC_ITRGSELR0 register  */
#define AOS_ADC_ITRGSELR0_TRGSEL_POS                   (0U)
#define AOS_ADC_ITRGSELR0_TRGSEL                       ((uint32_t)0x000001FFU)
#define AOS_ADC_ITRGSELR0_TRGSEL_0                     ((uint32_t)0x00000001U)
#define AOS_ADC_ITRGSELR0_TRGSEL_1                     ((uint32_t)0x00000002U)
#define AOS_ADC_ITRGSELR0_TRGSEL_2                     ((uint32_t)0x00000004U)
#define AOS_ADC_ITRGSELR0_TRGSEL_3                     ((uint32_t)0x00000008U)
#define AOS_ADC_ITRGSELR0_TRGSEL_4                     ((uint32_t)0x00000010U)
#define AOS_ADC_ITRGSELR0_TRGSEL_5                     ((uint32_t)0x00000020U)
#define AOS_ADC_ITRGSELR0_TRGSEL_6                     ((uint32_t)0x00000040U)
#define AOS_ADC_ITRGSELR0_TRGSEL_7                     ((uint32_t)0x00000080U)
#define AOS_ADC_ITRGSELR0_TRGSEL_8                     ((uint32_t)0x00000100U)

/*  Bit definition for AOS_ADC_ITRGSELR1 register  */
#define AOS_ADC_ITRGSELR1_TRGSEL_POS                   (0U)
#define AOS_ADC_ITRGSELR1_TRGSEL                       ((uint32_t)0x000001FFU)
#define AOS_ADC_ITRGSELR1_TRGSEL_0                     ((uint32_t)0x00000001U)
#define AOS_ADC_ITRGSELR1_TRGSEL_1                     ((uint32_t)0x00000002U)
#define AOS_ADC_ITRGSELR1_TRGSEL_2                     ((uint32_t)0x00000004U)
#define AOS_ADC_ITRGSELR1_TRGSEL_3                     ((uint32_t)0x00000008U)
#define AOS_ADC_ITRGSELR1_TRGSEL_4                     ((uint32_t)0x00000010U)
#define AOS_ADC_ITRGSELR1_TRGSEL_5                     ((uint32_t)0x00000020U)
#define AOS_ADC_ITRGSELR1_TRGSEL_6                     ((uint32_t)0x00000040U)
#define AOS_ADC_ITRGSELR1_TRGSEL_7                     ((uint32_t)0x00000080U)
#define AOS_ADC_ITRGSELR1_TRGSEL_8                     ((uint32_t)0x00000100U)

/*  Bit definition for AOS_DMA0_TRGSEL register  */
#define AOS_DMA0_TRGSEL_TRGSEL_POS                     (0U)
#define AOS_DMA0_TRGSEL_TRGSEL                         ((uint32_t)0x000001FFU)
#define AOS_DMA0_TRGSEL_TRGSEL_0                       ((uint32_t)0x00000001U)
#define AOS_DMA0_TRGSEL_TRGSEL_1                       ((uint32_t)0x00000002U)
#define AOS_DMA0_TRGSEL_TRGSEL_2                       ((uint32_t)0x00000004U)
#define AOS_DMA0_TRGSEL_TRGSEL_3                       ((uint32_t)0x00000008U)
#define AOS_DMA0_TRGSEL_TRGSEL_4                       ((uint32_t)0x00000010U)
#define AOS_DMA0_TRGSEL_TRGSEL_5                       ((uint32_t)0x00000020U)
#define AOS_DMA0_TRGSEL_TRGSEL_6                       ((uint32_t)0x00000040U)
#define AOS_DMA0_TRGSEL_TRGSEL_7                       ((uint32_t)0x00000080U)
#define AOS_DMA0_TRGSEL_TRGSEL_8                       ((uint32_t)0x00000100U)

/*  Bit definition for AOS_DMA1_TRGSEL register  */
#define AOS_DMA1_TRGSEL_TRGSEL_POS                     (0U)
#define AOS_DMA1_TRGSEL_TRGSEL                         ((uint32_t)0x000001FFU)
#define AOS_DMA1_TRGSEL_TRGSEL_0                       ((uint32_t)0x00000001U)
#define AOS_DMA1_TRGSEL_TRGSEL_1                       ((uint32_t)0x00000002U)
#define AOS_DMA1_TRGSEL_TRGSEL_2                       ((uint32_t)0x00000004U)
#define AOS_DMA1_TRGSEL_TRGSEL_3                       ((uint32_t)0x00000008U)
#define AOS_DMA1_TRGSEL_TRGSEL_4                       ((uint32_t)0x00000010U)
#define AOS_DMA1_TRGSEL_TRGSEL_5                       ((uint32_t)0x00000020U)
#define AOS_DMA1_TRGSEL_TRGSEL_6                       ((uint32_t)0x00000040U)
#define AOS_DMA1_TRGSEL_TRGSEL_7                       ((uint32_t)0x00000080U)
#define AOS_DMA1_TRGSEL_TRGSEL_8                       ((uint32_t)0x00000100U)

/*  Bit definition for AOS_DMA2_TRGSEL register  */
#define AOS_DMA2_TRGSEL_TRGSEL_POS                     (0U)
#define AOS_DMA2_TRGSEL_TRGSEL                         ((uint32_t)0x000001FFU)
#define AOS_DMA2_TRGSEL_TRGSEL_0                       ((uint32_t)0x00000001U)
#define AOS_DMA2_TRGSEL_TRGSEL_1                       ((uint32_t)0x00000002U)
#define AOS_DMA2_TRGSEL_TRGSEL_2                       ((uint32_t)0x00000004U)
#define AOS_DMA2_TRGSEL_TRGSEL_3                       ((uint32_t)0x00000008U)
#define AOS_DMA2_TRGSEL_TRGSEL_4                       ((uint32_t)0x00000010U)
#define AOS_DMA2_TRGSEL_TRGSEL_5                       ((uint32_t)0x00000020U)
#define AOS_DMA2_TRGSEL_TRGSEL_6                       ((uint32_t)0x00000040U)
#define AOS_DMA2_TRGSEL_TRGSEL_7                       ((uint32_t)0x00000080U)
#define AOS_DMA2_TRGSEL_TRGSEL_8                       ((uint32_t)0x00000100U)

/*  Bit definition for AOS_DMA3_TRGSEL register  */
#define AOS_DMA3_TRGSEL_TRGSEL_POS                     (0U)
#define AOS_DMA3_TRGSEL_TRGSEL                         ((uint32_t)0x000001FFU)
#define AOS_DMA3_TRGSEL_TRGSEL_0                       ((uint32_t)0x00000001U)
#define AOS_DMA3_TRGSEL_TRGSEL_1                       ((uint32_t)0x00000002U)
#define AOS_DMA3_TRGSEL_TRGSEL_2                       ((uint32_t)0x00000004U)
#define AOS_DMA3_TRGSEL_TRGSEL_3                       ((uint32_t)0x00000008U)
#define AOS_DMA3_TRGSEL_TRGSEL_4                       ((uint32_t)0x00000010U)
#define AOS_DMA3_TRGSEL_TRGSEL_5                       ((uint32_t)0x00000020U)
#define AOS_DMA3_TRGSEL_TRGSEL_6                       ((uint32_t)0x00000040U)
#define AOS_DMA3_TRGSEL_TRGSEL_7                       ((uint32_t)0x00000080U)
#define AOS_DMA3_TRGSEL_TRGSEL_8                       ((uint32_t)0x00000100U)

/*  Bit definition for AOS_DCU_TRGSEL register  */
#define AOS_DCU_TRGSEL_TRGSEL_POS                      (0U)
#define AOS_DCU_TRGSEL_TRGSEL                          ((uint32_t)0x000001FFU)
#define AOS_DCU_TRGSEL_TRGSEL_0                        ((uint32_t)0x00000001U)
#define AOS_DCU_TRGSEL_TRGSEL_1                        ((uint32_t)0x00000002U)
#define AOS_DCU_TRGSEL_TRGSEL_2                        ((uint32_t)0x00000004U)
#define AOS_DCU_TRGSEL_TRGSEL_3                        ((uint32_t)0x00000008U)
#define AOS_DCU_TRGSEL_TRGSEL_4                        ((uint32_t)0x00000010U)
#define AOS_DCU_TRGSEL_TRGSEL_5                        ((uint32_t)0x00000020U)
#define AOS_DCU_TRGSEL_TRGSEL_6                        ((uint32_t)0x00000040U)
#define AOS_DCU_TRGSEL_TRGSEL_7                        ((uint32_t)0x00000080U)
#define AOS_DCU_TRGSEL_TRGSEL_8                        ((uint32_t)0x00000100U)


/*******************************************************************************
                Bit definition for Peripheral CMP
*******************************************************************************/
/*  Bit definition for CMP_MDR register  */
#define CMP_MDR_CENB_POS                               (0U)
#define CMP_MDR_CENB                                   ((uint8_t)0x01U)
#define CMP_MDR_CWDE_POS                               (1U)
#define CMP_MDR_CWDE                                   ((uint8_t)0x02U)
#define CMP_MDR_CMON_POS                               (7U)
#define CMP_MDR_CMON                                   ((uint8_t)0x80U)

/*  Bit definition for CMP_FIR register  */
#define CMP_FIR_FCKS_POS                               (0U)
#define CMP_FIR_FCKS                                   ((uint8_t)0x03U)
#define CMP_FIR_FCKS_0                                 ((uint8_t)0x01U)
#define CMP_FIR_FCKS_1                                 ((uint8_t)0x02U)
#define CMP_FIR_EDGS_POS                               (4U)
#define CMP_FIR_EDGS                                   ((uint8_t)0x30U)
#define CMP_FIR_EDGS_0                                 ((uint8_t)0x10U)
#define CMP_FIR_EDGS_1                                 ((uint8_t)0x20U)
#define CMP_FIR_CIEN_POS                               (6U)
#define CMP_FIR_CIEN                                   ((uint8_t)0x40U)

/*  Bit definition for CMP_OCR register  */
#define CMP_OCR_COEN_POS                               (0U)
#define CMP_OCR_COEN                                   ((uint8_t)0x01U)
#define CMP_OCR_COPS_POS                               (1U)
#define CMP_OCR_COPS                                   ((uint8_t)0x02U)
#define CMP_OCR_CPOE_POS                               (2U)
#define CMP_OCR_CPOE                                   ((uint8_t)0x04U)
#define CMP_OCR_TWOE_POS                               (3U)
#define CMP_OCR_TWOE                                   ((uint8_t)0x08U)
#define CMP_OCR_TWOL_POS                               (4U)
#define CMP_OCR_TWOL                                   ((uint8_t)0x10U)

/*  Bit definition for CMP_VSR register  */
#define CMP_VSR_RVSL_POS                               (0U)
#define CMP_VSR_RVSL                                   ((uint8_t)0x07U)
#define CMP_VSR_RVSL_0                                 ((uint8_t)0x01U)
#define CMP_VSR_RVSL_1                                 ((uint8_t)0x02U)
#define CMP_VSR_RVSL_2                                 ((uint8_t)0x04U)
#define CMP_VSR_CVSL_POS                               (4U)
#define CMP_VSR_CVSL                                   ((uint8_t)0xF0U)
#define CMP_VSR_CVSL_0                                 ((uint8_t)0x10U)
#define CMP_VSR_CVSL_1                                 ((uint8_t)0x20U)
#define CMP_VSR_CVSL_2                                 ((uint8_t)0x40U)
#define CMP_VSR_CVSL_3                                 ((uint8_t)0x80U)

/*  Bit definition for CMP_TWR1 register  */
#define CMP_TWR1_CTWS0_POS                             (0U)
#define CMP_TWR1_CTWS0                                 ((uint8_t)0x01U)
#define CMP_TWR1_CTWS1_POS                             (1U)
#define CMP_TWR1_CTWS1                                 ((uint8_t)0x02U)
#define CMP_TWR1_CTWS2_POS                             (2U)
#define CMP_TWR1_CTWS2                                 ((uint8_t)0x04U)
#define CMP_TWR1_CTWS3_POS                             (3U)
#define CMP_TWR1_CTWS3                                 ((uint8_t)0x08U)
#define CMP_TWR1_CTWS4_POS                             (4U)
#define CMP_TWR1_CTWS4                                 ((uint8_t)0x10U)
#define CMP_TWR1_CTWS5_POS                             (5U)
#define CMP_TWR1_CTWS5                                 ((uint8_t)0x20U)
#define CMP_TWR1_CTWS6_POS                             (6U)
#define CMP_TWR1_CTWS6                                 ((uint8_t)0x40U)
#define CMP_TWR1_CTWS7_POS                             (7U)
#define CMP_TWR1_CTWS7                                 ((uint8_t)0x80U)

/*  Bit definition for CMP_TWR2 register  */
#define CMP_TWR2_CTWP0_POS                             (0U)
#define CMP_TWR2_CTWP0                                 ((uint8_t)0x01U)
#define CMP_TWR2_CTWP1_POS                             (1U)
#define CMP_TWR2_CTWP1                                 ((uint8_t)0x02U)
#define CMP_TWR2_CTWP2_POS                             (2U)
#define CMP_TWR2_CTWP2                                 ((uint8_t)0x04U)
#define CMP_TWR2_CTWP3_POS                             (3U)
#define CMP_TWR2_CTWP3                                 ((uint8_t)0x08U)
#define CMP_TWR2_CTWP4_POS                             (4U)
#define CMP_TWR2_CTWP4                                 ((uint8_t)0x10U)
#define CMP_TWR2_CTWP5_POS                             (5U)
#define CMP_TWR2_CTWP5                                 ((uint8_t)0x20U)
#define CMP_TWR2_CTWP6_POS                             (6U)
#define CMP_TWR2_CTWP6                                 ((uint8_t)0x40U)
#define CMP_TWR2_CTWP7_POS                             (7U)
#define CMP_TWR2_CTWP7                                 ((uint8_t)0x80U)


/*******************************************************************************
                Bit definition for Peripheral CMU
*******************************************************************************/
/*  Bit definition for CMU_ADCKSEL register  */
#define CMU_ADCKSEL_ADCKSEL_POS                        (0U)
#define CMU_ADCKSEL_ADCKSEL                            ((uint8_t)0x07U)
#define CMU_ADCKSEL_ADCKSEL_0                          ((uint8_t)0x01U)
#define CMU_ADCKSEL_ADCKSEL_1                          ((uint8_t)0x02U)
#define CMU_ADCKSEL_ADCKSEL_2                          ((uint8_t)0x04U)

/*  Bit definition for CMU_XTALSTDSR register  */
#define CMU_XTALSTDSR_XTALSTDF_POS                     (0U)
#define CMU_XTALSTDSR_XTALSTDF                         ((uint8_t)0x01U)

/*  Bit definition for CMU_SCFGR register  */
#define CMU_SCFGR_PCLK1S_POS                           (0U)
#define CMU_SCFGR_PCLK1S                               ((uint32_t)0x00000007U)
#define CMU_SCFGR_PCLK1S_0                             ((uint32_t)0x00000001U)
#define CMU_SCFGR_PCLK1S_1                             ((uint32_t)0x00000002U)
#define CMU_SCFGR_PCLK1S_2                             ((uint32_t)0x00000004U)
#define CMU_SCFGR_PCLK4S_POS                           (12U)
#define CMU_SCFGR_PCLK4S                               ((uint32_t)0x00007000U)
#define CMU_SCFGR_PCLK4S_0                             ((uint32_t)0x00001000U)
#define CMU_SCFGR_PCLK4S_1                             ((uint32_t)0x00002000U)
#define CMU_SCFGR_PCLK4S_2                             ((uint32_t)0x00004000U)
#define CMU_SCFGR_HCLKS_POS                            (24U)
#define CMU_SCFGR_HCLKS                                ((uint32_t)0x07000000U)
#define CMU_SCFGR_HCLKS_0                              ((uint32_t)0x01000000U)
#define CMU_SCFGR_HCLKS_1                              ((uint32_t)0x02000000U)
#define CMU_SCFGR_HCLKS_2                              ((uint32_t)0x04000000U)

/*  Bit definition for CMU_CKSWR register  */
#define CMU_CKSWR_CKSW_POS                             (0U)
#define CMU_CKSWR_CKSW                                 ((uint8_t)0x07U)
#define CMU_CKSWR_CKSW_0                               ((uint8_t)0x01U)
#define CMU_CKSWR_CKSW_1                               ((uint8_t)0x02U)
#define CMU_CKSWR_CKSW_2                               ((uint8_t)0x04U)

/*  Bit definition for CMU_XTALCR register  */
#define CMU_XTALCR_XTALSTP_POS                         (0U)
#define CMU_XTALCR_XTALSTP                             ((uint8_t)0x01U)

/*  Bit definition for CMU_XTALCFGR register  */
#define CMU_XTALCFGR_XTALDRV_POS                       (4U)
#define CMU_XTALCFGR_XTALDRV                           ((uint8_t)0x30U)
#define CMU_XTALCFGR_XTALDRV_0                         ((uint8_t)0x10U)
#define CMU_XTALCFGR_XTALDRV_1                         ((uint8_t)0x20U)
#define CMU_XTALCFGR_XTALMS_POS                        (6U)
#define CMU_XTALCFGR_XTALMS                            ((uint8_t)0x40U)
#define CMU_XTALCFGR_SUPDRV_POS                        (7U)
#define CMU_XTALCFGR_SUPDRV                            ((uint8_t)0x80U)

/*  Bit definition for CMU_XTALSTBCR register  */
#define CMU_XTALSTBCR_XTALSTB_POS                      (0U)
#define CMU_XTALSTBCR_XTALSTB                          ((uint8_t)0x07U)
#define CMU_XTALSTBCR_XTALSTB_0                        ((uint8_t)0x01U)
#define CMU_XTALSTBCR_XTALSTB_1                        ((uint8_t)0x02U)
#define CMU_XTALSTBCR_XTALSTB_2                        ((uint8_t)0x04U)

/*  Bit definition for CMU_HRCCR register  */
#define CMU_HRCCR_HRCSTP_POS                           (0U)
#define CMU_HRCCR_HRCSTP                               ((uint8_t)0x01U)

/*  Bit definition for CMU_HRCCFGR register  */
#define CMU_HRCCFGR_HRCFREQS_POS                       (0U)
#define CMU_HRCCFGR_HRCFREQS                           ((uint8_t)0x0FU)
#define CMU_HRCCFGR_HRCFREQS_0                         ((uint8_t)0x01U)
#define CMU_HRCCFGR_HRCFREQS_1                         ((uint8_t)0x02U)
#define CMU_HRCCFGR_HRCFREQS_2                         ((uint8_t)0x04U)
#define CMU_HRCCFGR_HRCFREQS_3                         ((uint8_t)0x08U)

/*  Bit definition for CMU_OSCSTBSR register  */
#define CMU_OSCSTBSR_HRCSTBF_POS                       (0U)
#define CMU_OSCSTBSR_HRCSTBF                           ((uint8_t)0x01U)
#define CMU_OSCSTBSR_XTALSTBF_POS                      (3U)
#define CMU_OSCSTBSR_XTALSTBF                          ((uint8_t)0x08U)
#define CMU_OSCSTBSR_PLLSTBF_POS                       (5U)
#define CMU_OSCSTBSR_PLLSTBF                           ((uint8_t)0x20U)

/*  Bit definition for CMU_MCOCFGR register  */
#define CMU_MCOCFGR_MCO1SEL_POS                        (0U)
#define CMU_MCOCFGR_MCO1SEL                            ((uint8_t)0x0FU)
#define CMU_MCOCFGR_MCO1SEL_0                          ((uint8_t)0x01U)
#define CMU_MCOCFGR_MCO1SEL_1                          ((uint8_t)0x02U)
#define CMU_MCOCFGR_MCO1SEL_2                          ((uint8_t)0x04U)
#define CMU_MCOCFGR_MCO1SEL_3                          ((uint8_t)0x08U)
#define CMU_MCOCFGR_MCO1DIV_POS                        (4U)
#define CMU_MCOCFGR_MCO1DIV                            ((uint8_t)0x70U)
#define CMU_MCOCFGR_MCO1DIV_0                          ((uint8_t)0x10U)
#define CMU_MCOCFGR_MCO1DIV_1                          ((uint8_t)0x20U)
#define CMU_MCOCFGR_MCO1DIV_2                          ((uint8_t)0x40U)
#define CMU_MCOCFGR_MCO1EN_POS                         (7U)
#define CMU_MCOCFGR_MCO1EN                             ((uint8_t)0x80U)

/*  Bit definition for CMU_XTALSTDCR register  */
#define CMU_XTALSTDCR_XTALSTDIE_POS                    (0U)
#define CMU_XTALSTDCR_XTALSTDIE                        ((uint8_t)0x01U)
#define CMU_XTALSTDCR_XTALSTDRE_POS                    (1U)
#define CMU_XTALSTDCR_XTALSTDRE                        ((uint8_t)0x02U)
#define CMU_XTALSTDCR_XTALSTDRIS_POS                   (2U)
#define CMU_XTALSTDCR_XTALSTDRIS                       ((uint8_t)0x04U)
#define CMU_XTALSTDCR_XTALSTDE_POS                     (7U)
#define CMU_XTALSTDCR_XTALSTDE                         ((uint8_t)0x80U)

/*  Bit definition for CMU_FCG register  */
#define CMU_FCG_ADC_POS                                (0U)
#define CMU_FCG_ADC                                    ((uint32_t)0x00000001U)
#define CMU_FCG_CTC_POS                                (1U)
#define CMU_FCG_CTC                                    ((uint32_t)0x00000002U)
#define CMU_FCG_CMP_POS                                (2U)
#define CMU_FCG_CMP                                    ((uint32_t)0x00000004U)
#define CMU_FCG_AOS_POS                                (4U)
#define CMU_FCG_AOS                                    ((uint32_t)0x00000010U)
#define CMU_FCG_DMA_POS                                (5U)
#define CMU_FCG_DMA                                    ((uint32_t)0x00000020U)
#define CMU_FCG_CRC_POS                                (7U)
#define CMU_FCG_CRC                                    ((uint32_t)0x00000080U)
#define CMU_FCG_TIMA1_POS                              (8U)
#define CMU_FCG_TIMA1                                  ((uint32_t)0x00000100U)
#define CMU_FCG_TIMA2_POS                              (9U)
#define CMU_FCG_TIMA2                                  ((uint32_t)0x00000200U)
#define CMU_FCG_TIMA3_POS                              (10U)
#define CMU_FCG_TIMA3                                  ((uint32_t)0x00000400U)
#define CMU_FCG_TIMA4_POS                              (11U)
#define CMU_FCG_TIMA4                                  ((uint32_t)0x00000800U)
#define CMU_FCG_TIM0_1_POS                             (16U)
#define CMU_FCG_TIM0_1                                 ((uint32_t)0x00010000U)
#define CMU_FCG_TIM0_2_POS                             (17U)
#define CMU_FCG_TIM0_2                                 ((uint32_t)0x00020000U)
#define CMU_FCG_TIM4_1_POS                             (18U)
#define CMU_FCG_TIM4_1                                 ((uint32_t)0x00040000U)
#define CMU_FCG_TIMB_1_POS                             (19U)
#define CMU_FCG_TIMB_1                                 ((uint32_t)0x00080000U)
#define CMU_FCG_EMB_POS                                (20U)
#define CMU_FCG_EMB                                    ((uint32_t)0x00100000U)
#define CMU_FCG_FCM_POS                                (21U)
#define CMU_FCG_FCM                                    ((uint32_t)0x00200000U)
#define CMU_FCG_DCU_POS                                (22U)
#define CMU_FCG_DCU                                    ((uint32_t)0x00400000U)
#define CMU_FCG_UART1_POS                              (24U)
#define CMU_FCG_UART1                                  ((uint32_t)0x01000000U)
#define CMU_FCG_UART2_POS                              (25U)
#define CMU_FCG_UART2                                  ((uint32_t)0x02000000U)
#define CMU_FCG_UART3_POS                              (26U)
#define CMU_FCG_UART3                                  ((uint32_t)0x04000000U)
#define CMU_FCG_UART4_POS                              (27U)
#define CMU_FCG_UART4                                  ((uint32_t)0x08000000U)
#define CMU_FCG_IIC_1_POS                              (28U)
#define CMU_FCG_IIC_1                                  ((uint32_t)0x10000000U)
#define CMU_FCG_SPI_1_POS                              (29U)
#define CMU_FCG_SPI_1                                  ((uint32_t)0x20000000U)

/*  Bit definition for CMU_LRCCR register  */
#define CMU_LRCCR_LRCSTP_POS                           (0U)
#define CMU_LRCCR_LRCSTP                               ((uint8_t)0x01U)

/*  Bit definition for CMU_MRCCR register  */
#define CMU_MRCCR_MRCSTP_POS                           (0U)
#define CMU_MRCCR_MRCSTP                               ((uint8_t)0x01U)

/*  Bit definition for CMU_PLLCFGR register  */
#define CMU_PLLCFGR_PLLM_POS                           (0U)
#define CMU_PLLCFGR_PLLM                               ((uint32_t)0x00000007U)
#define CMU_PLLCFGR_PLLM_0                             ((uint32_t)0x00000001U)
#define CMU_PLLCFGR_PLLM_1                             ((uint32_t)0x00000002U)
#define CMU_PLLCFGR_PLLM_2                             ((uint32_t)0x00000004U)
#define CMU_PLLCFGR_PLLSRC_POS                         (7U)
#define CMU_PLLCFGR_PLLSRC                             ((uint32_t)0x00000080U)
#define CMU_PLLCFGR_PLLN_POS                           (8U)
#define CMU_PLLCFGR_PLLN                               ((uint32_t)0x00003F00U)
#define CMU_PLLCFGR_PLLN_0                             ((uint32_t)0x00000100U)
#define CMU_PLLCFGR_PLLN_1                             ((uint32_t)0x00000200U)
#define CMU_PLLCFGR_PLLN_2                             ((uint32_t)0x00000400U)
#define CMU_PLLCFGR_PLLN_3                             ((uint32_t)0x00000800U)
#define CMU_PLLCFGR_PLLN_4                             ((uint32_t)0x00001000U)
#define CMU_PLLCFGR_PLLN_5                             ((uint32_t)0x00002000U)
#define CMU_PLLCFGR_PLLP_POS                           (28U)
#define CMU_PLLCFGR_PLLP                               ((uint32_t)0x30000000U)
#define CMU_PLLCFGR_PLLP_0                             ((uint32_t)0x10000000U)
#define CMU_PLLCFGR_PLLP_1                             ((uint32_t)0x20000000U)

/*  Bit definition for CMU_PLLCR register  */
#define CMU_PLLCR_PLLOFF_POS                           (0U)
#define CMU_PLLCR_PLLOFF                               ((uint8_t)0x01U)

/*  Bit definition for CMU_TPIUCKCFGR register  */
#define CMU_TPIUCKCFGR_TPIUCKS_POS                     (0U)
#define CMU_TPIUCKCFGR_TPIUCKS                         ((uint8_t)0x03U)
#define CMU_TPIUCKCFGR_TPIUCKS_0                       ((uint8_t)0x01U)
#define CMU_TPIUCKCFGR_TPIUCKS_1                       ((uint8_t)0x02U)
#define CMU_TPIUCKCFGR_TPIUCKOE_POS                    (7U)
#define CMU_TPIUCKCFGR_TPIUCKOE                        ((uint8_t)0x80U)


/*******************************************************************************
                Bit definition for Peripheral CRC
*******************************************************************************/
/*  Bit definition for CRC_CR register  */
#define CRC_CR_CR_POS                                  (0U)
#define CRC_CR_CR                                      ((uint32_t)0x00000001U)
#define CRC_CR_FLAG_POS                                (1U)
#define CRC_CR_FLAG                                    ((uint32_t)0x00000002U)

/*  Bit definition for CRC_RESLT register  */
#define CRC_RESLT                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT0 register  */
#define CRC_DAT0                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT1 register  */
#define CRC_DAT1                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT2 register  */
#define CRC_DAT2                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT3 register  */
#define CRC_DAT3                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT4 register  */
#define CRC_DAT4                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT5 register  */
#define CRC_DAT5                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT6 register  */
#define CRC_DAT6                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT7 register  */
#define CRC_DAT7                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT8 register  */
#define CRC_DAT8                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT9 register  */
#define CRC_DAT9                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT10 register  */
#define CRC_DAT10                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT11 register  */
#define CRC_DAT11                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT12 register  */
#define CRC_DAT12                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT13 register  */
#define CRC_DAT13                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT14 register  */
#define CRC_DAT14                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT15 register  */
#define CRC_DAT15                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT16 register  */
#define CRC_DAT16                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT17 register  */
#define CRC_DAT17                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT18 register  */
#define CRC_DAT18                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT19 register  */
#define CRC_DAT19                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT20 register  */
#define CRC_DAT20                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT21 register  */
#define CRC_DAT21                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT22 register  */
#define CRC_DAT22                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT23 register  */
#define CRC_DAT23                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT24 register  */
#define CRC_DAT24                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT25 register  */
#define CRC_DAT25                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT26 register  */
#define CRC_DAT26                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT27 register  */
#define CRC_DAT27                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT28 register  */
#define CRC_DAT28                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT29 register  */
#define CRC_DAT29                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT30 register  */
#define CRC_DAT30                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for CRC_DAT31 register  */
#define CRC_DAT31                                      ((uint32_t)0xFFFFFFFFU)


/*******************************************************************************
                Bit definition for Peripheral CTC
*******************************************************************************/
/*  Bit definition for CTC_CR1 register  */
#define CTC_CR1_REFPSC_POS                             (0U)
#define CTC_CR1_REFPSC                                 ((uint32_t)0x00000007U)
#define CTC_CR1_REFPSC_0                               ((uint32_t)0x00000001U)
#define CTC_CR1_REFPSC_1                               ((uint32_t)0x00000002U)
#define CTC_CR1_REFPSC_2                               ((uint32_t)0x00000004U)
#define CTC_CR1_REFCKS_POS                             (4U)
#define CTC_CR1_REFCKS                                 ((uint32_t)0x00000030U)
#define CTC_CR1_REFCKS_0                               ((uint32_t)0x00000010U)
#define CTC_CR1_REFCKS_1                               ((uint32_t)0x00000020U)
#define CTC_CR1_ERRIE_POS                              (6U)
#define CTC_CR1_ERRIE                                  ((uint32_t)0x00000040U)
#define CTC_CR1_CTCEN_POS                              (7U)
#define CTC_CR1_CTCEN                                  ((uint32_t)0x00000080U)
#define CTC_CR1_TRMVAL_POS                             (16U)
#define CTC_CR1_TRMVAL                                 ((uint32_t)0x003F0000U)
#define CTC_CR1_TRMVAL_0                               ((uint32_t)0x00010000U)
#define CTC_CR1_TRMVAL_1                               ((uint32_t)0x00020000U)
#define CTC_CR1_TRMVAL_2                               ((uint32_t)0x00040000U)
#define CTC_CR1_TRMVAL_3                               ((uint32_t)0x00080000U)
#define CTC_CR1_TRMVAL_4                               ((uint32_t)0x00100000U)
#define CTC_CR1_TRMVAL_5                               ((uint32_t)0x00200000U)

/*  Bit definition for CTC_CR2 register  */
#define CTC_CR2_OFSVAL_POS                             (0U)
#define CTC_CR2_OFSVAL                                 ((uint32_t)0x000000FFU)
#define CTC_CR2_OFSVAL_0                               ((uint32_t)0x00000001U)
#define CTC_CR2_OFSVAL_1                               ((uint32_t)0x00000002U)
#define CTC_CR2_OFSVAL_2                               ((uint32_t)0x00000004U)
#define CTC_CR2_OFSVAL_3                               ((uint32_t)0x00000008U)
#define CTC_CR2_OFSVAL_4                               ((uint32_t)0x00000010U)
#define CTC_CR2_OFSVAL_5                               ((uint32_t)0x00000020U)
#define CTC_CR2_OFSVAL_6                               ((uint32_t)0x00000040U)
#define CTC_CR2_OFSVAL_7                               ((uint32_t)0x00000080U)
#define CTC_CR2_RLDVAL_POS                             (16U)
#define CTC_CR2_RLDVAL                                 ((uint32_t)0xFFFF0000U)
#define CTC_CR2_RLDVAL_0                               ((uint32_t)0x00010000U)
#define CTC_CR2_RLDVAL_1                               ((uint32_t)0x00020000U)
#define CTC_CR2_RLDVAL_2                               ((uint32_t)0x00040000U)
#define CTC_CR2_RLDVAL_3                               ((uint32_t)0x00080000U)
#define CTC_CR2_RLDVAL_4                               ((uint32_t)0x00100000U)
#define CTC_CR2_RLDVAL_5                               ((uint32_t)0x00200000U)
#define CTC_CR2_RLDVAL_6                               ((uint32_t)0x00400000U)
#define CTC_CR2_RLDVAL_7                               ((uint32_t)0x00800000U)
#define CTC_CR2_RLDVAL_8                               ((uint32_t)0x01000000U)
#define CTC_CR2_RLDVAL_9                               ((uint32_t)0x02000000U)
#define CTC_CR2_RLDVAL_10                              ((uint32_t)0x04000000U)
#define CTC_CR2_RLDVAL_11                              ((uint32_t)0x08000000U)
#define CTC_CR2_RLDVAL_12                              ((uint32_t)0x10000000U)
#define CTC_CR2_RLDVAL_13                              ((uint32_t)0x20000000U)
#define CTC_CR2_RLDVAL_14                              ((uint32_t)0x40000000U)
#define CTC_CR2_RLDVAL_15                              ((uint32_t)0x80000000U)

/*  Bit definition for CTC_STR register  */
#define CTC_STR_TRIMOK_POS                             (0U)
#define CTC_STR_TRIMOK                                 ((uint32_t)0x00000001U)
#define CTC_STR_TRMOVF_POS                             (1U)
#define CTC_STR_TRMOVF                                 ((uint32_t)0x00000002U)
#define CTC_STR_TRMUDF_POS                             (2U)
#define CTC_STR_TRMUDF                                 ((uint32_t)0x00000004U)
#define CTC_STR_CTCBSY_POS                             (3U)
#define CTC_STR_CTCBSY                                 ((uint32_t)0x00000008U)


/*******************************************************************************
                Bit definition for Peripheral DAC
*******************************************************************************/
/*  Bit definition for CMP_DADR1 register  */
#define CMP_DADR1_DATA1_POS                            (0U)
#define CMP_DADR1_DATA1                                ((uint16_t)0x00FFU)
#define CMP_DADR1_DATA1_0                              ((uint16_t)0x0001U)
#define CMP_DADR1_DATA1_1                              ((uint16_t)0x0002U)
#define CMP_DADR1_DATA1_2                              ((uint16_t)0x0004U)
#define CMP_DADR1_DATA1_3                              ((uint16_t)0x0008U)
#define CMP_DADR1_DATA1_4                              ((uint16_t)0x0010U)
#define CMP_DADR1_DATA1_5                              ((uint16_t)0x0020U)
#define CMP_DADR1_DATA1_6                              ((uint16_t)0x0040U)
#define CMP_DADR1_DATA1_7                              ((uint16_t)0x0080U)
#define CMP_DADR1_DATA2_POS                            (8U)
#define CMP_DADR1_DATA2                                ((uint16_t)0xFF00U)
#define CMP_DADR1_DATA2_0                              ((uint16_t)0x0100U)
#define CMP_DADR1_DATA2_1                              ((uint16_t)0x0200U)
#define CMP_DADR1_DATA2_2                              ((uint16_t)0x0400U)
#define CMP_DADR1_DATA2_3                              ((uint16_t)0x0800U)
#define CMP_DADR1_DATA2_4                              ((uint16_t)0x1000U)
#define CMP_DADR1_DATA2_5                              ((uint16_t)0x2000U)
#define CMP_DADR1_DATA2_6                              ((uint16_t)0x4000U)
#define CMP_DADR1_DATA2_7                              ((uint16_t)0x8000U)

/*  Bit definition for CMP_DACR1 register  */
#define CMP_DACR1_DAEN_POS                             (0U)
#define CMP_DACR1_DAEN                                 ((uint16_t)0x0001U)
#define CMP_DACR1_ALGN_POS                             (8U)
#define CMP_DACR1_ALGN                                 ((uint16_t)0x0100U)

/*  Bit definition for CMP_DADC1 register  */
#define CMP_DADC1_DASW_POS                             (0U)
#define CMP_DADC1_DASW                                 ((uint16_t)0x0001U)
#define CMP_DADC1_WPRT_POS                             (8U)
#define CMP_DADC1_WPRT                                 ((uint16_t)0xFF00U)
#define CMP_DADC1_WPRT_0                               ((uint16_t)0x0100U)
#define CMP_DADC1_WPRT_1                               ((uint16_t)0x0200U)
#define CMP_DADC1_WPRT_2                               ((uint16_t)0x0400U)
#define CMP_DADC1_WPRT_3                               ((uint16_t)0x0800U)
#define CMP_DADC1_WPRT_4                               ((uint16_t)0x1000U)
#define CMP_DADC1_WPRT_5                               ((uint16_t)0x2000U)
#define CMP_DADC1_WPRT_6                               ((uint16_t)0x4000U)
#define CMP_DADC1_WPRT_7                               ((uint16_t)0x8000U)


/*******************************************************************************
                Bit definition for Peripheral DBGC
*******************************************************************************/
/*  Bit definition for DBG_AUTHID0 register  */
#define DBG_AUTHID0                                    ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for DBG_AUTHID1 register  */
#define DBG_AUTHID1                                    ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for DBG_AUTHID2 register  */
#define DBG_AUTHID2                                    ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for DBG_RESV0 register  */
#define DBG_RESV0                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for DBG_MCUSTAT register  */
#define DBG_MCUSTAT_DBG_AUTH_POS                       (0U)
#define DBG_MCUSTAT_DBG_AUTH                           ((uint32_t)0x00000001U)
#define DBG_MCUSTAT_FMC_REMVLOCK_POS                   (1U)
#define DBG_MCUSTAT_FMC_REMVLOCK                       ((uint32_t)0x00000002U)
#define DBG_MCUSTAT_FMC_SAFTYLOCK1_POS                 (2U)
#define DBG_MCUSTAT_FMC_SAFTYLOCK1                     ((uint32_t)0x00000004U)
#define DBG_MCUSTAT_FMC_SAFTYLOCK2_POS                 (3U)
#define DBG_MCUSTAT_FMC_SAFTYLOCK2                     ((uint32_t)0x00000008U)
#define DBG_MCUSTAT_MCUSTAT0_POS                       (8U)
#define DBG_MCUSTAT_MCUSTAT0                           ((uint32_t)0x00000100U)
#define DBG_MCUSTAT_MCUSTAT1_POS                       (9U)
#define DBG_MCUSTAT_MCUSTAT1                           ((uint32_t)0x00000200U)

/*  Bit definition for DBG_MCUCTL register  */
#define DBG_MCUCTL_EDBGRQ_POS                          (0U)
#define DBG_MCUCTL_EDBGRQ                              ((uint32_t)0x00000001U)
#define DBG_MCUCTL_RESTART_POS                         (1U)
#define DBG_MCUCTL_RESTART                             ((uint32_t)0x00000002U)
#define DBG_MCUCTL_DBG_IRQ_POS                         (8U)
#define DBG_MCUCTL_DBG_IRQ                             ((uint32_t)0x00000100U)

/*  Bit definition for DBG_FMCCTL register  */
#define DBG_FMCCTL_ERASEREQ_POS                        (0U)
#define DBG_FMCCTL_ERASEREQ                            ((uint32_t)0x00000001U)
#define DBG_FMCCTL_ERASEACK_POS                        (1U)
#define DBG_FMCCTL_ERASEACK                            ((uint32_t)0x00000002U)
#define DBG_FMCCTL_ERASEERR_POS                        (2U)
#define DBG_FMCCTL_ERASEERR                            ((uint32_t)0x00000004U)


/*******************************************************************************
                Bit definition for Peripheral DCU
*******************************************************************************/
/*  Bit definition for DCU_CTL register  */
#define DCU_CTL_MODE_POS                               (0U)
#define DCU_CTL_MODE                                   ((uint32_t)0x00000007U)
#define DCU_CTL_MODE_0                                 ((uint32_t)0x00000001U)
#define DCU_CTL_MODE_1                                 ((uint32_t)0x00000002U)
#define DCU_CTL_MODE_2                                 ((uint32_t)0x00000004U)
#define DCU_CTL_DATASIZE_POS                           (3U)
#define DCU_CTL_DATASIZE                               ((uint32_t)0x00000018U)
#define DCU_CTL_DATASIZE_0                             ((uint32_t)0x00000008U)
#define DCU_CTL_DATASIZE_1                             ((uint32_t)0x00000010U)
#define DCU_CTL_COMP_TRG_POS                           (8U)
#define DCU_CTL_COMP_TRG                               ((uint32_t)0x00000100U)
#define DCU_CTL_INTEN_POS                              (31U)
#define DCU_CTL_INTEN                                  ((uint32_t)0x80000000U)

/*  Bit definition for DCU_FLAG register  */
#define DCU_FLAG_FLAG_OP_POS                           (0U)
#define DCU_FLAG_FLAG_OP                               ((uint32_t)0x00000001U)
#define DCU_FLAG_FLAG_LS2_POS                          (1U)
#define DCU_FLAG_FLAG_LS2                              ((uint32_t)0x00000002U)
#define DCU_FLAG_FLAG_EQ2_POS                          (2U)
#define DCU_FLAG_FLAG_EQ2                              ((uint32_t)0x00000004U)
#define DCU_FLAG_FLAG_GT2_POS                          (3U)
#define DCU_FLAG_FLAG_GT2                              ((uint32_t)0x00000008U)
#define DCU_FLAG_FLAG_LS1_POS                          (4U)
#define DCU_FLAG_FLAG_LS1                              ((uint32_t)0x00000010U)
#define DCU_FLAG_FLAG_EQ1_POS                          (5U)
#define DCU_FLAG_FLAG_EQ1                              ((uint32_t)0x00000020U)
#define DCU_FLAG_FLAG_GT1_POS                          (6U)
#define DCU_FLAG_FLAG_GT1                              ((uint32_t)0x00000040U)

/*  Bit definition for DCU_DATA0 register  */
#define DCU_DATA0                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for DCU_DATA1 register  */
#define DCU_DATA1                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for DCU_DATA2 register  */
#define DCU_DATA2                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for DCU_FLAGCLR register  */
#define DCU_FLAGCLR_CLR_OP_POS                         (0U)
#define DCU_FLAGCLR_CLR_OP                             ((uint32_t)0x00000001U)
#define DCU_FLAGCLR_CLR_LS2_POS                        (1U)
#define DCU_FLAGCLR_CLR_LS2                            ((uint32_t)0x00000002U)
#define DCU_FLAGCLR_CLR_EQ2_POS                        (2U)
#define DCU_FLAGCLR_CLR_EQ2                            ((uint32_t)0x00000004U)
#define DCU_FLAGCLR_CLR_GT2_POS                        (3U)
#define DCU_FLAGCLR_CLR_GT2                            ((uint32_t)0x00000008U)
#define DCU_FLAGCLR_CLR_LS1_POS                        (4U)
#define DCU_FLAGCLR_CLR_LS1                            ((uint32_t)0x00000010U)
#define DCU_FLAGCLR_CLR_EQ1_POS                        (5U)
#define DCU_FLAGCLR_CLR_EQ1                            ((uint32_t)0x00000020U)
#define DCU_FLAGCLR_CLR_GT1_POS                        (6U)
#define DCU_FLAGCLR_CLR_GT1                            ((uint32_t)0x00000040U)

/*  Bit definition for DCU_INTSEL register  */
#define DCU_INTSEL_INT_OP_POS                          (0U)
#define DCU_INTSEL_INT_OP                              ((uint32_t)0x00000001U)
#define DCU_INTSEL_INT_LS2_POS                         (1U)
#define DCU_INTSEL_INT_LS2                             ((uint32_t)0x00000002U)
#define DCU_INTSEL_INT_EQ2_POS                         (2U)
#define DCU_INTSEL_INT_EQ2                             ((uint32_t)0x00000004U)
#define DCU_INTSEL_INT_GT2_POS                         (3U)
#define DCU_INTSEL_INT_GT2                             ((uint32_t)0x00000008U)
#define DCU_INTSEL_INT_LS1_POS                         (4U)
#define DCU_INTSEL_INT_LS1                             ((uint32_t)0x00000010U)
#define DCU_INTSEL_INT_EQ1_POS                         (5U)
#define DCU_INTSEL_INT_EQ1                             ((uint32_t)0x00000020U)
#define DCU_INTSEL_INT_GT1_POS                         (6U)
#define DCU_INTSEL_INT_GT1                             ((uint32_t)0x00000040U)
#define DCU_INTSEL_INT_WIN_POS                         (7U)
#define DCU_INTSEL_INT_WIN                             ((uint32_t)0x00000180U)
#define DCU_INTSEL_INT_WIN_0                           ((uint32_t)0x00000080U)
#define DCU_INTSEL_INT_WIN_1                           ((uint32_t)0x00000100U)


/*******************************************************************************
                Bit definition for Peripheral DMA
*******************************************************************************/
/*  Bit definition for DMA_EN register  */
#define DMA_EN_EN_POS                                  (0U)
#define DMA_EN_EN                                      ((uint32_t)0x00000001U)

/*  Bit definition for DMA_INTSTAT0 register  */
#define DMA_INTSTAT0_TRNERR_POS                        (0U)
#define DMA_INTSTAT0_TRNERR                            ((uint32_t)0x0000000FU)
#define DMA_INTSTAT0_TRNERR_0                          ((uint32_t)0x00000001U)
#define DMA_INTSTAT0_TRNERR_1                          ((uint32_t)0x00000002U)
#define DMA_INTSTAT0_TRNERR_2                          ((uint32_t)0x00000004U)
#define DMA_INTSTAT0_TRNERR_3                          ((uint32_t)0x00000008U)
#define DMA_INTSTAT0_REQERR_POS                        (16U)
#define DMA_INTSTAT0_REQERR                            ((uint32_t)0x000F0000U)
#define DMA_INTSTAT0_REQERR_0                          ((uint32_t)0x00010000U)
#define DMA_INTSTAT0_REQERR_1                          ((uint32_t)0x00020000U)
#define DMA_INTSTAT0_REQERR_2                          ((uint32_t)0x00040000U)
#define DMA_INTSTAT0_REQERR_3                          ((uint32_t)0x00080000U)

/*  Bit definition for DMA_INTSTAT1 register  */
#define DMA_INTSTAT1_TC_POS                            (0U)
#define DMA_INTSTAT1_TC                                ((uint32_t)0x0000000FU)
#define DMA_INTSTAT1_TC_0                              ((uint32_t)0x00000001U)
#define DMA_INTSTAT1_TC_1                              ((uint32_t)0x00000002U)
#define DMA_INTSTAT1_TC_2                              ((uint32_t)0x00000004U)
#define DMA_INTSTAT1_TC_3                              ((uint32_t)0x00000008U)
#define DMA_INTSTAT1_BTC_POS                           (16U)
#define DMA_INTSTAT1_BTC                               ((uint32_t)0x000F0000U)
#define DMA_INTSTAT1_BTC_0                             ((uint32_t)0x00010000U)
#define DMA_INTSTAT1_BTC_1                             ((uint32_t)0x00020000U)
#define DMA_INTSTAT1_BTC_2                             ((uint32_t)0x00040000U)
#define DMA_INTSTAT1_BTC_3                             ((uint32_t)0x00080000U)

/*  Bit definition for DMA_INTMASK0 register  */
#define DMA_INTMASK0_MSKTRNERR_POS                     (0U)
#define DMA_INTMASK0_MSKTRNERR                         ((uint32_t)0x0000000FU)
#define DMA_INTMASK0_MSKTRNERR_0                       ((uint32_t)0x00000001U)
#define DMA_INTMASK0_MSKTRNERR_1                       ((uint32_t)0x00000002U)
#define DMA_INTMASK0_MSKTRNERR_2                       ((uint32_t)0x00000004U)
#define DMA_INTMASK0_MSKTRNERR_3                       ((uint32_t)0x00000008U)
#define DMA_INTMASK0_MSKREQERR_POS                     (16U)
#define DMA_INTMASK0_MSKREQERR                         ((uint32_t)0x000F0000U)
#define DMA_INTMASK0_MSKREQERR_0                       ((uint32_t)0x00010000U)
#define DMA_INTMASK0_MSKREQERR_1                       ((uint32_t)0x00020000U)
#define DMA_INTMASK0_MSKREQERR_2                       ((uint32_t)0x00040000U)
#define DMA_INTMASK0_MSKREQERR_3                       ((uint32_t)0x00080000U)

/*  Bit definition for DMA_INTMASK1 register  */
#define DMA_INTMASK1_MSKTC_POS                         (0U)
#define DMA_INTMASK1_MSKTC                             ((uint32_t)0x0000000FU)
#define DMA_INTMASK1_MSKTC_0                           ((uint32_t)0x00000001U)
#define DMA_INTMASK1_MSKTC_1                           ((uint32_t)0x00000002U)
#define DMA_INTMASK1_MSKTC_2                           ((uint32_t)0x00000004U)
#define DMA_INTMASK1_MSKTC_3                           ((uint32_t)0x00000008U)
#define DMA_INTMASK1_MSKBTC_POS                        (16U)
#define DMA_INTMASK1_MSKBTC                            ((uint32_t)0x000F0000U)
#define DMA_INTMASK1_MSKBTC_0                          ((uint32_t)0x00010000U)
#define DMA_INTMASK1_MSKBTC_1                          ((uint32_t)0x00020000U)
#define DMA_INTMASK1_MSKBTC_2                          ((uint32_t)0x00040000U)
#define DMA_INTMASK1_MSKBTC_3                          ((uint32_t)0x00080000U)

/*  Bit definition for DMA_INTCLR0 register  */
#define DMA_INTCLR0_CLRTRNERR_POS                      (0U)
#define DMA_INTCLR0_CLRTRNERR                          ((uint32_t)0x0000000FU)
#define DMA_INTCLR0_CLRTRNERR_0                        ((uint32_t)0x00000001U)
#define DMA_INTCLR0_CLRTRNERR_1                        ((uint32_t)0x00000002U)
#define DMA_INTCLR0_CLRTRNERR_2                        ((uint32_t)0x00000004U)
#define DMA_INTCLR0_CLRTRNERR_3                        ((uint32_t)0x00000008U)
#define DMA_INTCLR0_CLRREQERR_POS                      (16U)
#define DMA_INTCLR0_CLRREQERR                          ((uint32_t)0x000F0000U)
#define DMA_INTCLR0_CLRREQERR_0                        ((uint32_t)0x00010000U)
#define DMA_INTCLR0_CLRREQERR_1                        ((uint32_t)0x00020000U)
#define DMA_INTCLR0_CLRREQERR_2                        ((uint32_t)0x00040000U)
#define DMA_INTCLR0_CLRREQERR_3                        ((uint32_t)0x00080000U)

/*  Bit definition for DMA_INTCLR1 register  */
#define DMA_INTCLR1_CLRTC_POS                          (0U)
#define DMA_INTCLR1_CLRTC                              ((uint32_t)0x0000000FU)
#define DMA_INTCLR1_CLRTC_0                            ((uint32_t)0x00000001U)
#define DMA_INTCLR1_CLRTC_1                            ((uint32_t)0x00000002U)
#define DMA_INTCLR1_CLRTC_2                            ((uint32_t)0x00000004U)
#define DMA_INTCLR1_CLRTC_3                            ((uint32_t)0x00000008U)
#define DMA_INTCLR1_CLRBTC_POS                         (16U)
#define DMA_INTCLR1_CLRBTC                             ((uint32_t)0x000F0000U)
#define DMA_INTCLR1_CLRBTC_0                           ((uint32_t)0x00010000U)
#define DMA_INTCLR1_CLRBTC_1                           ((uint32_t)0x00020000U)
#define DMA_INTCLR1_CLRBTC_2                           ((uint32_t)0x00040000U)
#define DMA_INTCLR1_CLRBTC_3                           ((uint32_t)0x00080000U)

/*  Bit definition for DMA_CHEN register  */
#define DMA_CHEN_CHEN_POS                              (0U)
#define DMA_CHEN_CHEN                                  ((uint32_t)0x0000000FU)
#define DMA_CHEN_CHEN_0                                ((uint32_t)0x00000001U)
#define DMA_CHEN_CHEN_1                                ((uint32_t)0x00000002U)
#define DMA_CHEN_CHEN_2                                ((uint32_t)0x00000004U)
#define DMA_CHEN_CHEN_3                                ((uint32_t)0x00000008U)

/*  Bit definition for DMA_CHSTAT register  */
#define DMA_CHSTAT_DMAACT_POS                          (0U)
#define DMA_CHSTAT_DMAACT                              ((uint32_t)0x00000001U)
#define DMA_CHSTAT_CHACT_POS                           (16U)
#define DMA_CHSTAT_CHACT                               ((uint32_t)0x000F0000U)
#define DMA_CHSTAT_CHACT_0                             ((uint32_t)0x00010000U)
#define DMA_CHSTAT_CHACT_1                             ((uint32_t)0x00020000U)
#define DMA_CHSTAT_CHACT_2                             ((uint32_t)0x00040000U)
#define DMA_CHSTAT_CHACT_3                             ((uint32_t)0x00080000U)

/*  Bit definition for DMA_RAM_LLP register  */
#define DMA_RAM_LLP_LLP_POS                            (14U)
#define DMA_RAM_LLP_LLP                                ((uint32_t)0xFFFFC000U)
#define DMA_RAM_LLP_LLP_0                              ((uint32_t)0x00004000U)
#define DMA_RAM_LLP_LLP_1                              ((uint32_t)0x00008000U)
#define DMA_RAM_LLP_LLP_2                              ((uint32_t)0x00010000U)
#define DMA_RAM_LLP_LLP_3                              ((uint32_t)0x00020000U)
#define DMA_RAM_LLP_LLP_4                              ((uint32_t)0x00040000U)
#define DMA_RAM_LLP_LLP_5                              ((uint32_t)0x00080000U)
#define DMA_RAM_LLP_LLP_6                              ((uint32_t)0x00100000U)
#define DMA_RAM_LLP_LLP_7                              ((uint32_t)0x00200000U)
#define DMA_RAM_LLP_LLP_8                              ((uint32_t)0x00400000U)
#define DMA_RAM_LLP_LLP_9                              ((uint32_t)0x00800000U)
#define DMA_RAM_LLP_LLP_10                             ((uint32_t)0x01000000U)
#define DMA_RAM_LLP_LLP_11                             ((uint32_t)0x02000000U)
#define DMA_RAM_LLP_LLP_12                             ((uint32_t)0x04000000U)
#define DMA_RAM_LLP_LLP_13                             ((uint32_t)0x08000000U)
#define DMA_RAM_LLP_LLP_14                             ((uint32_t)0x10000000U)
#define DMA_RAM_LLP_LLP_15                             ((uint32_t)0x20000000U)
#define DMA_RAM_LLP_LLP_16                             ((uint32_t)0x40000000U)
#define DMA_RAM_LLP_LLP_17                             ((uint32_t)0x80000000U)

/*  Bit definition for DMA_ROM_LLP register  */
#define DMA_ROM_LLP_LLP_POS                            (14U)
#define DMA_ROM_LLP_LLP                                ((uint32_t)0xFFFFC000U)
#define DMA_ROM_LLP_LLP_0                              ((uint32_t)0x00004000U)
#define DMA_ROM_LLP_LLP_1                              ((uint32_t)0x00008000U)
#define DMA_ROM_LLP_LLP_2                              ((uint32_t)0x00010000U)
#define DMA_ROM_LLP_LLP_3                              ((uint32_t)0x00020000U)
#define DMA_ROM_LLP_LLP_4                              ((uint32_t)0x00040000U)
#define DMA_ROM_LLP_LLP_5                              ((uint32_t)0x00080000U)
#define DMA_ROM_LLP_LLP_6                              ((uint32_t)0x00100000U)
#define DMA_ROM_LLP_LLP_7                              ((uint32_t)0x00200000U)
#define DMA_ROM_LLP_LLP_8                              ((uint32_t)0x00400000U)
#define DMA_ROM_LLP_LLP_9                              ((uint32_t)0x00800000U)
#define DMA_ROM_LLP_LLP_10                             ((uint32_t)0x01000000U)
#define DMA_ROM_LLP_LLP_11                             ((uint32_t)0x02000000U)
#define DMA_ROM_LLP_LLP_12                             ((uint32_t)0x04000000U)
#define DMA_ROM_LLP_LLP_13                             ((uint32_t)0x08000000U)
#define DMA_ROM_LLP_LLP_14                             ((uint32_t)0x10000000U)
#define DMA_ROM_LLP_LLP_15                             ((uint32_t)0x20000000U)
#define DMA_ROM_LLP_LLP_16                             ((uint32_t)0x40000000U)
#define DMA_ROM_LLP_LLP_17                             ((uint32_t)0x80000000U)

/*  Bit definition for DMA_CHENCLR register  */
#define DMA_CHENCLR_CHENCLR_POS                        (0U)
#define DMA_CHENCLR_CHENCLR                            ((uint32_t)0x0000000FU)
#define DMA_CHENCLR_CHENCLR_0                          ((uint32_t)0x00000001U)
#define DMA_CHENCLR_CHENCLR_1                          ((uint32_t)0x00000002U)
#define DMA_CHENCLR_CHENCLR_2                          ((uint32_t)0x00000004U)
#define DMA_CHENCLR_CHENCLR_3                          ((uint32_t)0x00000008U)

/*  Bit definition for DMA_SAR0 register  */
#define DMA_SAR0                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for DMA_DAR0 register  */
#define DMA_DAR0                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for DMA_CH0CTL0 register  */
#define DMA_CH0CTL0_BLKSIZE_POS                        (0U)
#define DMA_CH0CTL0_BLKSIZE                            ((uint32_t)0x000000FFU)
#define DMA_CH0CTL0_BLKSIZE_0                          ((uint32_t)0x00000001U)
#define DMA_CH0CTL0_BLKSIZE_1                          ((uint32_t)0x00000002U)
#define DMA_CH0CTL0_BLKSIZE_2                          ((uint32_t)0x00000004U)
#define DMA_CH0CTL0_BLKSIZE_3                          ((uint32_t)0x00000008U)
#define DMA_CH0CTL0_BLKSIZE_4                          ((uint32_t)0x00000010U)
#define DMA_CH0CTL0_BLKSIZE_5                          ((uint32_t)0x00000020U)
#define DMA_CH0CTL0_BLKSIZE_6                          ((uint32_t)0x00000040U)
#define DMA_CH0CTL0_BLKSIZE_7                          ((uint32_t)0x00000080U)
#define DMA_CH0CTL0_CNT_POS                            (8U)
#define DMA_CH0CTL0_CNT                                ((uint32_t)0x0003FF00U)
#define DMA_CH0CTL0_CNT_0                              ((uint32_t)0x00000100U)
#define DMA_CH0CTL0_CNT_1                              ((uint32_t)0x00000200U)
#define DMA_CH0CTL0_CNT_2                              ((uint32_t)0x00000400U)
#define DMA_CH0CTL0_CNT_3                              ((uint32_t)0x00000800U)
#define DMA_CH0CTL0_CNT_4                              ((uint32_t)0x00001000U)
#define DMA_CH0CTL0_CNT_5                              ((uint32_t)0x00002000U)
#define DMA_CH0CTL0_CNT_6                              ((uint32_t)0x00004000U)
#define DMA_CH0CTL0_CNT_7                              ((uint32_t)0x00008000U)
#define DMA_CH0CTL0_CNT_8                              ((uint32_t)0x00010000U)
#define DMA_CH0CTL0_CNT_9                              ((uint32_t)0x00020000U)
#define DMA_CH0CTL0_LLP_POS                            (18U)
#define DMA_CH0CTL0_LLP                                ((uint32_t)0x0FFC0000U)
#define DMA_CH0CTL0_LLP_0                              ((uint32_t)0x00040000U)
#define DMA_CH0CTL0_LLP_1                              ((uint32_t)0x00080000U)
#define DMA_CH0CTL0_LLP_2                              ((uint32_t)0x00100000U)
#define DMA_CH0CTL0_LLP_3                              ((uint32_t)0x00200000U)
#define DMA_CH0CTL0_LLP_4                              ((uint32_t)0x00400000U)
#define DMA_CH0CTL0_LLP_5                              ((uint32_t)0x00800000U)
#define DMA_CH0CTL0_LLP_6                              ((uint32_t)0x01000000U)
#define DMA_CH0CTL0_LLP_7                              ((uint32_t)0x02000000U)
#define DMA_CH0CTL0_LLP_8                              ((uint32_t)0x04000000U)
#define DMA_CH0CTL0_LLP_9                              ((uint32_t)0x08000000U)
#define DMA_CH0CTL0_LLPEN_POS                          (28U)
#define DMA_CH0CTL0_LLPEN                              ((uint32_t)0x10000000U)
#define DMA_CH0CTL0_LLPRUN_POS                         (29U)
#define DMA_CH0CTL0_LLPRUN                             ((uint32_t)0x20000000U)
#define DMA_CH0CTL0_HSIZE_POS                          (30U)
#define DMA_CH0CTL0_HSIZE                              ((uint32_t)0xC0000000U)
#define DMA_CH0CTL0_HSIZE_0                            ((uint32_t)0x40000000U)
#define DMA_CH0CTL0_HSIZE_1                            ((uint32_t)0x80000000U)

/*  Bit definition for DMA_CH0CTL1 register  */
#define DMA_CH0CTL1_OFFSET_POS                         (0U)
#define DMA_CH0CTL1_OFFSET                             ((uint32_t)0x0000FFFFU)
#define DMA_CH0CTL1_OFFSET_0                           ((uint32_t)0x00000001U)
#define DMA_CH0CTL1_OFFSET_1                           ((uint32_t)0x00000002U)
#define DMA_CH0CTL1_OFFSET_2                           ((uint32_t)0x00000004U)
#define DMA_CH0CTL1_OFFSET_3                           ((uint32_t)0x00000008U)
#define DMA_CH0CTL1_OFFSET_4                           ((uint32_t)0x00000010U)
#define DMA_CH0CTL1_OFFSET_5                           ((uint32_t)0x00000020U)
#define DMA_CH0CTL1_OFFSET_6                           ((uint32_t)0x00000040U)
#define DMA_CH0CTL1_OFFSET_7                           ((uint32_t)0x00000080U)
#define DMA_CH0CTL1_OFFSET_8                           ((uint32_t)0x00000100U)
#define DMA_CH0CTL1_OFFSET_9                           ((uint32_t)0x00000200U)
#define DMA_CH0CTL1_OFFSET_10                          ((uint32_t)0x00000400U)
#define DMA_CH0CTL1_OFFSET_11                          ((uint32_t)0x00000800U)
#define DMA_CH0CTL1_OFFSET_12                          ((uint32_t)0x00001000U)
#define DMA_CH0CTL1_OFFSET_13                          ((uint32_t)0x00002000U)
#define DMA_CH0CTL1_OFFSET_14                          ((uint32_t)0x00004000U)
#define DMA_CH0CTL1_OFFSET_15                          ((uint32_t)0x00008000U)
#define DMA_CH0CTL1_RPTNSCNT_POS                       (16U)
#define DMA_CH0CTL1_RPTNSCNT                           ((uint32_t)0x00FF0000U)
#define DMA_CH0CTL1_RPTNSCNT_0                         ((uint32_t)0x00010000U)
#define DMA_CH0CTL1_RPTNSCNT_1                         ((uint32_t)0x00020000U)
#define DMA_CH0CTL1_RPTNSCNT_2                         ((uint32_t)0x00040000U)
#define DMA_CH0CTL1_RPTNSCNT_3                         ((uint32_t)0x00080000U)
#define DMA_CH0CTL1_RPTNSCNT_4                         ((uint32_t)0x00100000U)
#define DMA_CH0CTL1_RPTNSCNT_5                         ((uint32_t)0x00200000U)
#define DMA_CH0CTL1_RPTNSCNT_6                         ((uint32_t)0x00400000U)
#define DMA_CH0CTL1_RPTNSCNT_7                         ((uint32_t)0x00800000U)
#define DMA_CH0CTL1_RPTNSEN_POS                        (24U)
#define DMA_CH0CTL1_RPTNSEN                            ((uint32_t)0x01000000U)
#define DMA_CH0CTL1_RPTNSSEL_POS                       (25U)
#define DMA_CH0CTL1_RPTNSSEL                           ((uint32_t)0x06000000U)
#define DMA_CH0CTL1_RPTNSSEL_0                         ((uint32_t)0x02000000U)
#define DMA_CH0CTL1_RPTNSSEL_1                         ((uint32_t)0x04000000U)
#define DMA_CH0CTL1_LLPSEL_POS                         (27U)
#define DMA_CH0CTL1_LLPSEL                             ((uint32_t)0x08000000U)
#define DMA_CH0CTL1_SINC_POS                           (28U)
#define DMA_CH0CTL1_SINC                               ((uint32_t)0x30000000U)
#define DMA_CH0CTL1_SINC_0                             ((uint32_t)0x10000000U)
#define DMA_CH0CTL1_SINC_1                             ((uint32_t)0x20000000U)
#define DMA_CH0CTL1_DINC_POS                           (30U)
#define DMA_CH0CTL1_DINC                               ((uint32_t)0xC0000000U)
#define DMA_CH0CTL1_DINC_0                             ((uint32_t)0x40000000U)
#define DMA_CH0CTL1_DINC_1                             ((uint32_t)0x80000000U)

/*  Bit definition for DMA_SAR1 register  */
#define DMA_SAR1                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for DMA_DAR1 register  */
#define DMA_DAR1                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for DMA_CH1CTL0 register  */
#define DMA_CH1CTL0_BLKSIZE_POS                        (0U)
#define DMA_CH1CTL0_BLKSIZE                            ((uint32_t)0x000000FFU)
#define DMA_CH1CTL0_BLKSIZE_0                          ((uint32_t)0x00000001U)
#define DMA_CH1CTL0_BLKSIZE_1                          ((uint32_t)0x00000002U)
#define DMA_CH1CTL0_BLKSIZE_2                          ((uint32_t)0x00000004U)
#define DMA_CH1CTL0_BLKSIZE_3                          ((uint32_t)0x00000008U)
#define DMA_CH1CTL0_BLKSIZE_4                          ((uint32_t)0x00000010U)
#define DMA_CH1CTL0_BLKSIZE_5                          ((uint32_t)0x00000020U)
#define DMA_CH1CTL0_BLKSIZE_6                          ((uint32_t)0x00000040U)
#define DMA_CH1CTL0_BLKSIZE_7                          ((uint32_t)0x00000080U)
#define DMA_CH1CTL0_CNT_POS                            (8U)
#define DMA_CH1CTL0_CNT                                ((uint32_t)0x0003FF00U)
#define DMA_CH1CTL0_CNT_0                              ((uint32_t)0x00000100U)
#define DMA_CH1CTL0_CNT_1                              ((uint32_t)0x00000200U)
#define DMA_CH1CTL0_CNT_2                              ((uint32_t)0x00000400U)
#define DMA_CH1CTL0_CNT_3                              ((uint32_t)0x00000800U)
#define DMA_CH1CTL0_CNT_4                              ((uint32_t)0x00001000U)
#define DMA_CH1CTL0_CNT_5                              ((uint32_t)0x00002000U)
#define DMA_CH1CTL0_CNT_6                              ((uint32_t)0x00004000U)
#define DMA_CH1CTL0_CNT_7                              ((uint32_t)0x00008000U)
#define DMA_CH1CTL0_CNT_8                              ((uint32_t)0x00010000U)
#define DMA_CH1CTL0_CNT_9                              ((uint32_t)0x00020000U)
#define DMA_CH1CTL0_LLP_POS                            (18U)
#define DMA_CH1CTL0_LLP                                ((uint32_t)0x0FFC0000U)
#define DMA_CH1CTL0_LLP_0                              ((uint32_t)0x00040000U)
#define DMA_CH1CTL0_LLP_1                              ((uint32_t)0x00080000U)
#define DMA_CH1CTL0_LLP_2                              ((uint32_t)0x00100000U)
#define DMA_CH1CTL0_LLP_3                              ((uint32_t)0x00200000U)
#define DMA_CH1CTL0_LLP_4                              ((uint32_t)0x00400000U)
#define DMA_CH1CTL0_LLP_5                              ((uint32_t)0x00800000U)
#define DMA_CH1CTL0_LLP_6                              ((uint32_t)0x01000000U)
#define DMA_CH1CTL0_LLP_7                              ((uint32_t)0x02000000U)
#define DMA_CH1CTL0_LLP_8                              ((uint32_t)0x04000000U)
#define DMA_CH1CTL0_LLP_9                              ((uint32_t)0x08000000U)
#define DMA_CH1CTL0_LLPEN_POS                          (28U)
#define DMA_CH1CTL0_LLPEN                              ((uint32_t)0x10000000U)
#define DMA_CH1CTL0_LLPRUN_POS                         (29U)
#define DMA_CH1CTL0_LLPRUN                             ((uint32_t)0x20000000U)
#define DMA_CH1CTL0_HSIZE_POS                          (30U)
#define DMA_CH1CTL0_HSIZE                              ((uint32_t)0xC0000000U)
#define DMA_CH1CTL0_HSIZE_0                            ((uint32_t)0x40000000U)
#define DMA_CH1CTL0_HSIZE_1                            ((uint32_t)0x80000000U)

/*  Bit definition for DMA_CH1CTL1 register  */
#define DMA_CH1CTL1_OFFSET_POS                         (0U)
#define DMA_CH1CTL1_OFFSET                             ((uint32_t)0x0000FFFFU)
#define DMA_CH1CTL1_OFFSET_0                           ((uint32_t)0x00000001U)
#define DMA_CH1CTL1_OFFSET_1                           ((uint32_t)0x00000002U)
#define DMA_CH1CTL1_OFFSET_2                           ((uint32_t)0x00000004U)
#define DMA_CH1CTL1_OFFSET_3                           ((uint32_t)0x00000008U)
#define DMA_CH1CTL1_OFFSET_4                           ((uint32_t)0x00000010U)
#define DMA_CH1CTL1_OFFSET_5                           ((uint32_t)0x00000020U)
#define DMA_CH1CTL1_OFFSET_6                           ((uint32_t)0x00000040U)
#define DMA_CH1CTL1_OFFSET_7                           ((uint32_t)0x00000080U)
#define DMA_CH1CTL1_OFFSET_8                           ((uint32_t)0x00000100U)
#define DMA_CH1CTL1_OFFSET_9                           ((uint32_t)0x00000200U)
#define DMA_CH1CTL1_OFFSET_10                          ((uint32_t)0x00000400U)
#define DMA_CH1CTL1_OFFSET_11                          ((uint32_t)0x00000800U)
#define DMA_CH1CTL1_OFFSET_12                          ((uint32_t)0x00001000U)
#define DMA_CH1CTL1_OFFSET_13                          ((uint32_t)0x00002000U)
#define DMA_CH1CTL1_OFFSET_14                          ((uint32_t)0x00004000U)
#define DMA_CH1CTL1_OFFSET_15                          ((uint32_t)0x00008000U)
#define DMA_CH1CTL1_RPTNSCNT_POS                       (16U)
#define DMA_CH1CTL1_RPTNSCNT                           ((uint32_t)0x00FF0000U)
#define DMA_CH1CTL1_RPTNSCNT_0                         ((uint32_t)0x00010000U)
#define DMA_CH1CTL1_RPTNSCNT_1                         ((uint32_t)0x00020000U)
#define DMA_CH1CTL1_RPTNSCNT_2                         ((uint32_t)0x00040000U)
#define DMA_CH1CTL1_RPTNSCNT_3                         ((uint32_t)0x00080000U)
#define DMA_CH1CTL1_RPTNSCNT_4                         ((uint32_t)0x00100000U)
#define DMA_CH1CTL1_RPTNSCNT_5                         ((uint32_t)0x00200000U)
#define DMA_CH1CTL1_RPTNSCNT_6                         ((uint32_t)0x00400000U)
#define DMA_CH1CTL1_RPTNSCNT_7                         ((uint32_t)0x00800000U)
#define DMA_CH1CTL1_RPTNSEN_POS                        (24U)
#define DMA_CH1CTL1_RPTNSEN                            ((uint32_t)0x01000000U)
#define DMA_CH1CTL1_RPTNSSEL_POS                       (25U)
#define DMA_CH1CTL1_RPTNSSEL                           ((uint32_t)0x06000000U)
#define DMA_CH1CTL1_RPTNSSEL_0                         ((uint32_t)0x02000000U)
#define DMA_CH1CTL1_RPTNSSEL_1                         ((uint32_t)0x04000000U)
#define DMA_CH1CTL1_LLPSEL_POS                         (27U)
#define DMA_CH1CTL1_LLPSEL                             ((uint32_t)0x08000000U)
#define DMA_CH1CTL1_SINC_POS                           (28U)
#define DMA_CH1CTL1_SINC                               ((uint32_t)0x30000000U)
#define DMA_CH1CTL1_SINC_0                             ((uint32_t)0x10000000U)
#define DMA_CH1CTL1_SINC_1                             ((uint32_t)0x20000000U)
#define DMA_CH1CTL1_DINC_POS                           (30U)
#define DMA_CH1CTL1_DINC                               ((uint32_t)0xC0000000U)
#define DMA_CH1CTL1_DINC_0                             ((uint32_t)0x40000000U)
#define DMA_CH1CTL1_DINC_1                             ((uint32_t)0x80000000U)

/*  Bit definition for DMA_SAR2 register  */
#define DMA_SAR2                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for DMA_DAR2 register  */
#define DMA_DAR2                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for DMA_CH2CTL0 register  */
#define DMA_CH2CTL0_BLKSIZE_POS                        (0U)
#define DMA_CH2CTL0_BLKSIZE                            ((uint32_t)0x000000FFU)
#define DMA_CH2CTL0_BLKSIZE_0                          ((uint32_t)0x00000001U)
#define DMA_CH2CTL0_BLKSIZE_1                          ((uint32_t)0x00000002U)
#define DMA_CH2CTL0_BLKSIZE_2                          ((uint32_t)0x00000004U)
#define DMA_CH2CTL0_BLKSIZE_3                          ((uint32_t)0x00000008U)
#define DMA_CH2CTL0_BLKSIZE_4                          ((uint32_t)0x00000010U)
#define DMA_CH2CTL0_BLKSIZE_5                          ((uint32_t)0x00000020U)
#define DMA_CH2CTL0_BLKSIZE_6                          ((uint32_t)0x00000040U)
#define DMA_CH2CTL0_BLKSIZE_7                          ((uint32_t)0x00000080U)
#define DMA_CH2CTL0_CNT_POS                            (8U)
#define DMA_CH2CTL0_CNT                                ((uint32_t)0x0003FF00U)
#define DMA_CH2CTL0_CNT_0                              ((uint32_t)0x00000100U)
#define DMA_CH2CTL0_CNT_1                              ((uint32_t)0x00000200U)
#define DMA_CH2CTL0_CNT_2                              ((uint32_t)0x00000400U)
#define DMA_CH2CTL0_CNT_3                              ((uint32_t)0x00000800U)
#define DMA_CH2CTL0_CNT_4                              ((uint32_t)0x00001000U)
#define DMA_CH2CTL0_CNT_5                              ((uint32_t)0x00002000U)
#define DMA_CH2CTL0_CNT_6                              ((uint32_t)0x00004000U)
#define DMA_CH2CTL0_CNT_7                              ((uint32_t)0x00008000U)
#define DMA_CH2CTL0_CNT_8                              ((uint32_t)0x00010000U)
#define DMA_CH2CTL0_CNT_9                              ((uint32_t)0x00020000U)
#define DMA_CH2CTL0_LLP_POS                            (18U)
#define DMA_CH2CTL0_LLP                                ((uint32_t)0x0FFC0000U)
#define DMA_CH2CTL0_LLP_0                              ((uint32_t)0x00040000U)
#define DMA_CH2CTL0_LLP_1                              ((uint32_t)0x00080000U)
#define DMA_CH2CTL0_LLP_2                              ((uint32_t)0x00100000U)
#define DMA_CH2CTL0_LLP_3                              ((uint32_t)0x00200000U)
#define DMA_CH2CTL0_LLP_4                              ((uint32_t)0x00400000U)
#define DMA_CH2CTL0_LLP_5                              ((uint32_t)0x00800000U)
#define DMA_CH2CTL0_LLP_6                              ((uint32_t)0x01000000U)
#define DMA_CH2CTL0_LLP_7                              ((uint32_t)0x02000000U)
#define DMA_CH2CTL0_LLP_8                              ((uint32_t)0x04000000U)
#define DMA_CH2CTL0_LLP_9                              ((uint32_t)0x08000000U)
#define DMA_CH2CTL0_LLPEN_POS                          (28U)
#define DMA_CH2CTL0_LLPEN                              ((uint32_t)0x10000000U)
#define DMA_CH2CTL0_LLPRUN_POS                         (29U)
#define DMA_CH2CTL0_LLPRUN                             ((uint32_t)0x20000000U)
#define DMA_CH2CTL0_HSIZE_POS                          (30U)
#define DMA_CH2CTL0_HSIZE                              ((uint32_t)0xC0000000U)
#define DMA_CH2CTL0_HSIZE_0                            ((uint32_t)0x40000000U)
#define DMA_CH2CTL0_HSIZE_1                            ((uint32_t)0x80000000U)

/*  Bit definition for DMA_CH2CTL1 register  */
#define DMA_CH2CTL1_OFFSET_POS                         (0U)
#define DMA_CH2CTL1_OFFSET                             ((uint32_t)0x0000FFFFU)
#define DMA_CH2CTL1_OFFSET_0                           ((uint32_t)0x00000001U)
#define DMA_CH2CTL1_OFFSET_1                           ((uint32_t)0x00000002U)
#define DMA_CH2CTL1_OFFSET_2                           ((uint32_t)0x00000004U)
#define DMA_CH2CTL1_OFFSET_3                           ((uint32_t)0x00000008U)
#define DMA_CH2CTL1_OFFSET_4                           ((uint32_t)0x00000010U)
#define DMA_CH2CTL1_OFFSET_5                           ((uint32_t)0x00000020U)
#define DMA_CH2CTL1_OFFSET_6                           ((uint32_t)0x00000040U)
#define DMA_CH2CTL1_OFFSET_7                           ((uint32_t)0x00000080U)
#define DMA_CH2CTL1_OFFSET_8                           ((uint32_t)0x00000100U)
#define DMA_CH2CTL1_OFFSET_9                           ((uint32_t)0x00000200U)
#define DMA_CH2CTL1_OFFSET_10                          ((uint32_t)0x00000400U)
#define DMA_CH2CTL1_OFFSET_11                          ((uint32_t)0x00000800U)
#define DMA_CH2CTL1_OFFSET_12                          ((uint32_t)0x00001000U)
#define DMA_CH2CTL1_OFFSET_13                          ((uint32_t)0x00002000U)
#define DMA_CH2CTL1_OFFSET_14                          ((uint32_t)0x00004000U)
#define DMA_CH2CTL1_OFFSET_15                          ((uint32_t)0x00008000U)
#define DMA_CH2CTL1_RPTNSCNT_POS                       (16U)
#define DMA_CH2CTL1_RPTNSCNT                           ((uint32_t)0x00FF0000U)
#define DMA_CH2CTL1_RPTNSCNT_0                         ((uint32_t)0x00010000U)
#define DMA_CH2CTL1_RPTNSCNT_1                         ((uint32_t)0x00020000U)
#define DMA_CH2CTL1_RPTNSCNT_2                         ((uint32_t)0x00040000U)
#define DMA_CH2CTL1_RPTNSCNT_3                         ((uint32_t)0x00080000U)
#define DMA_CH2CTL1_RPTNSCNT_4                         ((uint32_t)0x00100000U)
#define DMA_CH2CTL1_RPTNSCNT_5                         ((uint32_t)0x00200000U)
#define DMA_CH2CTL1_RPTNSCNT_6                         ((uint32_t)0x00400000U)
#define DMA_CH2CTL1_RPTNSCNT_7                         ((uint32_t)0x00800000U)
#define DMA_CH2CTL1_RPTNSEN_POS                        (24U)
#define DMA_CH2CTL1_RPTNSEN                            ((uint32_t)0x01000000U)
#define DMA_CH2CTL1_RPTNSSEL_POS                       (25U)
#define DMA_CH2CTL1_RPTNSSEL                           ((uint32_t)0x06000000U)
#define DMA_CH2CTL1_RPTNSSEL_0                         ((uint32_t)0x02000000U)
#define DMA_CH2CTL1_RPTNSSEL_1                         ((uint32_t)0x04000000U)
#define DMA_CH2CTL1_LLPSEL_POS                         (27U)
#define DMA_CH2CTL1_LLPSEL                             ((uint32_t)0x08000000U)
#define DMA_CH2CTL1_SINC_POS                           (28U)
#define DMA_CH2CTL1_SINC                               ((uint32_t)0x30000000U)
#define DMA_CH2CTL1_SINC_0                             ((uint32_t)0x10000000U)
#define DMA_CH2CTL1_SINC_1                             ((uint32_t)0x20000000U)
#define DMA_CH2CTL1_DINC_POS                           (30U)
#define DMA_CH2CTL1_DINC                               ((uint32_t)0xC0000000U)
#define DMA_CH2CTL1_DINC_0                             ((uint32_t)0x40000000U)
#define DMA_CH2CTL1_DINC_1                             ((uint32_t)0x80000000U)

/*  Bit definition for DMA_SAR3 register  */
#define DMA_SAR3                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for DMA_DAR3 register  */
#define DMA_DAR3                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for DMA_CH3CTL0 register  */
#define DMA_CH3CTL0_BLKSIZE_POS                        (0U)
#define DMA_CH3CTL0_BLKSIZE                            ((uint32_t)0x000000FFU)
#define DMA_CH3CTL0_BLKSIZE_0                          ((uint32_t)0x00000001U)
#define DMA_CH3CTL0_BLKSIZE_1                          ((uint32_t)0x00000002U)
#define DMA_CH3CTL0_BLKSIZE_2                          ((uint32_t)0x00000004U)
#define DMA_CH3CTL0_BLKSIZE_3                          ((uint32_t)0x00000008U)
#define DMA_CH3CTL0_BLKSIZE_4                          ((uint32_t)0x00000010U)
#define DMA_CH3CTL0_BLKSIZE_5                          ((uint32_t)0x00000020U)
#define DMA_CH3CTL0_BLKSIZE_6                          ((uint32_t)0x00000040U)
#define DMA_CH3CTL0_BLKSIZE_7                          ((uint32_t)0x00000080U)
#define DMA_CH3CTL0_CNT_POS                            (8U)
#define DMA_CH3CTL0_CNT                                ((uint32_t)0x0003FF00U)
#define DMA_CH3CTL0_CNT_0                              ((uint32_t)0x00000100U)
#define DMA_CH3CTL0_CNT_1                              ((uint32_t)0x00000200U)
#define DMA_CH3CTL0_CNT_2                              ((uint32_t)0x00000400U)
#define DMA_CH3CTL0_CNT_3                              ((uint32_t)0x00000800U)
#define DMA_CH3CTL0_CNT_4                              ((uint32_t)0x00001000U)
#define DMA_CH3CTL0_CNT_5                              ((uint32_t)0x00002000U)
#define DMA_CH3CTL0_CNT_6                              ((uint32_t)0x00004000U)
#define DMA_CH3CTL0_CNT_7                              ((uint32_t)0x00008000U)
#define DMA_CH3CTL0_CNT_8                              ((uint32_t)0x00010000U)
#define DMA_CH3CTL0_CNT_9                              ((uint32_t)0x00020000U)
#define DMA_CH3CTL0_LLP_POS                            (18U)
#define DMA_CH3CTL0_LLP                                ((uint32_t)0x0FFC0000U)
#define DMA_CH3CTL0_LLP_0                              ((uint32_t)0x00040000U)
#define DMA_CH3CTL0_LLP_1                              ((uint32_t)0x00080000U)
#define DMA_CH3CTL0_LLP_2                              ((uint32_t)0x00100000U)
#define DMA_CH3CTL0_LLP_3                              ((uint32_t)0x00200000U)
#define DMA_CH3CTL0_LLP_4                              ((uint32_t)0x00400000U)
#define DMA_CH3CTL0_LLP_5                              ((uint32_t)0x00800000U)
#define DMA_CH3CTL0_LLP_6                              ((uint32_t)0x01000000U)
#define DMA_CH3CTL0_LLP_7                              ((uint32_t)0x02000000U)
#define DMA_CH3CTL0_LLP_8                              ((uint32_t)0x04000000U)
#define DMA_CH3CTL0_LLP_9                              ((uint32_t)0x08000000U)
#define DMA_CH3CTL0_LLPEN_POS                          (28U)
#define DMA_CH3CTL0_LLPEN                              ((uint32_t)0x10000000U)
#define DMA_CH3CTL0_LLPRUN_POS                         (29U)
#define DMA_CH3CTL0_LLPRUN                             ((uint32_t)0x20000000U)
#define DMA_CH3CTL0_HSIZE_POS                          (30U)
#define DMA_CH3CTL0_HSIZE                              ((uint32_t)0xC0000000U)
#define DMA_CH3CTL0_HSIZE_0                            ((uint32_t)0x40000000U)
#define DMA_CH3CTL0_HSIZE_1                            ((uint32_t)0x80000000U)

/*  Bit definition for DMA_CH3CTL1 register  */
#define DMA_CH3CTL1_OFFSET_POS                         (0U)
#define DMA_CH3CTL1_OFFSET                             ((uint32_t)0x0000FFFFU)
#define DMA_CH3CTL1_OFFSET_0                           ((uint32_t)0x00000001U)
#define DMA_CH3CTL1_OFFSET_1                           ((uint32_t)0x00000002U)
#define DMA_CH3CTL1_OFFSET_2                           ((uint32_t)0x00000004U)
#define DMA_CH3CTL1_OFFSET_3                           ((uint32_t)0x00000008U)
#define DMA_CH3CTL1_OFFSET_4                           ((uint32_t)0x00000010U)
#define DMA_CH3CTL1_OFFSET_5                           ((uint32_t)0x00000020U)
#define DMA_CH3CTL1_OFFSET_6                           ((uint32_t)0x00000040U)
#define DMA_CH3CTL1_OFFSET_7                           ((uint32_t)0x00000080U)
#define DMA_CH3CTL1_OFFSET_8                           ((uint32_t)0x00000100U)
#define DMA_CH3CTL1_OFFSET_9                           ((uint32_t)0x00000200U)
#define DMA_CH3CTL1_OFFSET_10                          ((uint32_t)0x00000400U)
#define DMA_CH3CTL1_OFFSET_11                          ((uint32_t)0x00000800U)
#define DMA_CH3CTL1_OFFSET_12                          ((uint32_t)0x00001000U)
#define DMA_CH3CTL1_OFFSET_13                          ((uint32_t)0x00002000U)
#define DMA_CH3CTL1_OFFSET_14                          ((uint32_t)0x00004000U)
#define DMA_CH3CTL1_OFFSET_15                          ((uint32_t)0x00008000U)
#define DMA_CH3CTL1_RPTNSCNT_POS                       (16U)
#define DMA_CH3CTL1_RPTNSCNT                           ((uint32_t)0x00FF0000U)
#define DMA_CH3CTL1_RPTNSCNT_0                         ((uint32_t)0x00010000U)
#define DMA_CH3CTL1_RPTNSCNT_1                         ((uint32_t)0x00020000U)
#define DMA_CH3CTL1_RPTNSCNT_2                         ((uint32_t)0x00040000U)
#define DMA_CH3CTL1_RPTNSCNT_3                         ((uint32_t)0x00080000U)
#define DMA_CH3CTL1_RPTNSCNT_4                         ((uint32_t)0x00100000U)
#define DMA_CH3CTL1_RPTNSCNT_5                         ((uint32_t)0x00200000U)
#define DMA_CH3CTL1_RPTNSCNT_6                         ((uint32_t)0x00400000U)
#define DMA_CH3CTL1_RPTNSCNT_7                         ((uint32_t)0x00800000U)
#define DMA_CH3CTL1_RPTNSEN_POS                        (24U)
#define DMA_CH3CTL1_RPTNSEN                            ((uint32_t)0x01000000U)
#define DMA_CH3CTL1_RPTNSSEL_POS                       (25U)
#define DMA_CH3CTL1_RPTNSSEL                           ((uint32_t)0x06000000U)
#define DMA_CH3CTL1_RPTNSSEL_0                         ((uint32_t)0x02000000U)
#define DMA_CH3CTL1_RPTNSSEL_1                         ((uint32_t)0x04000000U)
#define DMA_CH3CTL1_LLPSEL_POS                         (27U)
#define DMA_CH3CTL1_LLPSEL                             ((uint32_t)0x08000000U)
#define DMA_CH3CTL1_SINC_POS                           (28U)
#define DMA_CH3CTL1_SINC                               ((uint32_t)0x30000000U)
#define DMA_CH3CTL1_SINC_0                             ((uint32_t)0x10000000U)
#define DMA_CH3CTL1_SINC_1                             ((uint32_t)0x20000000U)
#define DMA_CH3CTL1_DINC_POS                           (30U)
#define DMA_CH3CTL1_DINC                               ((uint32_t)0xC0000000U)
#define DMA_CH3CTL1_DINC_0                             ((uint32_t)0x40000000U)
#define DMA_CH3CTL1_DINC_1                             ((uint32_t)0x80000000U)


/*******************************************************************************
                Bit definition for Peripheral EFM
*******************************************************************************/
/*  Bit definition for EFM_FAPRT register  */
#define EFM_FAPRT_FAPRT_POS                            (0U)
#define EFM_FAPRT_FAPRT                                ((uint32_t)0x0000FFFFU)
#define EFM_FAPRT_FAPRT_0                              ((uint32_t)0x00000001U)
#define EFM_FAPRT_FAPRT_1                              ((uint32_t)0x00000002U)
#define EFM_FAPRT_FAPRT_2                              ((uint32_t)0x00000004U)
#define EFM_FAPRT_FAPRT_3                              ((uint32_t)0x00000008U)
#define EFM_FAPRT_FAPRT_4                              ((uint32_t)0x00000010U)
#define EFM_FAPRT_FAPRT_5                              ((uint32_t)0x00000020U)
#define EFM_FAPRT_FAPRT_6                              ((uint32_t)0x00000040U)
#define EFM_FAPRT_FAPRT_7                              ((uint32_t)0x00000080U)
#define EFM_FAPRT_FAPRT_8                              ((uint32_t)0x00000100U)
#define EFM_FAPRT_FAPRT_9                              ((uint32_t)0x00000200U)
#define EFM_FAPRT_FAPRT_10                             ((uint32_t)0x00000400U)
#define EFM_FAPRT_FAPRT_11                             ((uint32_t)0x00000800U)
#define EFM_FAPRT_FAPRT_12                             ((uint32_t)0x00001000U)
#define EFM_FAPRT_FAPRT_13                             ((uint32_t)0x00002000U)
#define EFM_FAPRT_FAPRT_14                             ((uint32_t)0x00004000U)
#define EFM_FAPRT_FAPRT_15                             ((uint32_t)0x00008000U)

/*  Bit definition for EFM_FSTP register  */
#define EFM_FSTP_FSTP_POS                              (0U)
#define EFM_FSTP_FSTP                                  ((uint32_t)0x00000001U)

/*  Bit definition for EFM_FRMC register  */
#define EFM_FRMC_FLWT_POS                              (0U)
#define EFM_FRMC_FLWT                                  ((uint32_t)0x00000007U)
#define EFM_FRMC_FLWT_0                                ((uint32_t)0x00000001U)
#define EFM_FRMC_FLWT_1                                ((uint32_t)0x00000002U)
#define EFM_FRMC_FLWT_2                                ((uint32_t)0x00000004U)
#define EFM_FRMC_ICHE_POS                              (16U)
#define EFM_FRMC_ICHE                                  ((uint32_t)0x00010000U)
#define EFM_FRMC_DCHE_POS                              (17U)
#define EFM_FRMC_DCHE                                  ((uint32_t)0x00020000U)
#define EFM_FRMC_CRST_POS                              (19U)
#define EFM_FRMC_CRST                                  ((uint32_t)0x00080000U)

/*  Bit definition for EFM_FWMC register  */
#define EFM_FWMC_PEMODE_POS                            (0U)
#define EFM_FWMC_PEMODE                                ((uint32_t)0x00000001U)
#define EFM_FWMC_PEMOD_POS                             (4U)
#define EFM_FWMC_PEMOD                                 ((uint32_t)0x00000070U)
#define EFM_FWMC_PEMOD_0                               ((uint32_t)0x00000010U)
#define EFM_FWMC_PEMOD_1                               ((uint32_t)0x00000020U)
#define EFM_FWMC_PEMOD_2                               ((uint32_t)0x00000040U)
#define EFM_FWMC_BUSHLDCTL_POS                         (8U)
#define EFM_FWMC_BUSHLDCTL                             ((uint32_t)0x00000100U)

/*  Bit definition for EFM_FSR register  */
#define EFM_FSR_PEWERR_POS                             (0U)
#define EFM_FSR_PEWERR                                 ((uint32_t)0x00000001U)
#define EFM_FSR_PEPRTERR_POS                           (1U)
#define EFM_FSR_PEPRTERR                               ((uint32_t)0x00000002U)
#define EFM_FSR_PGMISMTCH_POS                          (3U)
#define EFM_FSR_PGMISMTCH                              ((uint32_t)0x00000008U)
#define EFM_FSR_OPTEND_POS                             (4U)
#define EFM_FSR_OPTEND                                 ((uint32_t)0x00000010U)
#define EFM_FSR_RDCOLERR_POS                           (5U)
#define EFM_FSR_RDCOLERR                               ((uint32_t)0x00000020U)
#define EFM_FSR_RDY_POS                                (8U)
#define EFM_FSR_RDY                                    ((uint32_t)0x00000100U)

/*  Bit definition for EFM_FSCLR register  */
#define EFM_FSCLR_PEWERRCLR_POS                        (0U)
#define EFM_FSCLR_PEWERRCLR                            ((uint32_t)0x00000001U)
#define EFM_FSCLR_PEPRTERRCLR_POS                      (1U)
#define EFM_FSCLR_PEPRTERRCLR                          ((uint32_t)0x00000002U)
#define EFM_FSCLR_PGMISMTCHCLR_POS                     (3U)
#define EFM_FSCLR_PGMISMTCHCLR                         ((uint32_t)0x00000008U)
#define EFM_FSCLR_OPTENDCLR_POS                        (4U)
#define EFM_FSCLR_OPTENDCLR                            ((uint32_t)0x00000010U)
#define EFM_FSCLR_RDCOLERRCLR_POS                      (5U)
#define EFM_FSCLR_RDCOLERRCLR                          ((uint32_t)0x00000020U)

/*  Bit definition for EFM_FITE register  */
#define EFM_FITE_PEERRITE_POS                          (0U)
#define EFM_FITE_PEERRITE                              ((uint32_t)0x00000001U)
#define EFM_FITE_OPTENDITE_POS                         (1U)
#define EFM_FITE_OPTENDITE                             ((uint32_t)0x00000002U)
#define EFM_FITE_RDCOLERRITE_POS                       (2U)
#define EFM_FITE_RDCOLERRITE                           ((uint32_t)0x00000004U)

/*  Bit definition for EFM_FPMTSW register  */
#define EFM_FPMTSW_FPMTSW_POS                          (0U)
#define EFM_FPMTSW_FPMTSW                              ((uint32_t)0x0001FFFFU)
#define EFM_FPMTSW_FPMTSW_0                            ((uint32_t)0x00000001U)
#define EFM_FPMTSW_FPMTSW_1                            ((uint32_t)0x00000002U)
#define EFM_FPMTSW_FPMTSW_2                            ((uint32_t)0x00000004U)
#define EFM_FPMTSW_FPMTSW_3                            ((uint32_t)0x00000008U)
#define EFM_FPMTSW_FPMTSW_4                            ((uint32_t)0x00000010U)
#define EFM_FPMTSW_FPMTSW_5                            ((uint32_t)0x00000020U)
#define EFM_FPMTSW_FPMTSW_6                            ((uint32_t)0x00000040U)
#define EFM_FPMTSW_FPMTSW_7                            ((uint32_t)0x00000080U)
#define EFM_FPMTSW_FPMTSW_8                            ((uint32_t)0x00000100U)
#define EFM_FPMTSW_FPMTSW_9                            ((uint32_t)0x00000200U)
#define EFM_FPMTSW_FPMTSW_10                           ((uint32_t)0x00000400U)
#define EFM_FPMTSW_FPMTSW_11                           ((uint32_t)0x00000800U)
#define EFM_FPMTSW_FPMTSW_12                           ((uint32_t)0x00001000U)
#define EFM_FPMTSW_FPMTSW_13                           ((uint32_t)0x00002000U)
#define EFM_FPMTSW_FPMTSW_14                           ((uint32_t)0x00004000U)
#define EFM_FPMTSW_FPMTSW_15                           ((uint32_t)0x00008000U)
#define EFM_FPMTSW_FPMTSW_16                           ((uint32_t)0x00010000U)

/*  Bit definition for EFM_FPMTEW register  */
#define EFM_FPMTEW_FPMTEW_POS                          (0U)
#define EFM_FPMTEW_FPMTEW                              ((uint32_t)0x0001FFFFU)
#define EFM_FPMTEW_FPMTEW_0                            ((uint32_t)0x00000001U)
#define EFM_FPMTEW_FPMTEW_1                            ((uint32_t)0x00000002U)
#define EFM_FPMTEW_FPMTEW_2                            ((uint32_t)0x00000004U)
#define EFM_FPMTEW_FPMTEW_3                            ((uint32_t)0x00000008U)
#define EFM_FPMTEW_FPMTEW_4                            ((uint32_t)0x00000010U)
#define EFM_FPMTEW_FPMTEW_5                            ((uint32_t)0x00000020U)
#define EFM_FPMTEW_FPMTEW_6                            ((uint32_t)0x00000040U)
#define EFM_FPMTEW_FPMTEW_7                            ((uint32_t)0x00000080U)
#define EFM_FPMTEW_FPMTEW_8                            ((uint32_t)0x00000100U)
#define EFM_FPMTEW_FPMTEW_9                            ((uint32_t)0x00000200U)
#define EFM_FPMTEW_FPMTEW_10                           ((uint32_t)0x00000400U)
#define EFM_FPMTEW_FPMTEW_11                           ((uint32_t)0x00000800U)
#define EFM_FPMTEW_FPMTEW_12                           ((uint32_t)0x00001000U)
#define EFM_FPMTEW_FPMTEW_13                           ((uint32_t)0x00002000U)
#define EFM_FPMTEW_FPMTEW_14                           ((uint32_t)0x00004000U)
#define EFM_FPMTEW_FPMTEW_15                           ((uint32_t)0x00008000U)
#define EFM_FPMTEW_FPMTEW_16                           ((uint32_t)0x00010000U)

/*  Bit definition for EFM_UQID0 register  */
#define EFM_UQID0                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for EFM_UQID1 register  */
#define EFM_UQID1                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for EFM_UQID2 register  */
#define EFM_UQID2                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for EFM_UQID3 register  */
#define EFM_UQID3                                      ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for EFM_HRCCFGR register  */
#define EFM_HRCCFGR_HRCFREQS_POS                       (0U)
#define EFM_HRCCFGR_HRCFREQS                           ((uint8_t)0x0FU)
#define EFM_HRCCFGR_HRCFREQS_0                         ((uint8_t)0x01U)
#define EFM_HRCCFGR_HRCFREQS_1                         ((uint8_t)0x02U)
#define EFM_HRCCFGR_HRCFREQS_2                         ((uint8_t)0x04U)
#define EFM_HRCCFGR_HRCFREQS_3                         ((uint8_t)0x08U)


/*******************************************************************************
                Bit definition for Peripheral EMB
*******************************************************************************/
/*  Bit definition for EMB_CTL0 register  */
#define EMB_CTL0_CMPEN_POS                             (0U)
#define EMB_CTL0_CMPEN                                 ((uint32_t)0x00000007U)
#define EMB_CTL0_CMPEN_0                               ((uint32_t)0x00000001U)
#define EMB_CTL0_CMPEN_1                               ((uint32_t)0x00000002U)
#define EMB_CTL0_CMPEN_2                               ((uint32_t)0x00000004U)
#define EMB_CTL0_OSCSTPEN_POS                          (4U)
#define EMB_CTL0_OSCSTPEN                              ((uint32_t)0x00000010U)
#define EMB_CTL0_PWMSEN0_POS                           (5U)
#define EMB_CTL0_PWMSEN0                               ((uint32_t)0x00000020U)
#define EMB_CTL0_PWMSEN1_POS                           (6U)
#define EMB_CTL0_PWMSEN1                               ((uint32_t)0x00000040U)
#define EMB_CTL0_PWMSEN2_POS                           (7U)
#define EMB_CTL0_PWMSEN2                               ((uint32_t)0x00000080U)
#define EMB_CTL0_PORTINEN0_POS                         (8U)
#define EMB_CTL0_PORTINEN0                             ((uint32_t)0x00000100U)
#define EMB_CTL0_PORTINEN1_POS                         (9U)
#define EMB_CTL0_PORTINEN1                             ((uint32_t)0x00000200U)
#define EMB_CTL0_PORTINEN2_POS                         (10U)
#define EMB_CTL0_PORTINEN2                             ((uint32_t)0x00000400U)
#define EMB_CTL0_NFSEL0_POS                            (16U)
#define EMB_CTL0_NFSEL0                                ((uint32_t)0x00030000U)
#define EMB_CTL0_NFSEL0_0                              ((uint32_t)0x00010000U)
#define EMB_CTL0_NFSEL0_1                              ((uint32_t)0x00020000U)
#define EMB_CTL0_NFEN0_POS                             (18U)
#define EMB_CTL0_NFEN0                                 ((uint32_t)0x00040000U)
#define EMB_CTL0_INVSEL0_POS                           (19U)
#define EMB_CTL0_INVSEL0                               ((uint32_t)0x00080000U)
#define EMB_CTL0_NFSEL1_POS                            (20U)
#define EMB_CTL0_NFSEL1                                ((uint32_t)0x00300000U)
#define EMB_CTL0_NFSEL1_0                              ((uint32_t)0x00100000U)
#define EMB_CTL0_NFSEL1_1                              ((uint32_t)0x00200000U)
#define EMB_CTL0_NFEN1_POS                             (22U)
#define EMB_CTL0_NFEN1                                 ((uint32_t)0x00400000U)
#define EMB_CTL0_INVSEL1_POS                           (23U)
#define EMB_CTL0_INVSEL1                               ((uint32_t)0x00800000U)
#define EMB_CTL0_NFSEL2_POS                            (24U)
#define EMB_CTL0_NFSEL2                                ((uint32_t)0x03000000U)
#define EMB_CTL0_NFSEL2_0                              ((uint32_t)0x01000000U)
#define EMB_CTL0_NFSEL2_1                              ((uint32_t)0x02000000U)
#define EMB_CTL0_NFEN2_POS                             (26U)
#define EMB_CTL0_NFEN2                                 ((uint32_t)0x04000000U)
#define EMB_CTL0_INVSEL2_POS                           (27U)
#define EMB_CTL0_INVSEL2                               ((uint32_t)0x08000000U)

/*  Bit definition for EMB_PWMLV0 register  */
#define EMB_PWMLV0_PWMLV_POS                           (0U)
#define EMB_PWMLV0_PWMLV                               ((uint32_t)0x00000007U)
#define EMB_PWMLV0_PWMLV_0                             ((uint32_t)0x00000001U)
#define EMB_PWMLV0_PWMLV_1                             ((uint32_t)0x00000002U)
#define EMB_PWMLV0_PWMLV_2                             ((uint32_t)0x00000004U)

/*  Bit definition for EMB_SOE0 register  */
#define EMB_SOE0_SOE_POS                               (0U)
#define EMB_SOE0_SOE                                   ((uint32_t)0x00000001U)

/*  Bit definition for EMB_STAT0 register  */
#define EMB_STAT0_PWMSF_POS                            (0U)
#define EMB_STAT0_PWMSF                                ((uint32_t)0x00000001U)
#define EMB_STAT0_CMPF_POS                             (1U)
#define EMB_STAT0_CMPF                                 ((uint32_t)0x00000002U)
#define EMB_STAT0_OSF_POS                              (2U)
#define EMB_STAT0_OSF                                  ((uint32_t)0x00000004U)
#define EMB_STAT0_PWMST_POS                            (3U)
#define EMB_STAT0_PWMST                                ((uint32_t)0x00000008U)
#define EMB_STAT0_PORTINF0_POS                         (8U)
#define EMB_STAT0_PORTINF0                             ((uint32_t)0x00000100U)
#define EMB_STAT0_PORTINF1_POS                         (9U)
#define EMB_STAT0_PORTINF1                             ((uint32_t)0x00000200U)
#define EMB_STAT0_PORTINF2_POS                         (10U)
#define EMB_STAT0_PORTINF2                             ((uint32_t)0x00000400U)
#define EMB_STAT0_PORTINST0_POS                        (12U)
#define EMB_STAT0_PORTINST0                            ((uint32_t)0x00001000U)
#define EMB_STAT0_PORTINST1_POS                        (13U)
#define EMB_STAT0_PORTINST1                            ((uint32_t)0x00002000U)
#define EMB_STAT0_PORTINST2_POS                        (14U)
#define EMB_STAT0_PORTINST2                            ((uint32_t)0x00004000U)

/*  Bit definition for EMB_STATCLR0 register  */
#define EMB_STATCLR0_PWMSFCLR_POS                      (0U)
#define EMB_STATCLR0_PWMSFCLR                          ((uint32_t)0x00000001U)
#define EMB_STATCLR0_CMPFCLR_POS                       (1U)
#define EMB_STATCLR0_CMPFCLR                           ((uint32_t)0x00000002U)
#define EMB_STATCLR0_OSFCLR_POS                        (2U)
#define EMB_STATCLR0_OSFCLR                            ((uint32_t)0x00000004U)
#define EMB_STATCLR0_PORTINFCLR0_POS                   (8U)
#define EMB_STATCLR0_PORTINFCLR0                       ((uint32_t)0x00000100U)
#define EMB_STATCLR0_PORTINFCLR1_POS                   (9U)
#define EMB_STATCLR0_PORTINFCLR1                       ((uint32_t)0x00000200U)
#define EMB_STATCLR0_PORTINFCLR2_POS                   (10U)
#define EMB_STATCLR0_PORTINFCLR2                       ((uint32_t)0x00000400U)

/*  Bit definition for EMB_INTEN0 register  */
#define EMB_INTEN0_PWMINTEN_POS                        (0U)
#define EMB_INTEN0_PWMINTEN                            ((uint32_t)0x00000001U)
#define EMB_INTEN0_CMPINTEN_POS                        (1U)
#define EMB_INTEN0_CMPINTEN                            ((uint32_t)0x00000002U)
#define EMB_INTEN0_OSINTEN_POS                         (2U)
#define EMB_INTEN0_OSINTEN                             ((uint32_t)0x00000004U)
#define EMB_INTEN0_PORTININTEN0_POS                    (8U)
#define EMB_INTEN0_PORTININTEN0                        ((uint32_t)0x00000100U)
#define EMB_INTEN0_PORTININTEN1_POS                    (9U)
#define EMB_INTEN0_PORTININTEN1                        ((uint32_t)0x00000200U)
#define EMB_INTEN0_PORTININTEN2_POS                    (10U)
#define EMB_INTEN0_PORTININTEN2                        ((uint32_t)0x00000400U)

/*  Bit definition for EMB_CTL1 register  */
#define EMB_CTL1_CMPEN_POS                             (0U)
#define EMB_CTL1_CMPEN                                 ((uint32_t)0x00000007U)
#define EMB_CTL1_CMPEN_0                               ((uint32_t)0x00000001U)
#define EMB_CTL1_CMPEN_1                               ((uint32_t)0x00000002U)
#define EMB_CTL1_CMPEN_2                               ((uint32_t)0x00000004U)
#define EMB_CTL1_OSCSTPEN_POS                          (4U)
#define EMB_CTL1_OSCSTPEN                              ((uint32_t)0x00000010U)
#define EMB_CTL1_PORTINEN0_POS                         (8U)
#define EMB_CTL1_PORTINEN0                             ((uint32_t)0x00000100U)
#define EMB_CTL1_PORTINEN1_POS                         (9U)
#define EMB_CTL1_PORTINEN1                             ((uint32_t)0x00000200U)
#define EMB_CTL1_PORTINEN2_POS                         (10U)
#define EMB_CTL1_PORTINEN2                             ((uint32_t)0x00000400U)
#define EMB_CTL1_NFSEL0_POS                            (16U)
#define EMB_CTL1_NFSEL0                                ((uint32_t)0x00030000U)
#define EMB_CTL1_NFSEL0_0                              ((uint32_t)0x00010000U)
#define EMB_CTL1_NFSEL0_1                              ((uint32_t)0x00020000U)
#define EMB_CTL1_NFEN0_POS                             (18U)
#define EMB_CTL1_NFEN0                                 ((uint32_t)0x00040000U)
#define EMB_CTL1_INVSEL0_POS                           (19U)
#define EMB_CTL1_INVSEL0                               ((uint32_t)0x00080000U)
#define EMB_CTL1_NFSEL1_POS                            (20U)
#define EMB_CTL1_NFSEL1                                ((uint32_t)0x00300000U)
#define EMB_CTL1_NFSEL1_0                              ((uint32_t)0x00100000U)
#define EMB_CTL1_NFSEL1_1                              ((uint32_t)0x00200000U)
#define EMB_CTL1_NFEN1_POS                             (22U)
#define EMB_CTL1_NFEN1                                 ((uint32_t)0x00400000U)
#define EMB_CTL1_INVSEL1_POS                           (23U)
#define EMB_CTL1_INVSEL1                               ((uint32_t)0x00800000U)
#define EMB_CTL1_NFSEL2_POS                            (24U)
#define EMB_CTL1_NFSEL2                                ((uint32_t)0x03000000U)
#define EMB_CTL1_NFSEL2_0                              ((uint32_t)0x01000000U)
#define EMB_CTL1_NFSEL2_1                              ((uint32_t)0x02000000U)
#define EMB_CTL1_NFEN2_POS                             (26U)
#define EMB_CTL1_NFEN2                                 ((uint32_t)0x04000000U)
#define EMB_CTL1_INVSEL2_POS                           (27U)
#define EMB_CTL1_INVSEL2                               ((uint32_t)0x08000000U)

/*  Bit definition for EMB_SOE1 register  */
#define EMB_SOE1_SOE_POS                               (0U)
#define EMB_SOE1_SOE                                   ((uint32_t)0x00000001U)

/*  Bit definition for EMB_STAT1 register  */
#define EMB_STAT1_CMPF_POS                             (1U)
#define EMB_STAT1_CMPF                                 ((uint32_t)0x00000002U)
#define EMB_STAT1_OSF_POS                              (2U)
#define EMB_STAT1_OSF                                  ((uint32_t)0x00000004U)
#define EMB_STAT1_PORTINF0_POS                         (8U)
#define EMB_STAT1_PORTINF0                             ((uint32_t)0x00000100U)
#define EMB_STAT1_PORTINF1_POS                         (9U)
#define EMB_STAT1_PORTINF1                             ((uint32_t)0x00000200U)
#define EMB_STAT1_PORTINF2_POS                         (10U)
#define EMB_STAT1_PORTINF2                             ((uint32_t)0x00000400U)
#define EMB_STAT1_PORTINST0_POS                        (12U)
#define EMB_STAT1_PORTINST0                            ((uint32_t)0x00001000U)
#define EMB_STAT1_PORTINST1_POS                        (13U)
#define EMB_STAT1_PORTINST1                            ((uint32_t)0x00002000U)
#define EMB_STAT1_PORTINST2_POS                        (14U)
#define EMB_STAT1_PORTINST2                            ((uint32_t)0x00004000U)

/*  Bit definition for EMB_STATCLR1 register  */
#define EMB_STATCLR1_CMPFCLR_POS                       (1U)
#define EMB_STATCLR1_CMPFCLR                           ((uint32_t)0x00000002U)
#define EMB_STATCLR1_OSFCLR_POS                        (2U)
#define EMB_STATCLR1_OSFCLR                            ((uint32_t)0x00000004U)
#define EMB_STATCLR1_PORTINFCLR0_POS                   (8U)
#define EMB_STATCLR1_PORTINFCLR0                       ((uint32_t)0x00000100U)
#define EMB_STATCLR1_PORTINFCLR1_POS                   (9U)
#define EMB_STATCLR1_PORTINFCLR1                       ((uint32_t)0x00000200U)
#define EMB_STATCLR1_PORTINFCLR2_POS                   (10U)
#define EMB_STATCLR1_PORTINFCLR2                       ((uint32_t)0x00000400U)

/*  Bit definition for EMB_INTEN1 register  */
#define EMB_INTEN1_CMPINTEN_POS                        (1U)
#define EMB_INTEN1_CMPINTEN                            ((uint32_t)0x00000002U)
#define EMB_INTEN1_OSINTEN_POS                         (2U)
#define EMB_INTEN1_OSINTEN                             ((uint32_t)0x00000004U)
#define EMB_INTEN1_PORTININTEN0_POS                    (8U)
#define EMB_INTEN1_PORTININTEN0                        ((uint32_t)0x00000100U)
#define EMB_INTEN1_PORTININTEN1_POS                    (9U)
#define EMB_INTEN1_PORTININTEN1                        ((uint32_t)0x00000200U)
#define EMB_INTEN1_PORTININTEN2_POS                    (10U)
#define EMB_INTEN1_PORTININTEN2                        ((uint32_t)0x00000400U)

/*  Bit definition for EMB_ECSR register  */
#define EMB_ECSR_EMBVAL_POS                            (0U)
#define EMB_ECSR_EMBVAL                                ((uint32_t)0x00000003U)
#define EMB_ECSR_EMBVAL_0                              ((uint32_t)0x00000001U)
#define EMB_ECSR_EMBVAL_1                              ((uint32_t)0x00000002U)


/*******************************************************************************
                Bit definition for Peripheral FCM
*******************************************************************************/
/*  Bit definition for FCM_LVR register  */
#define FCM_LVR_LVR_POS                                (0U)
#define FCM_LVR_LVR                                    ((uint32_t)0x0000FFFFU)
#define FCM_LVR_LVR_0                                  ((uint32_t)0x00000001U)
#define FCM_LVR_LVR_1                                  ((uint32_t)0x00000002U)
#define FCM_LVR_LVR_2                                  ((uint32_t)0x00000004U)
#define FCM_LVR_LVR_3                                  ((uint32_t)0x00000008U)
#define FCM_LVR_LVR_4                                  ((uint32_t)0x00000010U)
#define FCM_LVR_LVR_5                                  ((uint32_t)0x00000020U)
#define FCM_LVR_LVR_6                                  ((uint32_t)0x00000040U)
#define FCM_LVR_LVR_7                                  ((uint32_t)0x00000080U)
#define FCM_LVR_LVR_8                                  ((uint32_t)0x00000100U)
#define FCM_LVR_LVR_9                                  ((uint32_t)0x00000200U)
#define FCM_LVR_LVR_10                                 ((uint32_t)0x00000400U)
#define FCM_LVR_LVR_11                                 ((uint32_t)0x00000800U)
#define FCM_LVR_LVR_12                                 ((uint32_t)0x00001000U)
#define FCM_LVR_LVR_13                                 ((uint32_t)0x00002000U)
#define FCM_LVR_LVR_14                                 ((uint32_t)0x00004000U)
#define FCM_LVR_LVR_15                                 ((uint32_t)0x00008000U)

/*  Bit definition for FCM_UVR register  */
#define FCM_UVR_UVR_POS                                (0U)
#define FCM_UVR_UVR                                    ((uint32_t)0x0000FFFFU)
#define FCM_UVR_UVR_0                                  ((uint32_t)0x00000001U)
#define FCM_UVR_UVR_1                                  ((uint32_t)0x00000002U)
#define FCM_UVR_UVR_2                                  ((uint32_t)0x00000004U)
#define FCM_UVR_UVR_3                                  ((uint32_t)0x00000008U)
#define FCM_UVR_UVR_4                                  ((uint32_t)0x00000010U)
#define FCM_UVR_UVR_5                                  ((uint32_t)0x00000020U)
#define FCM_UVR_UVR_6                                  ((uint32_t)0x00000040U)
#define FCM_UVR_UVR_7                                  ((uint32_t)0x00000080U)
#define FCM_UVR_UVR_8                                  ((uint32_t)0x00000100U)
#define FCM_UVR_UVR_9                                  ((uint32_t)0x00000200U)
#define FCM_UVR_UVR_10                                 ((uint32_t)0x00000400U)
#define FCM_UVR_UVR_11                                 ((uint32_t)0x00000800U)
#define FCM_UVR_UVR_12                                 ((uint32_t)0x00001000U)
#define FCM_UVR_UVR_13                                 ((uint32_t)0x00002000U)
#define FCM_UVR_UVR_14                                 ((uint32_t)0x00004000U)
#define FCM_UVR_UVR_15                                 ((uint32_t)0x00008000U)

/*  Bit definition for FCM_CNTR register  */
#define FCM_CNTR_CNTR_POS                              (0U)
#define FCM_CNTR_CNTR                                  ((uint32_t)0x0000FFFFU)
#define FCM_CNTR_CNTR_0                                ((uint32_t)0x00000001U)
#define FCM_CNTR_CNTR_1                                ((uint32_t)0x00000002U)
#define FCM_CNTR_CNTR_2                                ((uint32_t)0x00000004U)
#define FCM_CNTR_CNTR_3                                ((uint32_t)0x00000008U)
#define FCM_CNTR_CNTR_4                                ((uint32_t)0x00000010U)
#define FCM_CNTR_CNTR_5                                ((uint32_t)0x00000020U)
#define FCM_CNTR_CNTR_6                                ((uint32_t)0x00000040U)
#define FCM_CNTR_CNTR_7                                ((uint32_t)0x00000080U)
#define FCM_CNTR_CNTR_8                                ((uint32_t)0x00000100U)
#define FCM_CNTR_CNTR_9                                ((uint32_t)0x00000200U)
#define FCM_CNTR_CNTR_10                               ((uint32_t)0x00000400U)
#define FCM_CNTR_CNTR_11                               ((uint32_t)0x00000800U)
#define FCM_CNTR_CNTR_12                               ((uint32_t)0x00001000U)
#define FCM_CNTR_CNTR_13                               ((uint32_t)0x00002000U)
#define FCM_CNTR_CNTR_14                               ((uint32_t)0x00004000U)
#define FCM_CNTR_CNTR_15                               ((uint32_t)0x00008000U)

/*  Bit definition for FCM_STR register  */
#define FCM_STR_START_POS                              (0U)
#define FCM_STR_START                                  ((uint32_t)0x00000001U)

/*  Bit definition for FCM_MCCR register  */
#define FCM_MCCR_MDIVS_POS                             (0U)
#define FCM_MCCR_MDIVS                                 ((uint32_t)0x00000003U)
#define FCM_MCCR_MDIVS_0                               ((uint32_t)0x00000001U)
#define FCM_MCCR_MDIVS_1                               ((uint32_t)0x00000002U)
#define FCM_MCCR_MCKS_POS                              (4U)
#define FCM_MCCR_MCKS                                  ((uint32_t)0x000000F0U)
#define FCM_MCCR_MCKS_0                                ((uint32_t)0x00000010U)
#define FCM_MCCR_MCKS_1                                ((uint32_t)0x00000020U)
#define FCM_MCCR_MCKS_2                                ((uint32_t)0x00000040U)
#define FCM_MCCR_MCKS_3                                ((uint32_t)0x00000080U)

/*  Bit definition for FCM_RCCR register  */
#define FCM_RCCR_RDIVS_POS                             (0U)
#define FCM_RCCR_RDIVS                                 ((uint32_t)0x00000003U)
#define FCM_RCCR_RDIVS_0                               ((uint32_t)0x00000001U)
#define FCM_RCCR_RDIVS_1                               ((uint32_t)0x00000002U)
#define FCM_RCCR_RCKS_POS                              (3U)
#define FCM_RCCR_RCKS                                  ((uint32_t)0x00000078U)
#define FCM_RCCR_RCKS_0                                ((uint32_t)0x00000008U)
#define FCM_RCCR_RCKS_1                                ((uint32_t)0x00000010U)
#define FCM_RCCR_RCKS_2                                ((uint32_t)0x00000020U)
#define FCM_RCCR_RCKS_3                                ((uint32_t)0x00000040U)
#define FCM_RCCR_INEXS_POS                             (7U)
#define FCM_RCCR_INEXS                                 ((uint32_t)0x00000080U)
#define FCM_RCCR_DNFS_POS                              (8U)
#define FCM_RCCR_DNFS                                  ((uint32_t)0x00000300U)
#define FCM_RCCR_DNFS_0                                ((uint32_t)0x00000100U)
#define FCM_RCCR_DNFS_1                                ((uint32_t)0x00000200U)
#define FCM_RCCR_EDGES_POS                             (12U)
#define FCM_RCCR_EDGES                                 ((uint32_t)0x00003000U)
#define FCM_RCCR_EDGES_0                               ((uint32_t)0x00001000U)
#define FCM_RCCR_EDGES_1                               ((uint32_t)0x00002000U)
#define FCM_RCCR_EXREFE_POS                            (15U)
#define FCM_RCCR_EXREFE                                ((uint32_t)0x00008000U)

/*  Bit definition for FCM_RIER register  */
#define FCM_RIER_ERRIE_POS                             (0U)
#define FCM_RIER_ERRIE                                 ((uint32_t)0x00000001U)
#define FCM_RIER_MENDIE_POS                            (1U)
#define FCM_RIER_MENDIE                                ((uint32_t)0x00000002U)
#define FCM_RIER_OVFIE_POS                             (2U)
#define FCM_RIER_OVFIE                                 ((uint32_t)0x00000004U)
#define FCM_RIER_ERRINTRS_POS                          (4U)
#define FCM_RIER_ERRINTRS                              ((uint32_t)0x00000010U)
#define FCM_RIER_ERRE_POS                              (7U)
#define FCM_RIER_ERRE                                  ((uint32_t)0x00000080U)

/*  Bit definition for FCM_SR register  */
#define FCM_SR_ERRF_POS                                (0U)
#define FCM_SR_ERRF                                    ((uint32_t)0x00000001U)
#define FCM_SR_MENDF_POS                               (1U)
#define FCM_SR_MENDF                                   ((uint32_t)0x00000002U)
#define FCM_SR_OVF_POS                                 (2U)
#define FCM_SR_OVF                                     ((uint32_t)0x00000004U)

/*  Bit definition for FCM_CLR register  */
#define FCM_CLR_ERRFCLR_POS                            (0U)
#define FCM_CLR_ERRFCLR                                ((uint32_t)0x00000001U)
#define FCM_CLR_MENDFCLR_POS                           (1U)
#define FCM_CLR_MENDFCLR                               ((uint32_t)0x00000002U)
#define FCM_CLR_OVFCLR_POS                             (2U)
#define FCM_CLR_OVFCLR                                 ((uint32_t)0x00000004U)


/*******************************************************************************
                Bit definition for Peripheral GPIO
*******************************************************************************/
/*  Bit definition for GPIO_PIDR register  */
#define GPIO_PIDR_PIN0_POS                             (0U)
#define GPIO_PIDR_PIN0                                 ((uint8_t)0x01U)
#define GPIO_PIDR_PIN1_POS                             (1U)
#define GPIO_PIDR_PIN1                                 ((uint8_t)0x02U)
#define GPIO_PIDR_PIN2_POS                             (2U)
#define GPIO_PIDR_PIN2                                 ((uint8_t)0x04U)
#define GPIO_PIDR_PIN3_POS                             (3U)
#define GPIO_PIDR_PIN3                                 ((uint8_t)0x08U)
#define GPIO_PIDR_PIN4_POS                             (4U)
#define GPIO_PIDR_PIN4                                 ((uint8_t)0x10U)
#define GPIO_PIDR_PIN5_POS                             (5U)
#define GPIO_PIDR_PIN5                                 ((uint8_t)0x20U)
#define GPIO_PIDR_PIN6_POS                             (6U)
#define GPIO_PIDR_PIN6                                 ((uint8_t)0x40U)
#define GPIO_PIDR_PIN7_POS                             (7U)
#define GPIO_PIDR_PIN7                                 ((uint8_t)0x80U)

/*  Bit definition for GPIO_PODR register  */
#define GPIO_PODR_POUT0_POS                            (0U)
#define GPIO_PODR_POUT0                                ((uint8_t)0x01U)
#define GPIO_PODR_POUT1_POS                            (1U)
#define GPIO_PODR_POUT1                                ((uint8_t)0x02U)
#define GPIO_PODR_POUT2_POS                            (2U)
#define GPIO_PODR_POUT2                                ((uint8_t)0x04U)
#define GPIO_PODR_POUT3_POS                            (3U)
#define GPIO_PODR_POUT3                                ((uint8_t)0x08U)
#define GPIO_PODR_POUT4_POS                            (4U)
#define GPIO_PODR_POUT4                                ((uint8_t)0x10U)
#define GPIO_PODR_POUT5_POS                            (5U)
#define GPIO_PODR_POUT5                                ((uint8_t)0x20U)
#define GPIO_PODR_POUT6_POS                            (6U)
#define GPIO_PODR_POUT6                                ((uint8_t)0x40U)
#define GPIO_PODR_POUT7_POS                            (7U)
#define GPIO_PODR_POUT7                                ((uint8_t)0x80U)

/*  Bit definition for GPIO_POER register  */
#define GPIO_POER_POUTE0_POS                           (0U)
#define GPIO_POER_POUTE0                               ((uint8_t)0x01U)
#define GPIO_POER_POUTE1_POS                           (1U)
#define GPIO_POER_POUTE1                               ((uint8_t)0x02U)
#define GPIO_POER_POUTE2_POS                           (2U)
#define GPIO_POER_POUTE2                               ((uint8_t)0x04U)
#define GPIO_POER_POUTE3_POS                           (3U)
#define GPIO_POER_POUTE3                               ((uint8_t)0x08U)
#define GPIO_POER_POUTE4_POS                           (4U)
#define GPIO_POER_POUTE4                               ((uint8_t)0x10U)
#define GPIO_POER_POUTE5_POS                           (5U)
#define GPIO_POER_POUTE5                               ((uint8_t)0x20U)
#define GPIO_POER_POUTE6_POS                           (6U)
#define GPIO_POER_POUTE6                               ((uint8_t)0x40U)
#define GPIO_POER_POUTE7_POS                           (7U)
#define GPIO_POER_POUTE7                               ((uint8_t)0x80U)

/*  Bit definition for GPIO_POSR register  */
#define GPIO_POSR_POS0_POS                             (0U)
#define GPIO_POSR_POS0                                 ((uint8_t)0x01U)
#define GPIO_POSR_POS1_POS                             (1U)
#define GPIO_POSR_POS1                                 ((uint8_t)0x02U)
#define GPIO_POSR_POS2_POS                             (2U)
#define GPIO_POSR_POS2                                 ((uint8_t)0x04U)
#define GPIO_POSR_POS3_POS                             (3U)
#define GPIO_POSR_POS3                                 ((uint8_t)0x08U)
#define GPIO_POSR_POS4_POS                             (4U)
#define GPIO_POSR_POS4                                 ((uint8_t)0x10U)
#define GPIO_POSR_POS5_POS                             (5U)
#define GPIO_POSR_POS5                                 ((uint8_t)0x20U)
#define GPIO_POSR_POS6_POS                             (6U)
#define GPIO_POSR_POS6                                 ((uint8_t)0x40U)
#define GPIO_POSR_POS7_POS                             (7U)
#define GPIO_POSR_POS7                                 ((uint8_t)0x80U)

/*  Bit definition for GPIO_PORR register  */
#define GPIO_PORR_POR0_POS                             (0U)
#define GPIO_PORR_POR0                                 ((uint8_t)0x01U)
#define GPIO_PORR_POR1_POS                             (1U)
#define GPIO_PORR_POR1                                 ((uint8_t)0x02U)
#define GPIO_PORR_POR2_POS                             (2U)
#define GPIO_PORR_POR2                                 ((uint8_t)0x04U)
#define GPIO_PORR_POR3_POS                             (3U)
#define GPIO_PORR_POR3                                 ((uint8_t)0x08U)
#define GPIO_PORR_POR4_POS                             (4U)
#define GPIO_PORR_POR4                                 ((uint8_t)0x10U)
#define GPIO_PORR_POR5_POS                             (5U)
#define GPIO_PORR_POR5                                 ((uint8_t)0x20U)
#define GPIO_PORR_POR6_POS                             (6U)
#define GPIO_PORR_POR6                                 ((uint8_t)0x40U)
#define GPIO_PORR_POR7_POS                             (7U)
#define GPIO_PORR_POR7                                 ((uint8_t)0x80U)

/*  Bit definition for GPIO_POTR register  */
#define GPIO_POTR_POT0_POS                             (0U)
#define GPIO_POTR_POT0                                 ((uint8_t)0x01U)
#define GPIO_POTR_POT1_POS                             (1U)
#define GPIO_POTR_POT1                                 ((uint8_t)0x02U)
#define GPIO_POTR_POT2_POS                             (2U)
#define GPIO_POTR_POT2                                 ((uint8_t)0x04U)
#define GPIO_POTR_POT3_POS                             (3U)
#define GPIO_POTR_POT3                                 ((uint8_t)0x08U)
#define GPIO_POTR_POT4_POS                             (4U)
#define GPIO_POTR_POT4                                 ((uint8_t)0x10U)
#define GPIO_POTR_POT5_POS                             (5U)
#define GPIO_POTR_POT5                                 ((uint8_t)0x20U)
#define GPIO_POTR_POT6_POS                             (6U)
#define GPIO_POTR_POT6                                 ((uint8_t)0x40U)
#define GPIO_POTR_POT7_POS                             (7U)
#define GPIO_POTR_POT7                                 ((uint8_t)0x80U)

/*  Bit definition for GPIO_PSPCR register  */
#define GPIO_PSPCR_SPFE_POS                            (0U)
#define GPIO_PSPCR_SPFE                                ((uint16_t)0x001FU)
#define GPIO_PSPCR_SPFE_0                              ((uint16_t)0x0001U)
#define GPIO_PSPCR_SPFE_1                              ((uint16_t)0x0002U)
#define GPIO_PSPCR_SPFE_2                              ((uint16_t)0x0004U)
#define GPIO_PSPCR_SPFE_3                              ((uint16_t)0x0008U)
#define GPIO_PSPCR_SPFE_4                              ((uint16_t)0x0010U)

/*  Bit definition for GPIO_PCCR register  */
#define GPIO_PCCR_RDWT_POS                             (14U)
#define GPIO_PCCR_RDWT                                 ((uint16_t)0xC000U)
#define GPIO_PCCR_RDWT_0                               ((uint16_t)0x4000U)
#define GPIO_PCCR_RDWT_1                               ((uint16_t)0x8000U)

/*  Bit definition for GPIO_PINAER register  */
#define GPIO_PINAER_PINAE0_POS                         (0U)
#define GPIO_PINAER_PINAE0                             ((uint16_t)0x0001U)
#define GPIO_PINAER_PINAE1_POS                         (1U)
#define GPIO_PINAER_PINAE1                             ((uint16_t)0x0002U)
#define GPIO_PINAER_PINAE2_POS                         (2U)
#define GPIO_PINAER_PINAE2                             ((uint16_t)0x0004U)
#define GPIO_PINAER_PINAE3_POS                         (3U)
#define GPIO_PINAER_PINAE3                             ((uint16_t)0x0008U)
#define GPIO_PINAER_PINAE4_POS                         (4U)
#define GPIO_PINAER_PINAE4                             ((uint16_t)0x0010U)
#define GPIO_PINAER_PINAE5_POS                         (5U)
#define GPIO_PINAER_PINAE5                             ((uint16_t)0x0020U)
#define GPIO_PINAER_PINAE7_POS                         (7U)
#define GPIO_PINAER_PINAE7                             ((uint16_t)0x0080U)
#define GPIO_PINAER_PINAE9_POS                         (9U)
#define GPIO_PINAER_PINAE9                             ((uint16_t)0x0200U)
#define GPIO_PINAER_PINAE10_POS                        (10U)
#define GPIO_PINAER_PINAE10                            ((uint16_t)0x0400U)
#define GPIO_PINAER_PINAE11_POS                        (11U)
#define GPIO_PINAER_PINAE11                            ((uint16_t)0x0800U)
#define GPIO_PINAER_PINAE13_POS                        (13U)
#define GPIO_PINAER_PINAE13                            ((uint16_t)0x2000U)
#define GPIO_PINAER_PINAE14_POS                        (14U)
#define GPIO_PINAER_PINAE14                            ((uint16_t)0x4000U)

/*  Bit definition for GPIO_PWPR register  */
#define GPIO_PWPR_WE_POS                               (0U)
#define GPIO_PWPR_WE                                   ((uint16_t)0x0001U)
#define GPIO_PWPR_WP_POS                               (8U)
#define GPIO_PWPR_WP                                   ((uint16_t)0xFF00U)
#define GPIO_PWPR_WP_0                                 ((uint16_t)0x0100U)
#define GPIO_PWPR_WP_1                                 ((uint16_t)0x0200U)
#define GPIO_PWPR_WP_2                                 ((uint16_t)0x0400U)
#define GPIO_PWPR_WP_3                                 ((uint16_t)0x0800U)
#define GPIO_PWPR_WP_4                                 ((uint16_t)0x1000U)
#define GPIO_PWPR_WP_5                                 ((uint16_t)0x2000U)
#define GPIO_PWPR_WP_6                                 ((uint16_t)0x4000U)
#define GPIO_PWPR_WP_7                                 ((uint16_t)0x8000U)

/*  Bit definition for GPIO_PCR register  */
#define GPIO_PCR_POUT_POS                              (0U)
#define GPIO_PCR_POUT                                  ((uint16_t)0x0001U)
#define GPIO_PCR_POUTE_POS                             (1U)
#define GPIO_PCR_POUTE                                 ((uint16_t)0x0002U)
#define GPIO_PCR_NOD_POS                               (2U)
#define GPIO_PCR_NOD                                   ((uint16_t)0x0004U)
#define GPIO_PCR_DRV_POS                               (4U)
#define GPIO_PCR_DRV                                   ((uint16_t)0x0010U)
#define GPIO_PCR_LTE_POS                               (5U)
#define GPIO_PCR_LTE                                   ((uint16_t)0x0020U)
#define GPIO_PCR_PUU_POS                               (6U)
#define GPIO_PCR_PUU                                   ((uint16_t)0x0040U)
#define GPIO_PCR_PIN_POS                               (8U)
#define GPIO_PCR_PIN                                   ((uint16_t)0x0100U)
#define GPIO_PCR_INVE_POS                              (9U)
#define GPIO_PCR_INVE                                  ((uint16_t)0x0200U)
#define GPIO_PCR_CINSEL_POS                            (10U)
#define GPIO_PCR_CINSEL                                ((uint16_t)0x0400U)
#define GPIO_PCR_INTE_POS                              (11U)
#define GPIO_PCR_INTE                                  ((uint16_t)0x0800U)

/*  Bit definition for GPIO_PFSR register  */
#define GPIO_PFSR_FSEL_POS                             (0U)
#define GPIO_PFSR_FSEL                                 ((uint16_t)0x0007U)
#define GPIO_PFSR_FSEL_0                               ((uint16_t)0x0001U)
#define GPIO_PFSR_FSEL_1                               ((uint16_t)0x0002U)
#define GPIO_PFSR_FSEL_2                               ((uint16_t)0x0004U)


/*******************************************************************************
                Bit definition for Peripheral I2C
*******************************************************************************/
/*  Bit definition for I2C_CR1 register  */
#define I2C_CR1_PE_POS                                 (0U)
#define I2C_CR1_PE                                     ((uint32_t)0x00000001U)
#define I2C_CR1_SMBUS_POS                              (1U)
#define I2C_CR1_SMBUS                                  ((uint32_t)0x00000002U)
#define I2C_CR1_SMBALRTEN_POS                          (2U)
#define I2C_CR1_SMBALRTEN                              ((uint32_t)0x00000004U)
#define I2C_CR1_SMBDEFAULTEN_POS                       (3U)
#define I2C_CR1_SMBDEFAULTEN                           ((uint32_t)0x00000008U)
#define I2C_CR1_SMBHOSTEN_POS                          (4U)
#define I2C_CR1_SMBHOSTEN                              ((uint32_t)0x00000010U)
#define I2C_CR1_FACKEN_POS                             (5U)
#define I2C_CR1_FACKEN                                 ((uint32_t)0x00000020U)
#define I2C_CR1_GCEN_POS                               (6U)
#define I2C_CR1_GCEN                                   ((uint32_t)0x00000040U)
#define I2C_CR1_RESTART_POS                            (7U)
#define I2C_CR1_RESTART                                ((uint32_t)0x00000080U)
#define I2C_CR1_START_POS                              (8U)
#define I2C_CR1_START                                  ((uint32_t)0x00000100U)
#define I2C_CR1_STOP_POS                               (9U)
#define I2C_CR1_STOP                                   ((uint32_t)0x00000200U)
#define I2C_CR1_ACK_POS                                (10U)
#define I2C_CR1_ACK                                    ((uint32_t)0x00000400U)
#define I2C_CR1_SWRST_POS                              (15U)
#define I2C_CR1_SWRST                                  ((uint32_t)0x00008000U)

/*  Bit definition for I2C_CR2 register  */
#define I2C_CR2_STARTIE_POS                            (0U)
#define I2C_CR2_STARTIE                                ((uint32_t)0x00000001U)
#define I2C_CR2_SLADDR0IE_POS                          (1U)
#define I2C_CR2_SLADDR0IE                              ((uint32_t)0x00000002U)
#define I2C_CR2_SLADDR1IE_POS                          (2U)
#define I2C_CR2_SLADDR1IE                              ((uint32_t)0x00000004U)
#define I2C_CR2_TENDIE_POS                             (3U)
#define I2C_CR2_TENDIE                                 ((uint32_t)0x00000008U)
#define I2C_CR2_STOPIE_POS                             (4U)
#define I2C_CR2_STOPIE                                 ((uint32_t)0x00000010U)
#define I2C_CR2_RFULLIE_POS                            (6U)
#define I2C_CR2_RFULLIE                                ((uint32_t)0x00000040U)
#define I2C_CR2_TEMPTYIE_POS                           (7U)
#define I2C_CR2_TEMPTYIE                               ((uint32_t)0x00000080U)
#define I2C_CR2_ARLOIE_POS                             (9U)
#define I2C_CR2_ARLOIE                                 ((uint32_t)0x00000200U)
#define I2C_CR2_NACKIE_POS                             (12U)
#define I2C_CR2_NACKIE                                 ((uint32_t)0x00001000U)
#define I2C_CR2_GENCALLIE_POS                          (20U)
#define I2C_CR2_GENCALLIE                              ((uint32_t)0x00100000U)
#define I2C_CR2_SMBDEFAULTIE_POS                       (21U)
#define I2C_CR2_SMBDEFAULTIE                           ((uint32_t)0x00200000U)
#define I2C_CR2_SMBHOSTIE_POS                          (22U)
#define I2C_CR2_SMBHOSTIE                              ((uint32_t)0x00400000U)
#define I2C_CR2_SMBALRTIE_POS                          (23U)
#define I2C_CR2_SMBALRTIE                              ((uint32_t)0x00800000U)

/*  Bit definition for I2C_SLR0 register  */
#define I2C_SLR0_SLADDR0_POS                           (0U)
#define I2C_SLR0_SLADDR0                               ((uint32_t)0x000003FFU)
#define I2C_SLR0_SLADDR0_0                             ((uint32_t)0x00000001U)
#define I2C_SLR0_SLADDR0_1                             ((uint32_t)0x00000002U)
#define I2C_SLR0_SLADDR0_2                             ((uint32_t)0x00000004U)
#define I2C_SLR0_SLADDR0_3                             ((uint32_t)0x00000008U)
#define I2C_SLR0_SLADDR0_4                             ((uint32_t)0x00000010U)
#define I2C_SLR0_SLADDR0_5                             ((uint32_t)0x00000020U)
#define I2C_SLR0_SLADDR0_6                             ((uint32_t)0x00000040U)
#define I2C_SLR0_SLADDR0_7                             ((uint32_t)0x00000080U)
#define I2C_SLR0_SLADDR0_8                             ((uint32_t)0x00000100U)
#define I2C_SLR0_SLADDR0_9                             ((uint32_t)0x00000200U)
#define I2C_SLR0_SLADDR0EN_POS                         (12U)
#define I2C_SLR0_SLADDR0EN                             ((uint32_t)0x00001000U)
#define I2C_SLR0_ADDRMOD0_POS                          (15U)
#define I2C_SLR0_ADDRMOD0                              ((uint32_t)0x00008000U)

/*  Bit definition for I2C_SLR1 register  */
#define I2C_SLR1_SLADDR1_POS                           (0U)
#define I2C_SLR1_SLADDR1                               ((uint32_t)0x000003FFU)
#define I2C_SLR1_SLADDR1_0                             ((uint32_t)0x00000001U)
#define I2C_SLR1_SLADDR1_1                             ((uint32_t)0x00000002U)
#define I2C_SLR1_SLADDR1_2                             ((uint32_t)0x00000004U)
#define I2C_SLR1_SLADDR1_3                             ((uint32_t)0x00000008U)
#define I2C_SLR1_SLADDR1_4                             ((uint32_t)0x00000010U)
#define I2C_SLR1_SLADDR1_5                             ((uint32_t)0x00000020U)
#define I2C_SLR1_SLADDR1_6                             ((uint32_t)0x00000040U)
#define I2C_SLR1_SLADDR1_7                             ((uint32_t)0x00000080U)
#define I2C_SLR1_SLADDR1_8                             ((uint32_t)0x00000100U)
#define I2C_SLR1_SLADDR1_9                             ((uint32_t)0x00000200U)
#define I2C_SLR1_SLADDR1EN_POS                         (12U)
#define I2C_SLR1_SLADDR1EN                             ((uint32_t)0x00001000U)
#define I2C_SLR1_ADDRMOD1_POS                          (15U)
#define I2C_SLR1_ADDRMOD1                              ((uint32_t)0x00008000U)

/*  Bit definition for I2C_SR register  */
#define I2C_SR_STARTF_POS                              (0U)
#define I2C_SR_STARTF                                  ((uint32_t)0x00000001U)
#define I2C_SR_SLADDR0F_POS                            (1U)
#define I2C_SR_SLADDR0F                                ((uint32_t)0x00000002U)
#define I2C_SR_SLADDR1F_POS                            (2U)
#define I2C_SR_SLADDR1F                                ((uint32_t)0x00000004U)
#define I2C_SR_TENDF_POS                               (3U)
#define I2C_SR_TENDF                                   ((uint32_t)0x00000008U)
#define I2C_SR_STOPF_POS                               (4U)
#define I2C_SR_STOPF                                   ((uint32_t)0x00000010U)
#define I2C_SR_RFULLF_POS                              (6U)
#define I2C_SR_RFULLF                                  ((uint32_t)0x00000040U)
#define I2C_SR_TEMPTYF_POS                             (7U)
#define I2C_SR_TEMPTYF                                 ((uint32_t)0x00000080U)
#define I2C_SR_ARLOF_POS                               (9U)
#define I2C_SR_ARLOF                                   ((uint32_t)0x00000200U)
#define I2C_SR_ACKRF_POS                               (10U)
#define I2C_SR_ACKRF                                   ((uint32_t)0x00000400U)
#define I2C_SR_NACKF_POS                               (12U)
#define I2C_SR_NACKF                                   ((uint32_t)0x00001000U)
#define I2C_SR_MSL_POS                                 (16U)
#define I2C_SR_MSL                                     ((uint32_t)0x00010000U)
#define I2C_SR_BUSY_POS                                (17U)
#define I2C_SR_BUSY                                    ((uint32_t)0x00020000U)
#define I2C_SR_TRA_POS                                 (18U)
#define I2C_SR_TRA                                     ((uint32_t)0x00040000U)
#define I2C_SR_GENCALLF_POS                            (20U)
#define I2C_SR_GENCALLF                                ((uint32_t)0x00100000U)
#define I2C_SR_SMBDEFAULTF_POS                         (21U)
#define I2C_SR_SMBDEFAULTF                             ((uint32_t)0x00200000U)
#define I2C_SR_SMBHOSTF_POS                            (22U)
#define I2C_SR_SMBHOSTF                                ((uint32_t)0x00400000U)
#define I2C_SR_SMBALRTF_POS                            (23U)
#define I2C_SR_SMBALRTF                                ((uint32_t)0x00800000U)

/*  Bit definition for I2C_CLR register  */
#define I2C_CLR_STARTFCLR_POS                          (0U)
#define I2C_CLR_STARTFCLR                              ((uint32_t)0x00000001U)
#define I2C_CLR_SLADDR0FCLR_POS                        (1U)
#define I2C_CLR_SLADDR0FCLR                            ((uint32_t)0x00000002U)
#define I2C_CLR_SLADDR1FCLR_POS                        (2U)
#define I2C_CLR_SLADDR1FCLR                            ((uint32_t)0x00000004U)
#define I2C_CLR_TENDFCLR_POS                           (3U)
#define I2C_CLR_TENDFCLR                               ((uint32_t)0x00000008U)
#define I2C_CLR_STOPFCLR_POS                           (4U)
#define I2C_CLR_STOPFCLR                               ((uint32_t)0x00000010U)
#define I2C_CLR_RFULLFCLR_POS                          (6U)
#define I2C_CLR_RFULLFCLR                              ((uint32_t)0x00000040U)
#define I2C_CLR_TEMPTYFCLR_POS                         (7U)
#define I2C_CLR_TEMPTYFCLR                             ((uint32_t)0x00000080U)
#define I2C_CLR_ARLOFCLR_POS                           (9U)
#define I2C_CLR_ARLOFCLR                               ((uint32_t)0x00000200U)
#define I2C_CLR_NACKFCLR_POS                           (12U)
#define I2C_CLR_NACKFCLR                               ((uint32_t)0x00001000U)
#define I2C_CLR_GENCALLFCLR_POS                        (20U)
#define I2C_CLR_GENCALLFCLR                            ((uint32_t)0x00100000U)
#define I2C_CLR_SMBDEFAULTF_POS                        (21U)
#define I2C_CLR_SMBDEFAULTF                            ((uint32_t)0x00200000U)
#define I2C_CLR_SMBHOSTFCL_POS                         (22U)
#define I2C_CLR_SMBHOSTFCL                             ((uint32_t)0x00400000U)
#define I2C_CLR_SMBALRTFCLR_POS                        (23U)
#define I2C_CLR_SMBALRTFCLR                            ((uint32_t)0x00800000U)

/*  Bit definition for I2C_DTR register  */
#define I2C_DTR_DT_POS                                 (0U)
#define I2C_DTR_DT                                     ((uint32_t)0x000000FFU)
#define I2C_DTR_DT_0                                   ((uint32_t)0x00000001U)
#define I2C_DTR_DT_1                                   ((uint32_t)0x00000002U)
#define I2C_DTR_DT_2                                   ((uint32_t)0x00000004U)
#define I2C_DTR_DT_3                                   ((uint32_t)0x00000008U)
#define I2C_DTR_DT_4                                   ((uint32_t)0x00000010U)
#define I2C_DTR_DT_5                                   ((uint32_t)0x00000020U)
#define I2C_DTR_DT_6                                   ((uint32_t)0x00000040U)
#define I2C_DTR_DT_7                                   ((uint32_t)0x00000080U)

/*  Bit definition for I2C_DRR register  */
#define I2C_DRR_DR_POS                                 (0U)
#define I2C_DRR_DR                                     ((uint32_t)0x000000FFU)
#define I2C_DRR_DR_0                                   ((uint32_t)0x00000001U)
#define I2C_DRR_DR_1                                   ((uint32_t)0x00000002U)
#define I2C_DRR_DR_2                                   ((uint32_t)0x00000004U)
#define I2C_DRR_DR_3                                   ((uint32_t)0x00000008U)
#define I2C_DRR_DR_4                                   ((uint32_t)0x00000010U)
#define I2C_DRR_DR_5                                   ((uint32_t)0x00000020U)
#define I2C_DRR_DR_6                                   ((uint32_t)0x00000040U)
#define I2C_DRR_DR_7                                   ((uint32_t)0x00000080U)

/*  Bit definition for I2C_CCR register  */
#define I2C_CCR_SLOWW_POS                              (0U)
#define I2C_CCR_SLOWW                                  ((uint32_t)0x0000001FU)
#define I2C_CCR_SLOWW_0                                ((uint32_t)0x00000001U)
#define I2C_CCR_SLOWW_1                                ((uint32_t)0x00000002U)
#define I2C_CCR_SLOWW_2                                ((uint32_t)0x00000004U)
#define I2C_CCR_SLOWW_3                                ((uint32_t)0x00000008U)
#define I2C_CCR_SLOWW_4                                ((uint32_t)0x00000010U)
#define I2C_CCR_SHIGHW_POS                             (8U)
#define I2C_CCR_SHIGHW                                 ((uint32_t)0x00001F00U)
#define I2C_CCR_SHIGHW_0                               ((uint32_t)0x00000100U)
#define I2C_CCR_SHIGHW_1                               ((uint32_t)0x00000200U)
#define I2C_CCR_SHIGHW_2                               ((uint32_t)0x00000400U)
#define I2C_CCR_SHIGHW_3                               ((uint32_t)0x00000800U)
#define I2C_CCR_SHIGHW_4                               ((uint32_t)0x00001000U)
#define I2C_CCR_CKDIV_POS                              (16U)
#define I2C_CCR_CKDIV                                  ((uint32_t)0x00070000U)
#define I2C_CCR_CKDIV_0                                ((uint32_t)0x00010000U)
#define I2C_CCR_CKDIV_1                                ((uint32_t)0x00020000U)
#define I2C_CCR_CKDIV_2                                ((uint32_t)0x00040000U)
#define I2C_CCR_FMPE_POS                               (23U)
#define I2C_CCR_FMPE                                   ((uint32_t)0x00800000U)

/*  Bit definition for I2C_FLTR register  */
#define I2C_FLTR_DNF_POS                               (0U)
#define I2C_FLTR_DNF                                   ((uint32_t)0x00000003U)
#define I2C_FLTR_DNF_0                                 ((uint32_t)0x00000001U)
#define I2C_FLTR_DNF_1                                 ((uint32_t)0x00000002U)
#define I2C_FLTR_DNFEN_POS                             (4U)
#define I2C_FLTR_DNFEN                                 ((uint32_t)0x00000010U)
#define I2C_FLTR_ANFEN_POS                             (5U)
#define I2C_FLTR_ANFEN                                 ((uint32_t)0x00000020U)


/*******************************************************************************
                Bit definition for Peripheral ICG
*******************************************************************************/
/*  Bit definition for ICG_ICG0 register  */
#define ICG_ICG0_SWDTAUTST_POS                         (0U)
#define ICG_ICG0_SWDTAUTST                             ((uint32_t)0x00000001U)
#define ICG_ICG0_SWDTITS_POS                           (1U)
#define ICG_ICG0_SWDTITS                               ((uint32_t)0x00000002U)
#define ICG_ICG0_SWDTPERI_POS                          (2U)
#define ICG_ICG0_SWDTPERI                              ((uint32_t)0x0000000CU)
#define ICG_ICG0_SWDTPERI_0                            ((uint32_t)0x00000004U)
#define ICG_ICG0_SWDTPERI_1                            ((uint32_t)0x00000008U)
#define ICG_ICG0_SWDTCKS_POS                           (4U)
#define ICG_ICG0_SWDTCKS                               ((uint32_t)0x000000F0U)
#define ICG_ICG0_SWDTCKS_0                             ((uint32_t)0x00000010U)
#define ICG_ICG0_SWDTCKS_1                             ((uint32_t)0x00000020U)
#define ICG_ICG0_SWDTCKS_2                             ((uint32_t)0x00000040U)
#define ICG_ICG0_SWDTCKS_3                             ((uint32_t)0x00000080U)
#define ICG_ICG0_SWDTWDPT_POS                          (8U)
#define ICG_ICG0_SWDTWDPT                              ((uint32_t)0x00000F00U)
#define ICG_ICG0_SWDTWDPT_0                            ((uint32_t)0x00000100U)
#define ICG_ICG0_SWDTWDPT_1                            ((uint32_t)0x00000200U)
#define ICG_ICG0_SWDTWDPT_2                            ((uint32_t)0x00000400U)
#define ICG_ICG0_SWDTWDPT_3                            ((uint32_t)0x00000800U)
#define ICG_ICG0_SWDTSLPOFF_POS                        (12U)
#define ICG_ICG0_SWDTSLPOFF                            ((uint32_t)0x00001000U)
#define ICG_ICG0_HRCREQS_POS                           (16U)
#define ICG_ICG0_HRCREQS                               ((uint32_t)0x000F0000U)
#define ICG_ICG0_HRCREQS_0                             ((uint32_t)0x00010000U)
#define ICG_ICG0_HRCREQS_1                             ((uint32_t)0x00020000U)
#define ICG_ICG0_HRCREQS_2                             ((uint32_t)0x00040000U)
#define ICG_ICG0_HRCREQS_3                             ((uint32_t)0x00080000U)
#define ICG_ICG0_HRCSTOP_POS                           (20U)
#define ICG_ICG0_HRCSTOP                               ((uint32_t)0x00100000U)
#define ICG_ICG0_NMIFCLK_POS                           (26U)
#define ICG_ICG0_NMIFCLK                               ((uint32_t)0x0C000000U)
#define ICG_ICG0_NMIFCLK_0                             ((uint32_t)0x04000000U)
#define ICG_ICG0_NMIFCLK_1                             ((uint32_t)0x08000000U)
#define ICG_ICG0_NMIFEN_POS                            (28U)
#define ICG_ICG0_NMIFEN                                ((uint32_t)0x10000000U)
#define ICG_ICG0_NMITRG_POS                            (29U)
#define ICG_ICG0_NMITRG                                ((uint32_t)0x20000000U)
#define ICG_ICG0_NMIEN_POS                             (30U)
#define ICG_ICG0_NMIEN                                 ((uint32_t)0x40000000U)
#define ICG_ICG0_NMIICGNE_POS                          (31U)
#define ICG_ICG0_NMIICGNE                              ((uint32_t)0x80000000U)

/*  Bit definition for ICG_ICG1 register  */
#define ICG_ICG1_LKUPDIS_POS                           (8U)
#define ICG_ICG1_LKUPDIS                               ((uint32_t)0x00000100U)
#define ICG_ICG1_LVD0LVL_POS                           (12U)
#define ICG_ICG1_LVD0LVL                               ((uint32_t)0x00007000U)
#define ICG_ICG1_LVD0LVL_0                             ((uint32_t)0x00001000U)
#define ICG_ICG1_LVD0LVL_1                             ((uint32_t)0x00002000U)
#define ICG_ICG1_LVD0LVL_2                             ((uint32_t)0x00004000U)
#define ICG_ICG1_LVDDIS_POS                            (15U)
#define ICG_ICG1_LVDDIS                                ((uint32_t)0x00008000U)

/*  Bit definition for ICG_ICG2 register  */
#define ICG_ICG2                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for ICG_ICG3 register  */
#define ICG_ICG3                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for ICG_ICG4 register  */
#define ICG_ICG4                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for ICG_ICG5 register  */
#define ICG_ICG5                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for ICG_ICG6 register  */
#define ICG_ICG6                                       ((uint32_t)0xFFFFFFFFU)

/*  Bit definition for ICG_ICG7 register  */
#define ICG_ICG7_WDTAUTST_POS                          (0U)
#define ICG_ICG7_WDTAUTST                              ((uint32_t)0x00000001U)
#define ICG_ICG7_WDTITS_POS                            (1U)
#define ICG_ICG7_WDTITS                                ((uint32_t)0x00000002U)
#define ICG_ICG7_WDTPERI_POS                           (2U)
#define ICG_ICG7_WDTPERI                               ((uint32_t)0x0000000CU)
#define ICG_ICG7_WDTPERI_0                             ((uint32_t)0x00000004U)
#define ICG_ICG7_WDTPERI_1                             ((uint32_t)0x00000008U)
#define ICG_ICG7_WDTCKS_POS                            (4U)
#define ICG_ICG7_WDTCKS                                ((uint32_t)0x000000F0U)
#define ICG_ICG7_WDTCKS_0                              ((uint32_t)0x00000010U)
#define ICG_ICG7_WDTCKS_1                              ((uint32_t)0x00000020U)
#define ICG_ICG7_WDTCKS_2                              ((uint32_t)0x00000040U)
#define ICG_ICG7_WDTCKS_3                              ((uint32_t)0x00000080U)
#define ICG_ICG7_WDTWDPT_POS                           (8U)
#define ICG_ICG7_WDTWDPT                               ((uint32_t)0x00000F00U)
#define ICG_ICG7_WDTWDPT_0                             ((uint32_t)0x00000100U)
#define ICG_ICG7_WDTWDPT_1                             ((uint32_t)0x00000200U)
#define ICG_ICG7_WDTWDPT_2                             ((uint32_t)0x00000400U)
#define ICG_ICG7_WDTWDPT_3                             ((uint32_t)0x00000800U)
#define ICG_ICG7_WDTSLPOFF_POS                         (12U)
#define ICG_ICG7_WDTSLPOFF                             ((uint32_t)0x00001000U)


/*******************************************************************************
                Bit definition for Peripheral INTC
*******************************************************************************/
/*  Bit definition for INTC_NMICR register  */
#define INTC_NMICR_NMITRG_POS                          (0U)
#define INTC_NMICR_NMITRG                              ((uint32_t)0x00000001U)
#define INTC_NMICR_NMIFCLK_POS                         (4U)
#define INTC_NMICR_NMIFCLK                             ((uint32_t)0x00000030U)
#define INTC_NMICR_NMIFCLK_0                           ((uint32_t)0x00000010U)
#define INTC_NMICR_NMIFCLK_1                           ((uint32_t)0x00000020U)
#define INTC_NMICR_NMIFEN_POS                          (7U)
#define INTC_NMICR_NMIFEN                              ((uint32_t)0x00000080U)
#define INTC_NMICR_NOCSEL_POS                          (12U)
#define INTC_NMICR_NOCSEL                              ((uint32_t)0x00003000U)
#define INTC_NMICR_NOCSEL_0                            ((uint32_t)0x00001000U)
#define INTC_NMICR_NOCSEL_1                            ((uint32_t)0x00002000U)
#define INTC_NMICR_NOCEN_POS                           (15U)
#define INTC_NMICR_NOCEN                               ((uint32_t)0x00008000U)

/*  Bit definition for INTC_NMIER register  */
#define INTC_NMIER_NMIENR_POS                          (0U)
#define INTC_NMIER_NMIENR                              ((uint32_t)0x00000001U)
#define INTC_NMIER_SWDTENR_POS                         (1U)
#define INTC_NMIER_SWDTENR                             ((uint32_t)0x00000002U)
#define INTC_NMIER_PVD1ENR_POS                         (2U)
#define INTC_NMIER_PVD1ENR                             ((uint32_t)0x00000004U)
#define INTC_NMIER_PVD2ENR_POS                         (3U)
#define INTC_NMIER_PVD2ENR                             ((uint32_t)0x00000008U)
#define INTC_NMIER_XTALSTPENR_POS                      (5U)
#define INTC_NMIER_XTALSTPENR                          ((uint32_t)0x00000020U)
#define INTC_NMIER_REPENR_POS                          (8U)
#define INTC_NMIER_REPENR                              ((uint32_t)0x00000100U)
#define INTC_NMIER_WDTENR_POS                          (11U)
#define INTC_NMIER_WDTENR                              ((uint32_t)0x00000800U)

/*  Bit definition for INTC_NMIFR register  */
#define INTC_NMIFR_NMIFR_POS                           (0U)
#define INTC_NMIFR_NMIFR                               ((uint32_t)0x00000001U)
#define INTC_NMIFR_SWDTFR_POS                          (1U)
#define INTC_NMIFR_SWDTFR                              ((uint32_t)0x00000002U)
#define INTC_NMIFR_PVD1FR_POS                          (2U)
#define INTC_NMIFR_PVD1FR                              ((uint32_t)0x00000004U)
#define INTC_NMIFR_PVD2FR_POS                          (3U)
#define INTC_NMIFR_PVD2FR                              ((uint32_t)0x00000008U)
#define INTC_NMIFR_XTALSTPFR_POS                       (5U)
#define INTC_NMIFR_XTALSTPFR                           ((uint32_t)0x00000020U)
#define INTC_NMIFR_REPFR_POS                           (8U)
#define INTC_NMIFR_REPFR                               ((uint32_t)0x00000100U)
#define INTC_NMIFR_WDTFR_POS                           (11U)
#define INTC_NMIFR_WDTFR                               ((uint32_t)0x00000800U)

/*  Bit definition for INTC_NMICFR register  */
#define INTC_NMICFR_NMICFR_POS                         (0U)
#define INTC_NMICFR_NMICFR                             ((uint32_t)0x00000001U)
#define INTC_NMICFR_SWDTCFR_POS                        (1U)
#define INTC_NMICFR_SWDTCFR                            ((uint32_t)0x00000002U)
#define INTC_NMICFR_PVD1CFR_POS                        (2U)
#define INTC_NMICFR_PVD1CFR                            ((uint32_t)0x00000004U)
#define INTC_NMICFR_PVD2CFR_POS                        (3U)
#define INTC_NMICFR_PVD2CFR                            ((uint32_t)0x00000008U)
#define INTC_NMICFR_XTALSTPCFR_POS                     (5U)
#define INTC_NMICFR_XTALSTPCFR                         ((uint32_t)0x00000020U)
#define INTC_NMICFR_REPCFR_POS                         (8U)
#define INTC_NMICFR_REPCFR                             ((uint32_t)0x00000100U)
#define INTC_NMICFR_WDTCFR_POS                         (11U)
#define INTC_NMICFR_WDTCFR                             ((uint32_t)0x00000800U)

/*  Bit definition for INTC_EIRQCR register  */
#define INTC_EIRQCR_EIRQTRG_POS                        (0U)
#define INTC_EIRQCR_EIRQTRG                            ((uint32_t)0x00000003U)
#define INTC_EIRQCR_EIRQTRG_0                          ((uint32_t)0x00000001U)
#define INTC_EIRQCR_EIRQTRG_1                          ((uint32_t)0x00000002U)
#define INTC_EIRQCR_EISMPCLK_POS                       (4U)
#define INTC_EIRQCR_EISMPCLK                           ((uint32_t)0x00000030U)
#define INTC_EIRQCR_EISMPCLK_0                         ((uint32_t)0x00000010U)
#define INTC_EIRQCR_EISMPCLK_1                         ((uint32_t)0x00000020U)
#define INTC_EIRQCR_EFEN_POS                           (7U)
#define INTC_EIRQCR_EFEN                               ((uint32_t)0x00000080U)
#define INTC_EIRQCR_NOCEN_POS                          (15U)
#define INTC_EIRQCR_NOCEN                              ((uint32_t)0x00008000U)

/*  Bit definition for INTC_WUPEN register  */
#define INTC_WUPEN_EIRQWUEN_POS                        (0U)
#define INTC_WUPEN_EIRQWUEN                            ((uint32_t)0x000000FFU)
#define INTC_WUPEN_EIRQWUEN_0                          ((uint32_t)0x00000001U)
#define INTC_WUPEN_EIRQWUEN_1                          ((uint32_t)0x00000002U)
#define INTC_WUPEN_EIRQWUEN_2                          ((uint32_t)0x00000004U)
#define INTC_WUPEN_EIRQWUEN_3                          ((uint32_t)0x00000008U)
#define INTC_WUPEN_EIRQWUEN_4                          ((uint32_t)0x00000010U)
#define INTC_WUPEN_EIRQWUEN_5                          ((uint32_t)0x00000020U)
#define INTC_WUPEN_EIRQWUEN_6                          ((uint32_t)0x00000040U)
#define INTC_WUPEN_EIRQWUEN_7                          ((uint32_t)0x00000080U)
#define INTC_WUPEN_SWDTWUEN_POS                        (16U)
#define INTC_WUPEN_SWDTWUEN                            ((uint32_t)0x00010000U)
#define INTC_WUPEN_PVD1WUEN_POS                        (17U)
#define INTC_WUPEN_PVD1WUEN                            ((uint32_t)0x00020000U)
#define INTC_WUPEN_PVD2WUEN_POS                        (18U)
#define INTC_WUPEN_PVD2WUEN                            ((uint32_t)0x00040000U)
#define INTC_WUPEN_CMPI0WUEN_POS                       (19U)
#define INTC_WUPEN_CMPI0WUEN                           ((uint32_t)0x00080000U)
#define INTC_WUPEN_TMR0WUEN_POS                        (23U)
#define INTC_WUPEN_TMR0WUEN                            ((uint32_t)0x00800000U)
#define INTC_WUPEN_RXWUEN_POS                          (25U)
#define INTC_WUPEN_RXWUEN                              ((uint32_t)0x02000000U)

/*  Bit definition for INTC_EIRQFR register  */
#define INTC_EIRQFR_EIRQFR_POS                         (0U)
#define INTC_EIRQFR_EIRQFR                             ((uint32_t)0x000000FFU)
#define INTC_EIRQFR_EIRQFR_0                           ((uint32_t)0x00000001U)
#define INTC_EIRQFR_EIRQFR_1                           ((uint32_t)0x00000002U)
#define INTC_EIRQFR_EIRQFR_2                           ((uint32_t)0x00000004U)
#define INTC_EIRQFR_EIRQFR_3                           ((uint32_t)0x00000008U)
#define INTC_EIRQFR_EIRQFR_4                           ((uint32_t)0x00000010U)
#define INTC_EIRQFR_EIRQFR_5                           ((uint32_t)0x00000020U)
#define INTC_EIRQFR_EIRQFR_6                           ((uint32_t)0x00000040U)
#define INTC_EIRQFR_EIRQFR_7                           ((uint32_t)0x00000080U)

/*  Bit definition for INTC_EIRQCFR register  */
#define INTC_EIRQCFR_EIRQCFR_POS                       (0U)
#define INTC_EIRQCFR_EIRQCFR                           ((uint32_t)0x000000FFU)
#define INTC_EIRQCFR_EIRQCFR_0                         ((uint32_t)0x00000001U)
#define INTC_EIRQCFR_EIRQCFR_1                         ((uint32_t)0x00000002U)
#define INTC_EIRQCFR_EIRQCFR_2                         ((uint32_t)0x00000004U)
#define INTC_EIRQCFR_EIRQCFR_3                         ((uint32_t)0x00000008U)
#define INTC_EIRQCFR_EIRQCFR_4                         ((uint32_t)0x00000010U)
#define INTC_EIRQCFR_EIRQCFR_5                         ((uint32_t)0x00000020U)
#define INTC_EIRQCFR_EIRQCFR_6                         ((uint32_t)0x00000040U)
#define INTC_EIRQCFR_EIRQCFR_7                         ((uint32_t)0x00000080U)

/*  Bit definition for INTC_SEL register  */
#define INTC_SEL_ISEL_POS                              (0U)
#define INTC_SEL_ISEL                                  ((uint32_t)0x000001FFU)
#define INTC_SEL_ISEL_0                                ((uint32_t)0x00000001U)
#define INTC_SEL_ISEL_1                                ((uint32_t)0x00000002U)
#define INTC_SEL_ISEL_2                                ((uint32_t)0x00000004U)
#define INTC_SEL_ISEL_3                                ((uint32_t)0x00000008U)
#define INTC_SEL_ISEL_4                                ((uint32_t)0x00000010U)
#define INTC_SEL_ISEL_5                                ((uint32_t)0x00000020U)
#define INTC_SEL_ISEL_6                                ((uint32_t)0x00000040U)
#define INTC_SEL_ISEL_7                                ((uint32_t)0x00000080U)
#define INTC_SEL_ISEL_8                                ((uint32_t)0x00000100U)

/*  Bit definition for INTC_SWIER register  */
#define INTC_SWIER_SWIE0_POS                           (0U)
#define INTC_SWIER_SWIE0                               ((uint32_t)0x00000001U)
#define INTC_SWIER_SWIE1_POS                           (1U)
#define INTC_SWIER_SWIE1                               ((uint32_t)0x00000002U)
#define INTC_SWIER_SWIE2_POS                           (2U)
#define INTC_SWIER_SWIE2                               ((uint32_t)0x00000004U)
#define INTC_SWIER_SWIE3_POS                           (3U)
#define INTC_SWIER_SWIE3                               ((uint32_t)0x00000008U)
#define INTC_SWIER_SWIE4_POS                           (4U)
#define INTC_SWIER_SWIE4                               ((uint32_t)0x00000010U)
#define INTC_SWIER_SWIE5_POS                           (5U)
#define INTC_SWIER_SWIE5                               ((uint32_t)0x00000020U)
#define INTC_SWIER_SWIE6_POS                           (6U)
#define INTC_SWIER_SWIE6                               ((uint32_t)0x00000040U)
#define INTC_SWIER_SWIE7_POS                           (7U)
#define INTC_SWIER_SWIE7                               ((uint32_t)0x00000080U)
#define INTC_SWIER_SWIE8_POS                           (8U)
#define INTC_SWIER_SWIE8                               ((uint32_t)0x00000100U)
#define INTC_SWIER_SWIE9_POS                           (9U)
#define INTC_SWIER_SWIE9                               ((uint32_t)0x00000200U)
#define INTC_SWIER_SWIE10_POS                          (10U)
#define INTC_SWIER_SWIE10                              ((uint32_t)0x00000400U)
#define INTC_SWIER_SWIE11_POS                          (11U)
#define INTC_SWIER_SWIE11                              ((uint32_t)0x00000800U)
#define INTC_SWIER_SWIE12_POS                          (12U)
#define INTC_SWIER_SWIE12                              ((uint32_t)0x00001000U)
#define INTC_SWIER_SWIE13_POS                          (13U)
#define INTC_SWIER_SWIE13                              ((uint32_t)0x00002000U)
#define INTC_SWIER_SWIE14_POS                          (14U)
#define INTC_SWIER_SWIE14                              ((uint32_t)0x00004000U)
#define INTC_SWIER_SWIE15_POS                          (15U)
#define INTC_SWIER_SWIE15                              ((uint32_t)0x00008000U)

/*  Bit definition for INTC_EVTER register  */
#define INTC_EVTER_EVTE0_POS                           (0U)
#define INTC_EVTER_EVTE0                               ((uint32_t)0x00000001U)
#define INTC_EVTER_EVTE1_POS                           (1U)
#define INTC_EVTER_EVTE1                               ((uint32_t)0x00000002U)
#define INTC_EVTER_EVTE2_POS                           (2U)
#define INTC_EVTER_EVTE2                               ((uint32_t)0x00000004U)
#define INTC_EVTER_EVTE3_POS                           (3U)
#define INTC_EVTER_EVTE3                               ((uint32_t)0x00000008U)
#define INTC_EVTER_EVTE4_POS                           (4U)
#define INTC_EVTER_EVTE4                               ((uint32_t)0x00000010U)
#define INTC_EVTER_EVTE5_POS                           (5U)
#define INTC_EVTER_EVTE5                               ((uint32_t)0x00000020U)
#define INTC_EVTER_EVTE6_POS                           (6U)
#define INTC_EVTER_EVTE6                               ((uint32_t)0x00000040U)
#define INTC_EVTER_EVTE7_POS                           (7U)
#define INTC_EVTER_EVTE7                               ((uint32_t)0x00000080U)
#define INTC_EVTER_EVTE8_POS                           (8U)
#define INTC_EVTER_EVTE8                               ((uint32_t)0x00000100U)
#define INTC_EVTER_EVTE9_POS                           (9U)
#define INTC_EVTER_EVTE9                               ((uint32_t)0x00000200U)
#define INTC_EVTER_EVTE10_POS                          (10U)
#define INTC_EVTER_EVTE10                              ((uint32_t)0x00000400U)
#define INTC_EVTER_EVTE11_POS                          (11U)
#define INTC_EVTER_EVTE11                              ((uint32_t)0x00000800U)
#define INTC_EVTER_EVTE12_POS                          (12U)
#define INTC_EVTER_EVTE12                              ((uint32_t)0x00001000U)
#define INTC_EVTER_EVTE13_POS                          (13U)
#define INTC_EVTER_EVTE13                              ((uint32_t)0x00002000U)
#define INTC_EVTER_EVTE14_POS                          (14U)
#define INTC_EVTER_EVTE14                              ((uint32_t)0x00004000U)
#define INTC_EVTER_EVTE15_POS                          (15U)
#define INTC_EVTER_EVTE15                              ((uint32_t)0x00008000U)

/*  Bit definition for INTC_IER register  */
#define INTC_IER_IER0_POS                              (0U)
#define INTC_IER_IER0                                  ((uint32_t)0x00000001U)
#define INTC_IER_IER1_POS                              (1U)
#define INTC_IER_IER1                                  ((uint32_t)0x00000002U)
#define INTC_IER_IER2_POS                              (2U)
#define INTC_IER_IER2                                  ((uint32_t)0x00000004U)
#define INTC_IER_IER3_POS                              (3U)
#define INTC_IER_IER3                                  ((uint32_t)0x00000008U)
#define INTC_IER_IER4_POS                              (4U)
#define INTC_IER_IER4                                  ((uint32_t)0x00000010U)
#define INTC_IER_IER5_POS                              (5U)
#define INTC_IER_IER5                                  ((uint32_t)0x00000020U)
#define INTC_IER_IER6_POS                              (6U)
#define INTC_IER_IER6                                  ((uint32_t)0x00000040U)
#define INTC_IER_IER7_POS                              (7U)
#define INTC_IER_IER7                                  ((uint32_t)0x00000080U)
#define INTC_IER_IER8_POS                              (8U)
#define INTC_IER_IER8                                  ((uint32_t)0x00000100U)
#define INTC_IER_IER9_POS                              (9U)
#define INTC_IER_IER9                                  ((uint32_t)0x00000200U)
#define INTC_IER_IER10_POS                             (10U)
#define INTC_IER_IER10                                 ((uint32_t)0x00000400U)
#define INTC_IER_IER11_POS                             (11U)
#define INTC_IER_IER11                                 ((uint32_t)0x00000800U)
#define INTC_IER_IER12_POS                             (12U)
#define INTC_IER_IER12                                 ((uint32_t)0x00001000U)
#define INTC_IER_IER13_POS                             (13U)
#define INTC_IER_IER13                                 ((uint32_t)0x00002000U)
#define INTC_IER_IER14_POS                             (14U)
#define INTC_IER_IER14                                 ((uint32_t)0x00004000U)
#define INTC_IER_IER15_POS                             (15U)
#define INTC_IER_IER15                                 ((uint32_t)0x00008000U)


/*******************************************************************************
                Bit definition for Peripheral PWC
*******************************************************************************/
/*  Bit definition for PWC_STPMCR register  */
#define PWC_STPMCR_FLNWT_POS                           (0U)
#define PWC_STPMCR_FLNWT                               ((uint8_t)0x01U)
#define PWC_STPMCR_CKSMRC_POS                          (1U)
#define PWC_STPMCR_CKSMRC                              ((uint8_t)0x02U)
#define PWC_STPMCR_HAPORDIS_POS                        (3U)
#define PWC_STPMCR_HAPORDIS                            ((uint8_t)0x08U)
#define PWC_STPMCR_STPDAS_POS                          (6U)
#define PWC_STPMCR_STPDAS                              ((uint8_t)0x40U)
#define PWC_STPMCR_STOP_POS                            (7U)
#define PWC_STPMCR_STOP                                ((uint8_t)0x80U)

/*  Bit definition for PWC_PWRC register  */
#define PWC_PWRC_PWDRV_POS                             (0U)
#define PWC_PWRC_PWDRV                                 ((uint16_t)0x003FU)
#define PWC_PWRC_PWDRV_0                               ((uint16_t)0x0001U)
#define PWC_PWRC_PWDRV_1                               ((uint16_t)0x0002U)
#define PWC_PWRC_PWDRV_2                               ((uint16_t)0x0004U)
#define PWC_PWRC_PWDRV_3                               ((uint16_t)0x0008U)
#define PWC_PWRC_PWDRV_4                               ((uint16_t)0x0010U)
#define PWC_PWRC_PWDRV_5                               ((uint16_t)0x0020U)
#define PWC_PWRC_ACTV_POS                              (6U)
#define PWC_PWRC_ACTV                                  ((uint16_t)0x0040U)
#define PWC_PWRC_DVS_POS                               (7U)
#define PWC_PWRC_DVS                                   ((uint16_t)0x0080U)
#define PWC_PWRC_VHRCE_POS                             (8U)
#define PWC_PWRC_VHRCE                                 ((uint16_t)0x0100U)
#define PWC_PWRC_VPLLE_POS                             (9U)
#define PWC_PWRC_VPLLE                                 ((uint16_t)0x0200U)
#define PWC_PWRC_HCHDTDIS_POS                          (10U)
#define PWC_PWRC_HCHDTDIS                              ((uint16_t)0x0400U)
#define PWC_PWRC_PLHDTDIS_POS                          (11U)
#define PWC_PWRC_PLHDTDIS                              ((uint16_t)0x0800U)
#define PWC_PWRC_HDTDIS_POS                            (12U)
#define PWC_PWRC_HDTDIS                                ((uint16_t)0x1000U)
#define PWC_PWRC_HRCPWRDY_POS                          (13U)
#define PWC_PWRC_HRCPWRDY                              ((uint16_t)0x2000U)
#define PWC_PWRC_PLLPWRDY_POS                          (14U)
#define PWC_PWRC_PLLPWRDY                              ((uint16_t)0x4000U)

/*  Bit definition for PWC_PWRMONR register  */
#define PWC_PWRMONR_PWMONSEL_POS                       (0U)
#define PWC_PWRMONR_PWMONSEL                           ((uint8_t)0x01U)
#define PWC_PWRMONR_PWMONE_POS                         (1U)
#define PWC_PWRMONR_PWMONE                             ((uint8_t)0x02U)

/*  Bit definition for PWC_RAMCR register  */
#define PWC_RAMCR_RPERDIS_POS                          (4U)
#define PWC_RAMCR_RPERDIS                              ((uint8_t)0x10U)
#define PWC_RAMCR_SRPEF_POS                            (5U)
#define PWC_RAMCR_SRPEF                                ((uint8_t)0x20U)
#define PWC_RAMCR_HRPEF_POS                            (6U)
#define PWC_RAMCR_HRPEF                                ((uint8_t)0x40U)
#define PWC_RAMCR_CRPEF_POS                            (7U)
#define PWC_RAMCR_CRPEF                                ((uint8_t)0x80U)

/*  Bit definition for PWC_LVDCR0 register  */
#define PWC_LVDCR0_L1IEGS_POS                          (2U)
#define PWC_LVDCR0_L1IEGS                              ((uint32_t)0x0000000CU)
#define PWC_LVDCR0_L1IEGS_0                            ((uint32_t)0x00000004U)
#define PWC_LVDCR0_L1IEGS_1                            ((uint32_t)0x00000008U)
#define PWC_LVDCR0_L1LVL_POS                           (4U)
#define PWC_LVDCR0_L1LVL                               ((uint32_t)0x000000F0U)
#define PWC_LVDCR0_L1LVL_0                             ((uint32_t)0x00000010U)
#define PWC_LVDCR0_L1LVL_1                             ((uint32_t)0x00000020U)
#define PWC_LVDCR0_L1LVL_2                             ((uint32_t)0x00000040U)
#define PWC_LVDCR0_L1LVL_3                             ((uint32_t)0x00000080U)
#define PWC_LVDCR0_L1NFS_POS                           (8U)
#define PWC_LVDCR0_L1NFS                               ((uint32_t)0x00000300U)
#define PWC_LVDCR0_L1NFS_0                             ((uint32_t)0x00000100U)
#define PWC_LVDCR0_L1NFS_1                             ((uint32_t)0x00000200U)
#define PWC_LVDCR0_L1NFDIS_POS                         (10U)
#define PWC_LVDCR0_L1NFDIS                             ((uint32_t)0x00000400U)
#define PWC_LVDCR0_L1NMIS_POS                          (11U)
#define PWC_LVDCR0_L1NMIS                              ((uint32_t)0x00000800U)
#define PWC_LVDCR0_L1IRS_POS                           (12U)
#define PWC_LVDCR0_L1IRS                               ((uint32_t)0x00001000U)
#define PWC_LVDCR0_L1IRE_POS                           (13U)
#define PWC_LVDCR0_L1IRE                               ((uint32_t)0x00002000U)
#define PWC_LVDCR0_L1CMPOE_POS                         (14U)
#define PWC_LVDCR0_L1CMPOE                             ((uint32_t)0x00004000U)
#define PWC_LVDCR0_L1EN_POS                            (15U)
#define PWC_LVDCR0_L1EN                                ((uint32_t)0x00008000U)
#define PWC_LVDCR0_EXVCCINEN_POS                       (16U)
#define PWC_LVDCR0_EXVCCINEN                           ((uint32_t)0x00010000U)
#define PWC_LVDCR0_L2IEGS_POS                          (18U)
#define PWC_LVDCR0_L2IEGS                              ((uint32_t)0x000C0000U)
#define PWC_LVDCR0_L2IEGS_0                            ((uint32_t)0x00040000U)
#define PWC_LVDCR0_L2IEGS_1                            ((uint32_t)0x00080000U)
#define PWC_LVDCR0_L2LVL_POS                           (20U)
#define PWC_LVDCR0_L2LVL                               ((uint32_t)0x00F00000U)
#define PWC_LVDCR0_L2LVL_0                             ((uint32_t)0x00100000U)
#define PWC_LVDCR0_L2LVL_1                             ((uint32_t)0x00200000U)
#define PWC_LVDCR0_L2LVL_2                             ((uint32_t)0x00400000U)
#define PWC_LVDCR0_L2LVL_3                             ((uint32_t)0x00800000U)
#define PWC_LVDCR0_L2NFS_POS                           (24U)
#define PWC_LVDCR0_L2NFS                               ((uint32_t)0x03000000U)
#define PWC_LVDCR0_L2NFS_0                             ((uint32_t)0x01000000U)
#define PWC_LVDCR0_L2NFS_1                             ((uint32_t)0x02000000U)
#define PWC_LVDCR0_L2NFDIS_POS                         (26U)
#define PWC_LVDCR0_L2NFDIS                             ((uint32_t)0x04000000U)
#define PWC_LVDCR0_L2NMIS_POS                          (27U)
#define PWC_LVDCR0_L2NMIS                              ((uint32_t)0x08000000U)
#define PWC_LVDCR0_L2IRS_POS                           (28U)
#define PWC_LVDCR0_L2IRS                               ((uint32_t)0x10000000U)
#define PWC_LVDCR0_L2IRE_POS                           (29U)
#define PWC_LVDCR0_L2IRE                               ((uint32_t)0x20000000U)
#define PWC_LVDCR0_L2CMPOE_POS                         (30U)
#define PWC_LVDCR0_L2CMPOE                             ((uint32_t)0x40000000U)
#define PWC_LVDCR0_L2EN_POS                            (31U)
#define PWC_LVDCR0_L2EN                                ((uint32_t)0x80000000U)

/*  Bit definition for PWC_LVDCSR1 register  */
#define PWC_LVDCSR1_L1MON_POS                          (0U)
#define PWC_LVDCSR1_L1MON                              ((uint8_t)0x01U)
#define PWC_LVDCSR1_L2MON_POS                          (1U)
#define PWC_LVDCSR1_L2MON                              ((uint8_t)0x02U)
#define PWC_LVDCSR1_L1DETF_POS                         (2U)
#define PWC_LVDCSR1_L1DETF                             ((uint8_t)0x04U)
#define PWC_LVDCSR1_L2DETF_POS                         (3U)
#define PWC_LVDCSR1_L2DETF                             ((uint8_t)0x08U)
#define PWC_LVDCSR1_L0MON_POS                          (4U)
#define PWC_LVDCSR1_L0MON                              ((uint8_t)0x10U)
#define PWC_LVDCSR1_L0CMPOE_POS                        (7U)
#define PWC_LVDCSR1_L0CMPOE                            ((uint8_t)0x80U)

/*  Bit definition for PWC_FPRC register  */
#define PWC_FPRC_CKRWE_POS                             (0U)
#define PWC_FPRC_CKRWE                                 ((uint16_t)0x0001U)
#define PWC_FPRC_PWRWE_POS                             (1U)
#define PWC_FPRC_PWRWE                                 ((uint16_t)0x0002U)
#define PWC_FPRC_FPRCB2_POS                            (2U)
#define PWC_FPRC_FPRCB2                                ((uint16_t)0x0004U)
#define PWC_FPRC_LVRWE_POS                             (3U)
#define PWC_FPRC_LVRWE                                 ((uint16_t)0x0008U)
#define PWC_FPRC_FPRCB4_POS                            (4U)
#define PWC_FPRC_FPRCB4                                ((uint16_t)0x0010U)
#define PWC_FPRC_FPRCB5_POS                            (5U)
#define PWC_FPRC_FPRCB5                                ((uint16_t)0x0020U)
#define PWC_FPRC_FPRCB6_POS                            (6U)
#define PWC_FPRC_FPRCB6                                ((uint16_t)0x0040U)
#define PWC_FPRC_FPRCB7_POS                            (7U)
#define PWC_FPRC_FPRCB7                                ((uint16_t)0x0080U)
#define PWC_FPRC_FPRCWE_POS                            (8U)
#define PWC_FPRC_FPRCWE                                ((uint16_t)0xFF00U)
#define PWC_FPRC_FPRCWE_0                              ((uint16_t)0x0100U)
#define PWC_FPRC_FPRCWE_1                              ((uint16_t)0x0200U)
#define PWC_FPRC_FPRCWE_2                              ((uint16_t)0x0400U)
#define PWC_FPRC_FPRCWE_3                              ((uint16_t)0x0800U)
#define PWC_FPRC_FPRCWE_4                              ((uint16_t)0x1000U)
#define PWC_FPRC_FPRCWE_5                              ((uint16_t)0x2000U)
#define PWC_FPRC_FPRCWE_6                              ((uint16_t)0x4000U)
#define PWC_FPRC_FPRCWE_7                              ((uint16_t)0x8000U)

/*  Bit definition for PWC_DBGC register  */
#define PWC_DBGC_DBGEN_POS                             (0U)
#define PWC_DBGC_DBGEN                                 ((uint16_t)0x0001U)
#define PWC_DBGC_TRSTF_POS                             (15U)
#define PWC_DBGC_TRSTF                                 ((uint16_t)0x8000U)

/*  Bit definition for PWC_RSTF0 register  */
#define PWC_RSTF0_PORF_POS                             (0U)
#define PWC_RSTF0_PORF                                 ((uint16_t)0x0001U)
#define PWC_RSTF0_PINRF_POS                            (1U)
#define PWC_RSTF0_PINRF                                ((uint16_t)0x0002U)
#define PWC_RSTF0_LV0RF_POS                            (2U)
#define PWC_RSTF0_LV0RF                                ((uint16_t)0x0004U)
#define PWC_RSTF0_LV1RF_POS                            (3U)
#define PWC_RSTF0_LV1RF                                ((uint16_t)0x0008U)
#define PWC_RSTF0_LV2RF_POS                            (4U)
#define PWC_RSTF0_LV2RF                                ((uint16_t)0x0010U)
#define PWC_RSTF0_SWDRF_POS                            (5U)
#define PWC_RSTF0_SWDRF                                ((uint16_t)0x0020U)
#define PWC_RSTF0_WDRF_POS                             (6U)
#define PWC_RSTF0_WDRF                                 ((uint16_t)0x0040U)
#define PWC_RSTF0_CKFERF_POS                           (7U)
#define PWC_RSTF0_CKFERF                               ((uint16_t)0x0080U)
#define PWC_RSTF0_SWRF_POS                             (8U)
#define PWC_RSTF0_SWRF                                 ((uint16_t)0x0100U)
#define PWC_RSTF0_RAMPERF_POS                          (10U)
#define PWC_RSTF0_RAMPERF                              ((uint16_t)0x0400U)
#define PWC_RSTF0_CPULKUPRF_POS                        (12U)
#define PWC_RSTF0_CPULKUPRF                            ((uint16_t)0x1000U)
#define PWC_RSTF0_XTALERF_POS                          (13U)
#define PWC_RSTF0_XTALERF                              ((uint16_t)0x2000U)
#define PWC_RSTF0_MULTIRF_POS                          (14U)
#define PWC_RSTF0_MULTIRF                              ((uint16_t)0x4000U)
#define PWC_RSTF0_CLRF_POS                             (15U)
#define PWC_RSTF0_CLRF                                 ((uint16_t)0x8000U)


/*******************************************************************************
                Bit definition for Peripheral RMU
*******************************************************************************/
/*  Bit definition for RMU_RSTF0 register  */
#define RMU_RSTF0_PORF_POS                             (0U)
#define RMU_RSTF0_PORF                                 ((uint16_t)0x0001U)
#define RMU_RSTF0_PINRF_POS                            (1U)
#define RMU_RSTF0_PINRF                                ((uint16_t)0x0002U)
#define RMU_RSTF0_LV0RF_POS                            (2U)
#define RMU_RSTF0_LV0RF                                ((uint16_t)0x0004U)
#define RMU_RSTF0_LV1RF_POS                            (3U)
#define RMU_RSTF0_LV1RF                                ((uint16_t)0x0008U)
#define RMU_RSTF0_LV2RF_POS                            (4U)
#define RMU_RSTF0_LV2RF                                ((uint16_t)0x0010U)
#define RMU_RSTF0_SWDRF_POS                            (5U)
#define RMU_RSTF0_SWDRF                                ((uint16_t)0x0020U)
#define RMU_RSTF0_WDRF_POS                             (6U)
#define RMU_RSTF0_WDRF                                 ((uint16_t)0x0040U)
#define RMU_RSTF0_CKFERF_POS                           (7U)
#define RMU_RSTF0_CKFERF                               ((uint16_t)0x0080U)
#define RMU_RSTF0_SWRF_POS                             (8U)
#define RMU_RSTF0_SWRF                                 ((uint16_t)0x0100U)
#define RMU_RSTF0_RAMPERF_POS                          (10U)
#define RMU_RSTF0_RAMPERF                              ((uint16_t)0x0400U)
#define RMU_RSTF0_CPULKUPRF_POS                        (12U)
#define RMU_RSTF0_CPULKUPRF                            ((uint16_t)0x1000U)
#define RMU_RSTF0_XTALERF_POS                          (13U)
#define RMU_RSTF0_XTALERF                              ((uint16_t)0x2000U)
#define RMU_RSTF0_MULTIRF_POS                          (14U)
#define RMU_RSTF0_MULTIRF                              ((uint16_t)0x4000U)
#define RMU_RSTF0_CLRF_POS                             (15U)
#define RMU_RSTF0_CLRF                                 ((uint16_t)0x8000U)


/*******************************************************************************
                Bit definition for Peripheral SPI
*******************************************************************************/
/*  Bit definition for SPI_DR register  */
#define SPI_DR_SPD_POS                                 (0U)
#define SPI_DR_SPD                                     ((uint32_t)0x0000FFFFU)
#define SPI_DR_SPD_0                                   ((uint32_t)0x00000001U)
#define SPI_DR_SPD_1                                   ((uint32_t)0x00000002U)
#define SPI_DR_SPD_2                                   ((uint32_t)0x00000004U)
#define SPI_DR_SPD_3                                   ((uint32_t)0x00000008U)
#define SPI_DR_SPD_4                                   ((uint32_t)0x00000010U)
#define SPI_DR_SPD_5                                   ((uint32_t)0x00000020U)
#define SPI_DR_SPD_6                                   ((uint32_t)0x00000040U)
#define SPI_DR_SPD_7                                   ((uint32_t)0x00000080U)
#define SPI_DR_SPD_8                                   ((uint32_t)0x00000100U)
#define SPI_DR_SPD_9                                   ((uint32_t)0x00000200U)
#define SPI_DR_SPD_10                                  ((uint32_t)0x00000400U)
#define SPI_DR_SPD_11                                  ((uint32_t)0x00000800U)
#define SPI_DR_SPD_12                                  ((uint32_t)0x00001000U)
#define SPI_DR_SPD_13                                  ((uint32_t)0x00002000U)
#define SPI_DR_SPD_14                                  ((uint32_t)0x00004000U)
#define SPI_DR_SPD_15                                  ((uint32_t)0x00008000U)

/*  Bit definition for SPI_CR1 register  */
#define SPI_CR1_SPIMDS_POS                             (0U)
#define SPI_CR1_SPIMDS                                 ((uint32_t)0x00000001U)
#define SPI_CR1_TXMDS_POS                              (1U)
#define SPI_CR1_TXMDS                                  ((uint32_t)0x00000002U)
#define SPI_CR1_MSTR_POS                               (3U)
#define SPI_CR1_MSTR                                   ((uint32_t)0x00000008U)
#define SPI_CR1_SPLPBK_POS                             (4U)
#define SPI_CR1_SPLPBK                                 ((uint32_t)0x00000010U)
#define SPI_CR1_SPLPBK2_POS                            (5U)
#define SPI_CR1_SPLPBK2                                ((uint32_t)0x00000020U)
#define SPI_CR1_SPE_POS                                (6U)
#define SPI_CR1_SPE                                    ((uint32_t)0x00000040U)
#define SPI_CR1_EIE_POS                                (8U)
#define SPI_CR1_EIE                                    ((uint32_t)0x00000100U)
#define SPI_CR1_TXIE_POS                               (9U)
#define SPI_CR1_TXIE                                   ((uint32_t)0x00000200U)
#define SPI_CR1_RXIE_POS                               (10U)
#define SPI_CR1_RXIE                                   ((uint32_t)0x00000400U)
#define SPI_CR1_IDIE_POS                               (11U)
#define SPI_CR1_IDIE                                   ((uint32_t)0x00000800U)
#define SPI_CR1_MODFE_POS                              (12U)
#define SPI_CR1_MODFE                                  ((uint32_t)0x00001000U)
#define SPI_CR1_PATE_POS                               (13U)
#define SPI_CR1_PATE                                   ((uint32_t)0x00002000U)
#define SPI_CR1_PAOE_POS                               (14U)
#define SPI_CR1_PAOE                                   ((uint32_t)0x00004000U)
#define SPI_CR1_PAE_POS                                (15U)
#define SPI_CR1_PAE                                    ((uint32_t)0x00008000U)

/*  Bit definition for SPI_CFG1 register  */
#define SPI_CFG1_SS0PV_POS                             (8U)
#define SPI_CFG1_SS0PV                                 ((uint32_t)0x00000100U)

/*  Bit definition for SPI_SR register  */
#define SPI_SR_OVRERF_POS                              (0U)
#define SPI_SR_OVRERF                                  ((uint32_t)0x00000001U)
#define SPI_SR_IDLNF_POS                               (1U)
#define SPI_SR_IDLNF                                   ((uint32_t)0x00000002U)
#define SPI_SR_MODFERF_POS                             (2U)
#define SPI_SR_MODFERF                                 ((uint32_t)0x00000004U)
#define SPI_SR_PERF_POS                                (3U)
#define SPI_SR_PERF                                    ((uint32_t)0x00000008U)
#define SPI_SR_UDRERF_POS                              (4U)
#define SPI_SR_UDRERF                                  ((uint32_t)0x00000010U)
#define SPI_SR_TDEF_POS                                (5U)
#define SPI_SR_TDEF                                    ((uint32_t)0x00000020U)
#define SPI_SR_RDFF_POS                                (7U)
#define SPI_SR_RDFF                                    ((uint32_t)0x00000080U)

/*  Bit definition for SPI_CFG2 register  */
#define SPI_CFG2_CPHA_POS                              (0U)
#define SPI_CFG2_CPHA                                  ((uint32_t)0x00000001U)
#define SPI_CFG2_CPOL_POS                              (1U)
#define SPI_CFG2_CPOL                                  ((uint32_t)0x00000002U)
#define SPI_CFG2_MBR_POS                               (2U)
#define SPI_CFG2_MBR                                   ((uint32_t)0x0000001CU)
#define SPI_CFG2_MBR_0                                 ((uint32_t)0x00000004U)
#define SPI_CFG2_MBR_1                                 ((uint32_t)0x00000008U)
#define SPI_CFG2_MBR_2                                 ((uint32_t)0x00000010U)
#define SPI_CFG2_DSIZE_POS                             (8U)
#define SPI_CFG2_DSIZE                                 ((uint32_t)0x00000100U)
#define SPI_CFG2_LSBF_POS                              (12U)
#define SPI_CFG2_LSBF                                  ((uint32_t)0x00001000U)


/*******************************************************************************
                Bit definition for Peripheral SWDT
*******************************************************************************/
/*  Bit definition for SWDT_SR register  */
#define SWDT_SR_CNT_POS                                (0U)
#define SWDT_SR_CNT                                    ((uint32_t)0x0000FFFFU)
#define SWDT_SR_CNT_0                                  ((uint32_t)0x00000001U)
#define SWDT_SR_CNT_1                                  ((uint32_t)0x00000002U)
#define SWDT_SR_CNT_2                                  ((uint32_t)0x00000004U)
#define SWDT_SR_CNT_3                                  ((uint32_t)0x00000008U)
#define SWDT_SR_CNT_4                                  ((uint32_t)0x00000010U)
#define SWDT_SR_CNT_5                                  ((uint32_t)0x00000020U)
#define SWDT_SR_CNT_6                                  ((uint32_t)0x00000040U)
#define SWDT_SR_CNT_7                                  ((uint32_t)0x00000080U)
#define SWDT_SR_CNT_8                                  ((uint32_t)0x00000100U)
#define SWDT_SR_CNT_9                                  ((uint32_t)0x00000200U)
#define SWDT_SR_CNT_10                                 ((uint32_t)0x00000400U)
#define SWDT_SR_CNT_11                                 ((uint32_t)0x00000800U)
#define SWDT_SR_CNT_12                                 ((uint32_t)0x00001000U)
#define SWDT_SR_CNT_13                                 ((uint32_t)0x00002000U)
#define SWDT_SR_CNT_14                                 ((uint32_t)0x00004000U)
#define SWDT_SR_CNT_15                                 ((uint32_t)0x00008000U)
#define SWDT_SR_UDF_POS                                (16U)
#define SWDT_SR_UDF                                    ((uint32_t)0x00010000U)
#define SWDT_SR_REF_POS                                (17U)
#define SWDT_SR_REF                                    ((uint32_t)0x00020000U)

/*  Bit definition for SWDT_RR register  */
#define SWDT_RR_RF_POS                                 (0U)
#define SWDT_RR_RF                                     ((uint32_t)0x0000FFFFU)
#define SWDT_RR_RF_0                                   ((uint32_t)0x00000001U)
#define SWDT_RR_RF_1                                   ((uint32_t)0x00000002U)
#define SWDT_RR_RF_2                                   ((uint32_t)0x00000004U)
#define SWDT_RR_RF_3                                   ((uint32_t)0x00000008U)
#define SWDT_RR_RF_4                                   ((uint32_t)0x00000010U)
#define SWDT_RR_RF_5                                   ((uint32_t)0x00000020U)
#define SWDT_RR_RF_6                                   ((uint32_t)0x00000040U)
#define SWDT_RR_RF_7                                   ((uint32_t)0x00000080U)
#define SWDT_RR_RF_8                                   ((uint32_t)0x00000100U)
#define SWDT_RR_RF_9                                   ((uint32_t)0x00000200U)
#define SWDT_RR_RF_10                                  ((uint32_t)0x00000400U)
#define SWDT_RR_RF_11                                  ((uint32_t)0x00000800U)
#define SWDT_RR_RF_12                                  ((uint32_t)0x00001000U)
#define SWDT_RR_RF_13                                  ((uint32_t)0x00002000U)
#define SWDT_RR_RF_14                                  ((uint32_t)0x00004000U)
#define SWDT_RR_RF_15                                  ((uint32_t)0x00008000U)


/*******************************************************************************
                Bit definition for Peripheral TMR0
*******************************************************************************/
/*  Bit definition for TMR0_CNTAR register  */
#define TMR0_CNTAR_CNTA_POS                            (0U)
#define TMR0_CNTAR_CNTA                                ((uint32_t)0x0000FFFFU)
#define TMR0_CNTAR_CNTA_0                              ((uint32_t)0x00000001U)
#define TMR0_CNTAR_CNTA_1                              ((uint32_t)0x00000002U)
#define TMR0_CNTAR_CNTA_2                              ((uint32_t)0x00000004U)
#define TMR0_CNTAR_CNTA_3                              ((uint32_t)0x00000008U)
#define TMR0_CNTAR_CNTA_4                              ((uint32_t)0x00000010U)
#define TMR0_CNTAR_CNTA_5                              ((uint32_t)0x00000020U)
#define TMR0_CNTAR_CNTA_6                              ((uint32_t)0x00000040U)
#define TMR0_CNTAR_CNTA_7                              ((uint32_t)0x00000080U)
#define TMR0_CNTAR_CNTA_8                              ((uint32_t)0x00000100U)
#define TMR0_CNTAR_CNTA_9                              ((uint32_t)0x00000200U)
#define TMR0_CNTAR_CNTA_10                             ((uint32_t)0x00000400U)
#define TMR0_CNTAR_CNTA_11                             ((uint32_t)0x00000800U)
#define TMR0_CNTAR_CNTA_12                             ((uint32_t)0x00001000U)
#define TMR0_CNTAR_CNTA_13                             ((uint32_t)0x00002000U)
#define TMR0_CNTAR_CNTA_14                             ((uint32_t)0x00004000U)
#define TMR0_CNTAR_CNTA_15                             ((uint32_t)0x00008000U)

/*  Bit definition for TMR0_CNTBR register  */
#define TMR0_CNTBR_CNTB_POS                            (0U)
#define TMR0_CNTBR_CNTB                                ((uint32_t)0x0000FFFFU)
#define TMR0_CNTBR_CNTB_0                              ((uint32_t)0x00000001U)
#define TMR0_CNTBR_CNTB_1                              ((uint32_t)0x00000002U)
#define TMR0_CNTBR_CNTB_2                              ((uint32_t)0x00000004U)
#define TMR0_CNTBR_CNTB_3                              ((uint32_t)0x00000008U)
#define TMR0_CNTBR_CNTB_4                              ((uint32_t)0x00000010U)
#define TMR0_CNTBR_CNTB_5                              ((uint32_t)0x00000020U)
#define TMR0_CNTBR_CNTB_6                              ((uint32_t)0x00000040U)
#define TMR0_CNTBR_CNTB_7                              ((uint32_t)0x00000080U)
#define TMR0_CNTBR_CNTB_8                              ((uint32_t)0x00000100U)
#define TMR0_CNTBR_CNTB_9                              ((uint32_t)0x00000200U)
#define TMR0_CNTBR_CNTB_10                             ((uint32_t)0x00000400U)
#define TMR0_CNTBR_CNTB_11                             ((uint32_t)0x00000800U)
#define TMR0_CNTBR_CNTB_12                             ((uint32_t)0x00001000U)
#define TMR0_CNTBR_CNTB_13                             ((uint32_t)0x00002000U)
#define TMR0_CNTBR_CNTB_14                             ((uint32_t)0x00004000U)
#define TMR0_CNTBR_CNTB_15                             ((uint32_t)0x00008000U)

/*  Bit definition for TMR0_CMPAR register  */
#define TMR0_CMPAR_CMPA_POS                            (0U)
#define TMR0_CMPAR_CMPA                                ((uint32_t)0x0000FFFFU)
#define TMR0_CMPAR_CMPA_0                              ((uint32_t)0x00000001U)
#define TMR0_CMPAR_CMPA_1                              ((uint32_t)0x00000002U)
#define TMR0_CMPAR_CMPA_2                              ((uint32_t)0x00000004U)
#define TMR0_CMPAR_CMPA_3                              ((uint32_t)0x00000008U)
#define TMR0_CMPAR_CMPA_4                              ((uint32_t)0x00000010U)
#define TMR0_CMPAR_CMPA_5                              ((uint32_t)0x00000020U)
#define TMR0_CMPAR_CMPA_6                              ((uint32_t)0x00000040U)
#define TMR0_CMPAR_CMPA_7                              ((uint32_t)0x00000080U)
#define TMR0_CMPAR_CMPA_8                              ((uint32_t)0x00000100U)
#define TMR0_CMPAR_CMPA_9                              ((uint32_t)0x00000200U)
#define TMR0_CMPAR_CMPA_10                             ((uint32_t)0x00000400U)
#define TMR0_CMPAR_CMPA_11                             ((uint32_t)0x00000800U)
#define TMR0_CMPAR_CMPA_12                             ((uint32_t)0x00001000U)
#define TMR0_CMPAR_CMPA_13                             ((uint32_t)0x00002000U)
#define TMR0_CMPAR_CMPA_14                             ((uint32_t)0x00004000U)
#define TMR0_CMPAR_CMPA_15                             ((uint32_t)0x00008000U)

/*  Bit definition for TMR0_CMPBR register  */
#define TMR0_CMPBR_CMPB_POS                            (0U)
#define TMR0_CMPBR_CMPB                                ((uint32_t)0x0000FFFFU)
#define TMR0_CMPBR_CMPB_0                              ((uint32_t)0x00000001U)
#define TMR0_CMPBR_CMPB_1                              ((uint32_t)0x00000002U)
#define TMR0_CMPBR_CMPB_2                              ((uint32_t)0x00000004U)
#define TMR0_CMPBR_CMPB_3                              ((uint32_t)0x00000008U)
#define TMR0_CMPBR_CMPB_4                              ((uint32_t)0x00000010U)
#define TMR0_CMPBR_CMPB_5                              ((uint32_t)0x00000020U)
#define TMR0_CMPBR_CMPB_6                              ((uint32_t)0x00000040U)
#define TMR0_CMPBR_CMPB_7                              ((uint32_t)0x00000080U)
#define TMR0_CMPBR_CMPB_8                              ((uint32_t)0x00000100U)
#define TMR0_CMPBR_CMPB_9                              ((uint32_t)0x00000200U)
#define TMR0_CMPBR_CMPB_10                             ((uint32_t)0x00000400U)
#define TMR0_CMPBR_CMPB_11                             ((uint32_t)0x00000800U)
#define TMR0_CMPBR_CMPB_12                             ((uint32_t)0x00001000U)
#define TMR0_CMPBR_CMPB_13                             ((uint32_t)0x00002000U)
#define TMR0_CMPBR_CMPB_14                             ((uint32_t)0x00004000U)
#define TMR0_CMPBR_CMPB_15                             ((uint32_t)0x00008000U)

/*  Bit definition for TMR0_BCONR register  */
#define TMR0_BCONR_CSTA_POS                            (0U)
#define TMR0_BCONR_CSTA                                ((uint32_t)0x00000001U)
#define TMR0_BCONR_CAPMDA_POS                          (1U)
#define TMR0_BCONR_CAPMDA                              ((uint32_t)0x00000002U)
#define TMR0_BCONR_INTENA_POS                          (2U)
#define TMR0_BCONR_INTENA                              ((uint32_t)0x00000004U)
#define TMR0_BCONR_CKDIVA_POS                          (4U)
#define TMR0_BCONR_CKDIVA                              ((uint32_t)0x000000F0U)
#define TMR0_BCONR_CKDIVA_0                            ((uint32_t)0x00000010U)
#define TMR0_BCONR_CKDIVA_1                            ((uint32_t)0x00000020U)
#define TMR0_BCONR_CKDIVA_2                            ((uint32_t)0x00000040U)
#define TMR0_BCONR_CKDIVA_3                            ((uint32_t)0x00000080U)
#define TMR0_BCONR_SYNSA_POS                           (8U)
#define TMR0_BCONR_SYNSA                               ((uint32_t)0x00000100U)
#define TMR0_BCONR_SYNCLKA_POS                         (9U)
#define TMR0_BCONR_SYNCLKA                             ((uint32_t)0x00000200U)
#define TMR0_BCONR_ASYNCLKA_POS                        (10U)
#define TMR0_BCONR_ASYNCLKA                            ((uint32_t)0x00000400U)
#define TMR0_BCONR_HSTAA_POS                           (12U)
#define TMR0_BCONR_HSTAA                               ((uint32_t)0x00001000U)
#define TMR0_BCONR_HSTPA_POS                           (13U)
#define TMR0_BCONR_HSTPA                               ((uint32_t)0x00002000U)
#define TMR0_BCONR_HCLEA_POS                           (14U)
#define TMR0_BCONR_HCLEA                               ((uint32_t)0x00004000U)
#define TMR0_BCONR_HICPA_POS                           (15U)
#define TMR0_BCONR_HICPA                               ((uint32_t)0x00008000U)
#define TMR0_BCONR_CSTB_POS                            (16U)
#define TMR0_BCONR_CSTB                                ((uint32_t)0x00010000U)
#define TMR0_BCONR_CAPMDB_POS                          (17U)
#define TMR0_BCONR_CAPMDB                              ((uint32_t)0x00020000U)
#define TMR0_BCONR_INTENB_POS                          (18U)
#define TMR0_BCONR_INTENB                              ((uint32_t)0x00040000U)
#define TMR0_BCONR_CKDIVB_POS                          (20U)
#define TMR0_BCONR_CKDIVB                              ((uint32_t)0x00F00000U)
#define TMR0_BCONR_CKDIVB_0                            ((uint32_t)0x00100000U)
#define TMR0_BCONR_CKDIVB_1                            ((uint32_t)0x00200000U)
#define TMR0_BCONR_CKDIVB_2                            ((uint32_t)0x00400000U)
#define TMR0_BCONR_CKDIVB_3                            ((uint32_t)0x00800000U)
#define TMR0_BCONR_SYNSB_POS                           (24U)
#define TMR0_BCONR_SYNSB                               ((uint32_t)0x01000000U)
#define TMR0_BCONR_SYNCLKB_POS                         (25U)
#define TMR0_BCONR_SYNCLKB                             ((uint32_t)0x02000000U)
#define TMR0_BCONR_ASYNCLKB_POS                        (26U)
#define TMR0_BCONR_ASYNCLKB                            ((uint32_t)0x04000000U)
#define TMR0_BCONR_HSTAB_POS                           (28U)
#define TMR0_BCONR_HSTAB                               ((uint32_t)0x10000000U)
#define TMR0_BCONR_HSTPB_POS                           (29U)
#define TMR0_BCONR_HSTPB                               ((uint32_t)0x20000000U)
#define TMR0_BCONR_HCLEB_POS                           (30U)
#define TMR0_BCONR_HCLEB                               ((uint32_t)0x40000000U)
#define TMR0_BCONR_HICPB_POS                           (31U)
#define TMR0_BCONR_HICPB                               ((uint32_t)0x80000000U)

/*  Bit definition for TMR0_STFLR register  */
#define TMR0_STFLR_CMFA_POS                            (0U)
#define TMR0_STFLR_CMFA                                ((uint32_t)0x00000001U)
#define TMR0_STFLR_CMFB_POS                            (16U)
#define TMR0_STFLR_CMFB                                ((uint32_t)0x00010000U)


/*******************************************************************************
                Bit definition for Peripheral TMR4
*******************************************************************************/
/*  Bit definition for TMR4_OCCRUH register  */
#define TMR4_OCCRUH                                    ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_OCCRUL register  */
#define TMR4_OCCRUL                                    ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_OCCRVH register  */
#define TMR4_OCCRVH                                    ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_OCCRVL register  */
#define TMR4_OCCRVL                                    ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_OCCRWH register  */
#define TMR4_OCCRWH                                    ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_OCCRWL register  */
#define TMR4_OCCRWL                                    ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_OCSR register  */
#define TMR4_OCSR_OCEH_POS                             (0U)
#define TMR4_OCSR_OCEH                                 ((uint16_t)0x0001U)
#define TMR4_OCSR_OCEL_POS                             (1U)
#define TMR4_OCSR_OCEL                                 ((uint16_t)0x0002U)
#define TMR4_OCSR_OCPH_POS                             (2U)
#define TMR4_OCSR_OCPH                                 ((uint16_t)0x0004U)
#define TMR4_OCSR_OCPL_POS                             (3U)
#define TMR4_OCSR_OCPL                                 ((uint16_t)0x0008U)
#define TMR4_OCSR_OCIEH_POS                            (4U)
#define TMR4_OCSR_OCIEH                                ((uint16_t)0x0010U)
#define TMR4_OCSR_OCIEL_POS                            (5U)
#define TMR4_OCSR_OCIEL                                ((uint16_t)0x0020U)
#define TMR4_OCSR_OCFH_POS                             (6U)
#define TMR4_OCSR_OCFH                                 ((uint16_t)0x0040U)
#define TMR4_OCSR_OCFL_POS                             (7U)
#define TMR4_OCSR_OCFL                                 ((uint16_t)0x0080U)

/*  Bit definition for TMR4_OCER register  */
#define TMR4_OCER_CHBUFEN_POS                          (0U)
#define TMR4_OCER_CHBUFEN                              ((uint16_t)0x0003U)
#define TMR4_OCER_CHBUFEN_0                            ((uint16_t)0x0001U)
#define TMR4_OCER_CHBUFEN_1                            ((uint16_t)0x0002U)
#define TMR4_OCER_CLBUFEN_POS                          (2U)
#define TMR4_OCER_CLBUFEN                              ((uint16_t)0x000CU)
#define TMR4_OCER_CLBUFEN_0                            ((uint16_t)0x0004U)
#define TMR4_OCER_CLBUFEN_1                            ((uint16_t)0x0008U)
#define TMR4_OCER_MHBUFEN_POS                          (4U)
#define TMR4_OCER_MHBUFEN                              ((uint16_t)0x0030U)
#define TMR4_OCER_MHBUFEN_0                            ((uint16_t)0x0010U)
#define TMR4_OCER_MHBUFEN_1                            ((uint16_t)0x0020U)
#define TMR4_OCER_MLBUFEN_POS                          (6U)
#define TMR4_OCER_MLBUFEN                              ((uint16_t)0x00C0U)
#define TMR4_OCER_MLBUFEN_0                            ((uint16_t)0x0040U)
#define TMR4_OCER_MLBUFEN_1                            ((uint16_t)0x0080U)
#define TMR4_OCER_LMCH_POS                             (8U)
#define TMR4_OCER_LMCH                                 ((uint16_t)0x0100U)
#define TMR4_OCER_LMCL_POS                             (9U)
#define TMR4_OCER_LMCL                                 ((uint16_t)0x0200U)
#define TMR4_OCER_LMMH_POS                             (10U)
#define TMR4_OCER_LMMH                                 ((uint16_t)0x0400U)
#define TMR4_OCER_LMML_POS                             (11U)
#define TMR4_OCER_LMML                                 ((uint16_t)0x0800U)
#define TMR4_OCER_MCECH_POS                            (12U)
#define TMR4_OCER_MCECH                                ((uint16_t)0x1000U)
#define TMR4_OCER_MCECL_POS                            (13U)
#define TMR4_OCER_MCECL                                ((uint16_t)0x2000U)

/*  Bit definition for TMR4_OCMRH register  */
#define TMR4_OCMRH_OCFDCH_POS                          (0U)
#define TMR4_OCMRH_OCFDCH                              ((uint16_t)0x0001U)
#define TMR4_OCMRH_OCFPKH_POS                          (1U)
#define TMR4_OCMRH_OCFPKH                              ((uint16_t)0x0002U)
#define TMR4_OCMRH_OCFUCH_POS                          (2U)
#define TMR4_OCMRH_OCFUCH                              ((uint16_t)0x0004U)
#define TMR4_OCMRH_OCFZRH_POS                          (3U)
#define TMR4_OCMRH_OCFZRH                              ((uint16_t)0x0008U)
#define TMR4_OCMRH_OPDCH_POS                           (4U)
#define TMR4_OCMRH_OPDCH                               ((uint16_t)0x0030U)
#define TMR4_OCMRH_OPDCH_0                             ((uint16_t)0x0010U)
#define TMR4_OCMRH_OPDCH_1                             ((uint16_t)0x0020U)
#define TMR4_OCMRH_OPPKH_POS                           (6U)
#define TMR4_OCMRH_OPPKH                               ((uint16_t)0x00C0U)
#define TMR4_OCMRH_OPPKH_0                             ((uint16_t)0x0040U)
#define TMR4_OCMRH_OPPKH_1                             ((uint16_t)0x0080U)
#define TMR4_OCMRH_OPUCH_POS                           (8U)
#define TMR4_OCMRH_OPUCH                               ((uint16_t)0x0300U)
#define TMR4_OCMRH_OPUCH_0                             ((uint16_t)0x0100U)
#define TMR4_OCMRH_OPUCH_1                             ((uint16_t)0x0200U)
#define TMR4_OCMRH_OPZRH_POS                           (10U)
#define TMR4_OCMRH_OPZRH                               ((uint16_t)0x0C00U)
#define TMR4_OCMRH_OPZRH_0                             ((uint16_t)0x0400U)
#define TMR4_OCMRH_OPZRH_1                             ((uint16_t)0x0800U)
#define TMR4_OCMRH_OPNPKH_POS                          (12U)
#define TMR4_OCMRH_OPNPKH                              ((uint16_t)0x3000U)
#define TMR4_OCMRH_OPNPKH_0                            ((uint16_t)0x1000U)
#define TMR4_OCMRH_OPNPKH_1                            ((uint16_t)0x2000U)
#define TMR4_OCMRH_OPNZRH_POS                          (14U)
#define TMR4_OCMRH_OPNZRH                              ((uint16_t)0xC000U)
#define TMR4_OCMRH_OPNZRH_0                            ((uint16_t)0x4000U)
#define TMR4_OCMRH_OPNZRH_1                            ((uint16_t)0x8000U)

/*  Bit definition for TMR4_OCMRL register  */
#define TMR4_OCMRL_OCFDCL_POS                          (0U)
#define TMR4_OCMRL_OCFDCL                              ((uint32_t)0x00000001U)
#define TMR4_OCMRL_OCFPKL_POS                          (1U)
#define TMR4_OCMRL_OCFPKL                              ((uint32_t)0x00000002U)
#define TMR4_OCMRL_OCFUCL_POS                          (2U)
#define TMR4_OCMRL_OCFUCL                              ((uint32_t)0x00000004U)
#define TMR4_OCMRL_OCFZRL_POS                          (3U)
#define TMR4_OCMRL_OCFZRL                              ((uint32_t)0x00000008U)
#define TMR4_OCMRL_OPDCL_POS                           (4U)
#define TMR4_OCMRL_OPDCL                               ((uint32_t)0x00000030U)
#define TMR4_OCMRL_OPDCL_0                             ((uint32_t)0x00000010U)
#define TMR4_OCMRL_OPDCL_1                             ((uint32_t)0x00000020U)
#define TMR4_OCMRL_OPPKL_POS                           (6U)
#define TMR4_OCMRL_OPPKL                               ((uint32_t)0x000000C0U)
#define TMR4_OCMRL_OPPKL_0                             ((uint32_t)0x00000040U)
#define TMR4_OCMRL_OPPKL_1                             ((uint32_t)0x00000080U)
#define TMR4_OCMRL_OPUCL_POS                           (8U)
#define TMR4_OCMRL_OPUCL                               ((uint32_t)0x00000300U)
#define TMR4_OCMRL_OPUCL_0                             ((uint32_t)0x00000100U)
#define TMR4_OCMRL_OPUCL_1                             ((uint32_t)0x00000200U)
#define TMR4_OCMRL_OPZRL_POS                           (10U)
#define TMR4_OCMRL_OPZRL                               ((uint32_t)0x00000C00U)
#define TMR4_OCMRL_OPZRL_0                             ((uint32_t)0x00000400U)
#define TMR4_OCMRL_OPZRL_1                             ((uint32_t)0x00000800U)
#define TMR4_OCMRL_OPNPKL_POS                          (12U)
#define TMR4_OCMRL_OPNPKL                              ((uint32_t)0x00003000U)
#define TMR4_OCMRL_OPNPKL_0                            ((uint32_t)0x00001000U)
#define TMR4_OCMRL_OPNPKL_1                            ((uint32_t)0x00002000U)
#define TMR4_OCMRL_OPNZRL_POS                          (14U)
#define TMR4_OCMRL_OPNZRL                              ((uint32_t)0x0000C000U)
#define TMR4_OCMRL_OPNZRL_0                            ((uint32_t)0x00004000U)
#define TMR4_OCMRL_OPNZRL_1                            ((uint32_t)0x00008000U)
#define TMR4_OCMRL_EOPNDCL_POS                         (16U)
#define TMR4_OCMRL_EOPNDCL                             ((uint32_t)0x00030000U)
#define TMR4_OCMRL_EOPNDCL_0                           ((uint32_t)0x00010000U)
#define TMR4_OCMRL_EOPNDCL_1                           ((uint32_t)0x00020000U)
#define TMR4_OCMRL_EOPNUCL_POS                         (18U)
#define TMR4_OCMRL_EOPNUCL                             ((uint32_t)0x000C0000U)
#define TMR4_OCMRL_EOPNUCL_0                           ((uint32_t)0x00040000U)
#define TMR4_OCMRL_EOPNUCL_1                           ((uint32_t)0x00080000U)
#define TMR4_OCMRL_EOPDCL_POS                          (20U)
#define TMR4_OCMRL_EOPDCL                              ((uint32_t)0x00300000U)
#define TMR4_OCMRL_EOPDCL_0                            ((uint32_t)0x00100000U)
#define TMR4_OCMRL_EOPDCL_1                            ((uint32_t)0x00200000U)
#define TMR4_OCMRL_EOPPKL_POS                          (22U)
#define TMR4_OCMRL_EOPPKL                              ((uint32_t)0x00C00000U)
#define TMR4_OCMRL_EOPPKL_0                            ((uint32_t)0x00400000U)
#define TMR4_OCMRL_EOPPKL_1                            ((uint32_t)0x00800000U)
#define TMR4_OCMRL_EOPUCL_POS                          (24U)
#define TMR4_OCMRL_EOPUCL                              ((uint32_t)0x03000000U)
#define TMR4_OCMRL_EOPUCL_0                            ((uint32_t)0x01000000U)
#define TMR4_OCMRL_EOPUCL_1                            ((uint32_t)0x02000000U)
#define TMR4_OCMRL_EOPZRL_POS                          (26U)
#define TMR4_OCMRL_EOPZRL                              ((uint32_t)0x0C000000U)
#define TMR4_OCMRL_EOPZRL_0                            ((uint32_t)0x04000000U)
#define TMR4_OCMRL_EOPZRL_1                            ((uint32_t)0x08000000U)
#define TMR4_OCMRL_EOPNPKL_POS                         (28U)
#define TMR4_OCMRL_EOPNPKL                             ((uint32_t)0x30000000U)
#define TMR4_OCMRL_EOPNPKL_0                           ((uint32_t)0x10000000U)
#define TMR4_OCMRL_EOPNPKL_1                           ((uint32_t)0x20000000U)
#define TMR4_OCMRL_EOPNZRL_POS                         (30U)
#define TMR4_OCMRL_EOPNZRL                             ((uint32_t)0xC0000000U)
#define TMR4_OCMRL_EOPNZRL_0                           ((uint32_t)0x40000000U)
#define TMR4_OCMRL_EOPNZRL_1                           ((uint32_t)0x80000000U)

/*  Bit definition for TMR4_CPSR register  */
#define TMR4_CPSR                                      ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_CNTR register  */
#define TMR4_CNTR                                      ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_CCSR register  */
#define TMR4_CCSR_CKDIV_POS                            (0U)
#define TMR4_CCSR_CKDIV                                ((uint16_t)0x000FU)
#define TMR4_CCSR_CKDIV_0                              ((uint16_t)0x0001U)
#define TMR4_CCSR_CKDIV_1                              ((uint16_t)0x0002U)
#define TMR4_CCSR_CKDIV_2                              ((uint16_t)0x0004U)
#define TMR4_CCSR_CKDIV_3                              ((uint16_t)0x0008U)
#define TMR4_CCSR_CLEAR_POS                            (4U)
#define TMR4_CCSR_CLEAR                                ((uint16_t)0x0010U)
#define TMR4_CCSR_MODE_POS                             (5U)
#define TMR4_CCSR_MODE                                 ((uint16_t)0x0020U)
#define TMR4_CCSR_STOP_POS                             (6U)
#define TMR4_CCSR_STOP                                 ((uint16_t)0x0040U)
#define TMR4_CCSR_BUFEN_POS                            (7U)
#define TMR4_CCSR_BUFEN                                ((uint16_t)0x0080U)
#define TMR4_CCSR_IRQPEN_POS                           (8U)
#define TMR4_CCSR_IRQPEN                               ((uint16_t)0x0100U)
#define TMR4_CCSR_IRQPF_POS                            (9U)
#define TMR4_CCSR_IRQPF                                ((uint16_t)0x0200U)
#define TMR4_CCSR_IRQZEN_POS                           (13U)
#define TMR4_CCSR_IRQZEN                               ((uint16_t)0x2000U)
#define TMR4_CCSR_IRQZF_POS                            (14U)
#define TMR4_CCSR_IRQZF                                ((uint16_t)0x4000U)
#define TMR4_CCSR_ECKEN_POS                            (15U)
#define TMR4_CCSR_ECKEN                                ((uint16_t)0x8000U)

/*  Bit definition for TMR4_CVPR register  */
#define TMR4_CVPR_ZIM_POS                              (0U)
#define TMR4_CVPR_ZIM                                  ((uint16_t)0x000FU)
#define TMR4_CVPR_ZIM_0                                ((uint16_t)0x0001U)
#define TMR4_CVPR_ZIM_1                                ((uint16_t)0x0002U)
#define TMR4_CVPR_ZIM_2                                ((uint16_t)0x0004U)
#define TMR4_CVPR_ZIM_3                                ((uint16_t)0x0008U)
#define TMR4_CVPR_PIM_POS                              (4U)
#define TMR4_CVPR_PIM                                  ((uint16_t)0x00F0U)
#define TMR4_CVPR_PIM_0                                ((uint16_t)0x0010U)
#define TMR4_CVPR_PIM_1                                ((uint16_t)0x0020U)
#define TMR4_CVPR_PIM_2                                ((uint16_t)0x0040U)
#define TMR4_CVPR_PIM_3                                ((uint16_t)0x0080U)
#define TMR4_CVPR_ZIC_POS                              (8U)
#define TMR4_CVPR_ZIC                                  ((uint16_t)0x0F00U)
#define TMR4_CVPR_ZIC_0                                ((uint16_t)0x0100U)
#define TMR4_CVPR_ZIC_1                                ((uint16_t)0x0200U)
#define TMR4_CVPR_ZIC_2                                ((uint16_t)0x0400U)
#define TMR4_CVPR_ZIC_3                                ((uint16_t)0x0800U)
#define TMR4_CVPR_PIC_POS                              (12U)
#define TMR4_CVPR_PIC                                  ((uint16_t)0xF000U)
#define TMR4_CVPR_PIC_0                                ((uint16_t)0x1000U)
#define TMR4_CVPR_PIC_1                                ((uint16_t)0x2000U)
#define TMR4_CVPR_PIC_2                                ((uint16_t)0x4000U)
#define TMR4_CVPR_PIC_3                                ((uint16_t)0x8000U)

/*  Bit definition for TMR4_PFSRU register  */
#define TMR4_PFSRU                                     ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_PDARU register  */
#define TMR4_PDARU                                     ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_PDBRU register  */
#define TMR4_PDBRU                                     ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_PFSRV register  */
#define TMR4_PFSRV                                     ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_PDARV register  */
#define TMR4_PDARV                                     ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_PDBRV register  */
#define TMR4_PDBRV                                     ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_PFSRW register  */
#define TMR4_PFSRW                                     ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_PDARW register  */
#define TMR4_PDARW                                     ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_PDBRW register  */
#define TMR4_PDBRW                                     ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_POCR register  */
#define TMR4_POCR_DIVCK_POS                            (0U)
#define TMR4_POCR_DIVCK                                ((uint16_t)0x0007U)
#define TMR4_POCR_DIVCK_0                              ((uint16_t)0x0001U)
#define TMR4_POCR_DIVCK_1                              ((uint16_t)0x0002U)
#define TMR4_POCR_DIVCK_2                              ((uint16_t)0x0004U)
#define TMR4_POCR_PWMMD_POS                            (4U)
#define TMR4_POCR_PWMMD                                ((uint16_t)0x0030U)
#define TMR4_POCR_PWMMD_0                              ((uint16_t)0x0010U)
#define TMR4_POCR_PWMMD_1                              ((uint16_t)0x0020U)
#define TMR4_POCR_LVLS_POS                             (6U)
#define TMR4_POCR_LVLS                                 ((uint16_t)0x00C0U)
#define TMR4_POCR_LVLS_0                               ((uint16_t)0x0040U)
#define TMR4_POCR_LVLS_1                               ((uint16_t)0x0080U)

/*  Bit definition for TMR4_RCSR register  */
#define TMR4_RCSR_RTIDU_POS                            (0U)
#define TMR4_RCSR_RTIDU                                ((uint16_t)0x0001U)
#define TMR4_RCSR_RTIDV_POS                            (1U)
#define TMR4_RCSR_RTIDV                                ((uint16_t)0x0002U)
#define TMR4_RCSR_RTIDW_POS                            (2U)
#define TMR4_RCSR_RTIDW                                ((uint16_t)0x0004U)
#define TMR4_RCSR_RTIFU_POS                            (4U)
#define TMR4_RCSR_RTIFU                                ((uint16_t)0x0010U)
#define TMR4_RCSR_RTICU_POS                            (5U)
#define TMR4_RCSR_RTICU                                ((uint16_t)0x0020U)
#define TMR4_RCSR_RTEU_POS                             (6U)
#define TMR4_RCSR_RTEU                                 ((uint16_t)0x0040U)
#define TMR4_RCSR_RTSU_POS                             (7U)
#define TMR4_RCSR_RTSU                                 ((uint16_t)0x0080U)
#define TMR4_RCSR_RTIFV_POS                            (8U)
#define TMR4_RCSR_RTIFV                                ((uint16_t)0x0100U)
#define TMR4_RCSR_RTICV_POS                            (9U)
#define TMR4_RCSR_RTICV                                ((uint16_t)0x0200U)
#define TMR4_RCSR_RTEV_POS                             (10U)
#define TMR4_RCSR_RTEV                                 ((uint16_t)0x0400U)
#define TMR4_RCSR_RTSV_POS                             (11U)
#define TMR4_RCSR_RTSV                                 ((uint16_t)0x0800U)
#define TMR4_RCSR_RTIFW_POS                            (12U)
#define TMR4_RCSR_RTIFW                                ((uint16_t)0x1000U)
#define TMR4_RCSR_RTICW_POS                            (13U)
#define TMR4_RCSR_RTICW                                ((uint16_t)0x2000U)
#define TMR4_RCSR_RTEW_POS                             (14U)
#define TMR4_RCSR_RTEW                                 ((uint16_t)0x4000U)
#define TMR4_RCSR_RTSW_POS                             (15U)
#define TMR4_RCSR_RTSW                                 ((uint16_t)0x8000U)

/*  Bit definition for TMR4_SCCRUH register  */
#define TMR4_SCCRUH                                    ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_SCCRUL register  */
#define TMR4_SCCRUL                                    ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_SCCRVH register  */
#define TMR4_SCCRVH                                    ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_SCCRVL register  */
#define TMR4_SCCRVL                                    ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_SCCRWH register  */
#define TMR4_SCCRWH                                    ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_SCCRWL register  */
#define TMR4_SCCRWL                                    ((uint16_t)0xFFFFU)

/*  Bit definition for TMR4_SCSR register  */
#define TMR4_SCSR_BUFEN_POS                            (0U)
#define TMR4_SCSR_BUFEN                                ((uint16_t)0x0003U)
#define TMR4_SCSR_BUFEN_0                              ((uint16_t)0x0001U)
#define TMR4_SCSR_BUFEN_1                              ((uint16_t)0x0002U)
#define TMR4_SCSR_EVTOS_POS                            (2U)
#define TMR4_SCSR_EVTOS                                ((uint16_t)0x001CU)
#define TMR4_SCSR_EVTOS_0                              ((uint16_t)0x0004U)
#define TMR4_SCSR_EVTOS_1                              ((uint16_t)0x0008U)
#define TMR4_SCSR_EVTOS_2                              ((uint16_t)0x0010U)
#define TMR4_SCSR_LMC_POS                              (5U)
#define TMR4_SCSR_LMC                                  ((uint16_t)0x0020U)
#define TMR4_SCSR_EVTMS_POS                            (8U)
#define TMR4_SCSR_EVTMS                                ((uint16_t)0x0100U)
#define TMR4_SCSR_EVTDS_POS                            (9U)
#define TMR4_SCSR_EVTDS                                ((uint16_t)0x0200U)
#define TMR4_SCSR_DEN_POS                              (12U)
#define TMR4_SCSR_DEN                                  ((uint16_t)0x1000U)
#define TMR4_SCSR_PEN_POS                              (13U)
#define TMR4_SCSR_PEN                                  ((uint16_t)0x2000U)
#define TMR4_SCSR_UEN_POS                              (14U)
#define TMR4_SCSR_UEN                                  ((uint16_t)0x4000U)
#define TMR4_SCSR_ZEN_POS                              (15U)
#define TMR4_SCSR_ZEN                                  ((uint16_t)0x8000U)

/*  Bit definition for TMR4_SCMR register  */
#define TMR4_SCMR_AMC_POS                              (0U)
#define TMR4_SCMR_AMC                                  ((uint16_t)0x000FU)
#define TMR4_SCMR_AMC_0                                ((uint16_t)0x0001U)
#define TMR4_SCMR_AMC_1                                ((uint16_t)0x0002U)
#define TMR4_SCMR_AMC_2                                ((uint16_t)0x0004U)
#define TMR4_SCMR_AMC_3                                ((uint16_t)0x0008U)
#define TMR4_SCMR_MZCE_POS                             (6U)
#define TMR4_SCMR_MZCE                                 ((uint16_t)0x0040U)
#define TMR4_SCMR_MPCE_POS                             (7U)
#define TMR4_SCMR_MPCE                                 ((uint16_t)0x0080U)

/*  Bit definition for TMR4_PSCR register  */
#define TMR4_PSCR_OEUH_POS                             (0U)
#define TMR4_PSCR_OEUH                                 ((uint32_t)0x00000001U)
#define TMR4_PSCR_OEUL_POS                             (1U)
#define TMR4_PSCR_OEUL                                 ((uint32_t)0x00000002U)
#define TMR4_PSCR_OEVH_POS                             (2U)
#define TMR4_PSCR_OEVH                                 ((uint32_t)0x00000004U)
#define TMR4_PSCR_OEVL_POS                             (3U)
#define TMR4_PSCR_OEVL                                 ((uint32_t)0x00000008U)
#define TMR4_PSCR_OEWH_POS                             (4U)
#define TMR4_PSCR_OEWH                                 ((uint32_t)0x00000010U)
#define TMR4_PSCR_OEWL_POS                             (5U)
#define TMR4_PSCR_OEWL                                 ((uint32_t)0x00000020U)
#define TMR4_PSCR_ODT_POS                              (6U)
#define TMR4_PSCR_ODT                                  ((uint32_t)0x000000C0U)
#define TMR4_PSCR_ODT_0                                ((uint32_t)0x00000040U)
#define TMR4_PSCR_ODT_1                                ((uint32_t)0x00000080U)
#define TMR4_PSCR_MOE_POS                              (8U)
#define TMR4_PSCR_MOE                                  ((uint32_t)0x00000100U)
#define TMR4_PSCR_AOE_POS                              (9U)
#define TMR4_PSCR_AOE                                  ((uint32_t)0x00000200U)
#define TMR4_PSCR_OSUH_POS                             (16U)
#define TMR4_PSCR_OSUH                                 ((uint32_t)0x00030000U)
#define TMR4_PSCR_OSUH_0                               ((uint32_t)0x00010000U)
#define TMR4_PSCR_OSUH_1                               ((uint32_t)0x00020000U)
#define TMR4_PSCR_OSUL_POS                             (18U)
#define TMR4_PSCR_OSUL                                 ((uint32_t)0x000C0000U)
#define TMR4_PSCR_OSUL_0                               ((uint32_t)0x00040000U)
#define TMR4_PSCR_OSUL_1                               ((uint32_t)0x00080000U)
#define TMR4_PSCR_OSVH_POS                             (20U)
#define TMR4_PSCR_OSVH                                 ((uint32_t)0x00300000U)
#define TMR4_PSCR_OSVH_0                               ((uint32_t)0x00100000U)
#define TMR4_PSCR_OSVH_1                               ((uint32_t)0x00200000U)
#define TMR4_PSCR_OSVL_POS                             (22U)
#define TMR4_PSCR_OSVL                                 ((uint32_t)0x00C00000U)
#define TMR4_PSCR_OSVL_0                               ((uint32_t)0x00400000U)
#define TMR4_PSCR_OSVL_1                               ((uint32_t)0x00800000U)
#define TMR4_PSCR_OSWH_POS                             (24U)
#define TMR4_PSCR_OSWH                                 ((uint32_t)0x03000000U)
#define TMR4_PSCR_OSWH_0                               ((uint32_t)0x01000000U)
#define TMR4_PSCR_OSWH_1                               ((uint32_t)0x02000000U)
#define TMR4_PSCR_OSWL_POS                             (26U)
#define TMR4_PSCR_OSWL                                 ((uint32_t)0x0C000000U)
#define TMR4_PSCR_OSWL_0                               ((uint32_t)0x04000000U)
#define TMR4_PSCR_OSWL_1                               ((uint32_t)0x08000000U)

/*  Bit definition for TMR4_SCER register  */
#define TMR4_SCER_EVTRS_POS                            (0U)
#define TMR4_SCER_EVTRS                                ((uint16_t)0x0007U)
#define TMR4_SCER_EVTRS_0                              ((uint16_t)0x0001U)
#define TMR4_SCER_EVTRS_1                              ((uint16_t)0x0002U)
#define TMR4_SCER_EVTRS_2                              ((uint16_t)0x0004U)
#define TMR4_SCER_PCTS_POS                             (3U)
#define TMR4_SCER_PCTS                                 ((uint16_t)0x0008U)


/*******************************************************************************
                Bit definition for Peripheral TMRA
*******************************************************************************/
/*  Bit definition for TMRA_CNTER register  */
#define TMRA_CNTER_CNT_POS                             (0U)
#define TMRA_CNTER_CNT                                 ((uint16_t)0xFFFFU)
#define TMRA_CNTER_CNT_0                               ((uint16_t)0x0001U)
#define TMRA_CNTER_CNT_1                               ((uint16_t)0x0002U)
#define TMRA_CNTER_CNT_2                               ((uint16_t)0x0004U)
#define TMRA_CNTER_CNT_3                               ((uint16_t)0x0008U)
#define TMRA_CNTER_CNT_4                               ((uint16_t)0x0010U)
#define TMRA_CNTER_CNT_5                               ((uint16_t)0x0020U)
#define TMRA_CNTER_CNT_6                               ((uint16_t)0x0040U)
#define TMRA_CNTER_CNT_7                               ((uint16_t)0x0080U)
#define TMRA_CNTER_CNT_8                               ((uint16_t)0x0100U)
#define TMRA_CNTER_CNT_9                               ((uint16_t)0x0200U)
#define TMRA_CNTER_CNT_10                              ((uint16_t)0x0400U)
#define TMRA_CNTER_CNT_11                              ((uint16_t)0x0800U)
#define TMRA_CNTER_CNT_12                              ((uint16_t)0x1000U)
#define TMRA_CNTER_CNT_13                              ((uint16_t)0x2000U)
#define TMRA_CNTER_CNT_14                              ((uint16_t)0x4000U)
#define TMRA_CNTER_CNT_15                              ((uint16_t)0x8000U)

/*  Bit definition for TMRA_PERAR register  */
#define TMRA_PERAR_PER_POS                             (0U)
#define TMRA_PERAR_PER                                 ((uint16_t)0xFFFFU)
#define TMRA_PERAR_PER_0                               ((uint16_t)0x0001U)
#define TMRA_PERAR_PER_1                               ((uint16_t)0x0002U)
#define TMRA_PERAR_PER_2                               ((uint16_t)0x0004U)
#define TMRA_PERAR_PER_3                               ((uint16_t)0x0008U)
#define TMRA_PERAR_PER_4                               ((uint16_t)0x0010U)
#define TMRA_PERAR_PER_5                               ((uint16_t)0x0020U)
#define TMRA_PERAR_PER_6                               ((uint16_t)0x0040U)
#define TMRA_PERAR_PER_7                               ((uint16_t)0x0080U)
#define TMRA_PERAR_PER_8                               ((uint16_t)0x0100U)
#define TMRA_PERAR_PER_9                               ((uint16_t)0x0200U)
#define TMRA_PERAR_PER_10                              ((uint16_t)0x0400U)
#define TMRA_PERAR_PER_11                              ((uint16_t)0x0800U)
#define TMRA_PERAR_PER_12                              ((uint16_t)0x1000U)
#define TMRA_PERAR_PER_13                              ((uint16_t)0x2000U)
#define TMRA_PERAR_PER_14                              ((uint16_t)0x4000U)
#define TMRA_PERAR_PER_15                              ((uint16_t)0x8000U)

/*  Bit definition for TMRA_CMPAR register  */
#define TMRA_CMPAR_CMP_POS                             (0U)
#define TMRA_CMPAR_CMP                                 ((uint16_t)0xFFFFU)
#define TMRA_CMPAR_CMP_0                               ((uint16_t)0x0001U)
#define TMRA_CMPAR_CMP_1                               ((uint16_t)0x0002U)
#define TMRA_CMPAR_CMP_2                               ((uint16_t)0x0004U)
#define TMRA_CMPAR_CMP_3                               ((uint16_t)0x0008U)
#define TMRA_CMPAR_CMP_4                               ((uint16_t)0x0010U)
#define TMRA_CMPAR_CMP_5                               ((uint16_t)0x0020U)
#define TMRA_CMPAR_CMP_6                               ((uint16_t)0x0040U)
#define TMRA_CMPAR_CMP_7                               ((uint16_t)0x0080U)
#define TMRA_CMPAR_CMP_8                               ((uint16_t)0x0100U)
#define TMRA_CMPAR_CMP_9                               ((uint16_t)0x0200U)
#define TMRA_CMPAR_CMP_10                              ((uint16_t)0x0400U)
#define TMRA_CMPAR_CMP_11                              ((uint16_t)0x0800U)
#define TMRA_CMPAR_CMP_12                              ((uint16_t)0x1000U)
#define TMRA_CMPAR_CMP_13                              ((uint16_t)0x2000U)
#define TMRA_CMPAR_CMP_14                              ((uint16_t)0x4000U)
#define TMRA_CMPAR_CMP_15                              ((uint16_t)0x8000U)

/*  Bit definition for TMRA_BCSTR register  */
#define TMRA_BCSTR_START_POS                           (0U)
#define TMRA_BCSTR_START                               ((uint16_t)0x0001U)
#define TMRA_BCSTR_DIR_POS                             (1U)
#define TMRA_BCSTR_DIR                                 ((uint16_t)0x0002U)
#define TMRA_BCSTR_MODE_POS                            (2U)
#define TMRA_BCSTR_MODE                                ((uint16_t)0x0004U)
#define TMRA_BCSTR_SYNST_POS                           (3U)
#define TMRA_BCSTR_SYNST                               ((uint16_t)0x0008U)
#define TMRA_BCSTR_CKDIV_POS                           (4U)
#define TMRA_BCSTR_CKDIV                               ((uint16_t)0x00F0U)
#define TMRA_BCSTR_CKDIV_0                             ((uint16_t)0x0010U)
#define TMRA_BCSTR_CKDIV_1                             ((uint16_t)0x0020U)
#define TMRA_BCSTR_CKDIV_2                             ((uint16_t)0x0040U)
#define TMRA_BCSTR_CKDIV_3                             ((uint16_t)0x0080U)
#define TMRA_BCSTR_OVSTP_POS                           (8U)
#define TMRA_BCSTR_OVSTP                               ((uint16_t)0x0100U)
#define TMRA_BCSTR_INENOVF_POS                         (12U)
#define TMRA_BCSTR_INENOVF                             ((uint16_t)0x1000U)
#define TMRA_BCSTR_INENUDF_POS                         (13U)
#define TMRA_BCSTR_INENUDF                             ((uint16_t)0x2000U)
#define TMRA_BCSTR_OVFF_POS                            (14U)
#define TMRA_BCSTR_OVFF                                ((uint16_t)0x4000U)
#define TMRA_BCSTR_UDFF_POS                            (15U)
#define TMRA_BCSTR_UDFF                                ((uint16_t)0x8000U)

/*  Bit definition for TMRA_HCONR register  */
#define TMRA_HCONR_HSTA0_POS                           (0U)
#define TMRA_HCONR_HSTA0                               ((uint16_t)0x0001U)
#define TMRA_HCONR_HSTA1_POS                           (1U)
#define TMRA_HCONR_HSTA1                               ((uint16_t)0x0002U)
#define TMRA_HCONR_HSTA2_POS                           (2U)
#define TMRA_HCONR_HSTA2                               ((uint16_t)0x0004U)
#define TMRA_HCONR_HSTP0_POS                           (4U)
#define TMRA_HCONR_HSTP0                               ((uint16_t)0x0010U)
#define TMRA_HCONR_HSTP1_POS                           (5U)
#define TMRA_HCONR_HSTP1                               ((uint16_t)0x0020U)
#define TMRA_HCONR_HSTP2_POS                           (6U)
#define TMRA_HCONR_HSTP2                               ((uint16_t)0x0040U)
#define TMRA_HCONR_HCLE0_POS                           (8U)
#define TMRA_HCONR_HCLE0                               ((uint16_t)0x0100U)
#define TMRA_HCONR_HCLE1_POS                           (9U)
#define TMRA_HCONR_HCLE1                               ((uint16_t)0x0200U)
#define TMRA_HCONR_HCLE2_POS                           (10U)
#define TMRA_HCONR_HCLE2                               ((uint16_t)0x0400U)
#define TMRA_HCONR_HCLE3_POS                           (12U)
#define TMRA_HCONR_HCLE3                               ((uint16_t)0x1000U)
#define TMRA_HCONR_HCLE4_POS                           (13U)
#define TMRA_HCONR_HCLE4                               ((uint16_t)0x2000U)

/*  Bit definition for TMRA_HCUPR register  */
#define TMRA_HCUPR_HCUP0_POS                           (0U)
#define TMRA_HCUPR_HCUP0                               ((uint16_t)0x0001U)
#define TMRA_HCUPR_HCUP1_POS                           (1U)
#define TMRA_HCUPR_HCUP1                               ((uint16_t)0x0002U)
#define TMRA_HCUPR_HCUP2_POS                           (2U)
#define TMRA_HCUPR_HCUP2                               ((uint16_t)0x0004U)
#define TMRA_HCUPR_HCUP3_POS                           (3U)
#define TMRA_HCUPR_HCUP3                               ((uint16_t)0x0008U)
#define TMRA_HCUPR_HCUP4_POS                           (4U)
#define TMRA_HCUPR_HCUP4                               ((uint16_t)0x0010U)
#define TMRA_HCUPR_HCUP5_POS                           (5U)
#define TMRA_HCUPR_HCUP5                               ((uint16_t)0x0020U)
#define TMRA_HCUPR_HCUP6_POS                           (6U)
#define TMRA_HCUPR_HCUP6                               ((uint16_t)0x0040U)
#define TMRA_HCUPR_HCUP7_POS                           (7U)
#define TMRA_HCUPR_HCUP7                               ((uint16_t)0x0080U)
#define TMRA_HCUPR_HCUP8_POS                           (8U)
#define TMRA_HCUPR_HCUP8                               ((uint16_t)0x0100U)
#define TMRA_HCUPR_HCUP9_POS                           (9U)
#define TMRA_HCUPR_HCUP9                               ((uint16_t)0x0200U)
#define TMRA_HCUPR_HCUP10_POS                          (10U)
#define TMRA_HCUPR_HCUP10                              ((uint16_t)0x0400U)
#define TMRA_HCUPR_HCUP11_POS                          (11U)
#define TMRA_HCUPR_HCUP11                              ((uint16_t)0x0800U)
#define TMRA_HCUPR_HCUP12_POS                          (12U)
#define TMRA_HCUPR_HCUP12                              ((uint16_t)0x1000U)

/*  Bit definition for TMRA_HCDOR register  */
#define TMRA_HCDOR_HCDO0_POS                           (0U)
#define TMRA_HCDOR_HCDO0                               ((uint16_t)0x0001U)
#define TMRA_HCDOR_HCDO1_POS                           (1U)
#define TMRA_HCDOR_HCDO1                               ((uint16_t)0x0002U)
#define TMRA_HCDOR_HCDO2_POS                           (2U)
#define TMRA_HCDOR_HCDO2                               ((uint16_t)0x0004U)
#define TMRA_HCDOR_HCDO3_POS                           (3U)
#define TMRA_HCDOR_HCDO3                               ((uint16_t)0x0008U)
#define TMRA_HCDOR_HCDO4_POS                           (4U)
#define TMRA_HCDOR_HCDO4                               ((uint16_t)0x0010U)
#define TMRA_HCDOR_HCDO5_POS                           (5U)
#define TMRA_HCDOR_HCDO5                               ((uint16_t)0x0020U)
#define TMRA_HCDOR_HCDO6_POS                           (6U)
#define TMRA_HCDOR_HCDO6                               ((uint16_t)0x0040U)
#define TMRA_HCDOR_HCDO7_POS                           (7U)
#define TMRA_HCDOR_HCDO7                               ((uint16_t)0x0080U)
#define TMRA_HCDOR_HCDO8_POS                           (8U)
#define TMRA_HCDOR_HCDO8                               ((uint16_t)0x0100U)
#define TMRA_HCDOR_HCDO9_POS                           (9U)
#define TMRA_HCDOR_HCDO9                               ((uint16_t)0x0200U)
#define TMRA_HCDOR_HCDO10_POS                          (10U)
#define TMRA_HCDOR_HCDO10                              ((uint16_t)0x0400U)
#define TMRA_HCDOR_HCDO11_POS                          (11U)
#define TMRA_HCDOR_HCDO11                              ((uint16_t)0x0800U)
#define TMRA_HCDOR_HCDO12_POS                          (12U)
#define TMRA_HCDOR_HCDO12                              ((uint16_t)0x1000U)

/*  Bit definition for TMRA_ICONR register  */
#define TMRA_ICONR_ITEN1_POS                           (0U)
#define TMRA_ICONR_ITEN1                               ((uint16_t)0x0001U)
#define TMRA_ICONR_ITEN2_POS                           (1U)
#define TMRA_ICONR_ITEN2                               ((uint16_t)0x0002U)

/*  Bit definition for TMRA_ECONR register  */
#define TMRA_ECONR_ETEN1_POS                           (0U)
#define TMRA_ECONR_ETEN1                               ((uint16_t)0x0001U)
#define TMRA_ECONR_ETEN2_POS                           (1U)
#define TMRA_ECONR_ETEN2                               ((uint16_t)0x0002U)

/*  Bit definition for TMRA_FCONR register  */
#define TMRA_FCONR_NOFIENTG_POS                        (0U)
#define TMRA_FCONR_NOFIENTG                            ((uint16_t)0x0001U)
#define TMRA_FCONR_NOFICKTG_POS                        (1U)
#define TMRA_FCONR_NOFICKTG                            ((uint16_t)0x0006U)
#define TMRA_FCONR_NOFICKTG_0                          ((uint16_t)0x0002U)
#define TMRA_FCONR_NOFICKTG_1                          ((uint16_t)0x0004U)
#define TMRA_FCONR_NOFIENCA_POS                        (8U)
#define TMRA_FCONR_NOFIENCA                            ((uint16_t)0x0100U)
#define TMRA_FCONR_NOFICKCA_POS                        (9U)
#define TMRA_FCONR_NOFICKCA                            ((uint16_t)0x0600U)
#define TMRA_FCONR_NOFICKCA_0                          ((uint16_t)0x0200U)
#define TMRA_FCONR_NOFICKCA_1                          ((uint16_t)0x0400U)
#define TMRA_FCONR_NOFIENCB_POS                        (12U)
#define TMRA_FCONR_NOFIENCB                            ((uint16_t)0x1000U)
#define TMRA_FCONR_NOFICKCB_POS                        (13U)
#define TMRA_FCONR_NOFICKCB                            ((uint16_t)0x6000U)
#define TMRA_FCONR_NOFICKCB_0                          ((uint16_t)0x2000U)
#define TMRA_FCONR_NOFICKCB_1                          ((uint16_t)0x4000U)

/*  Bit definition for TMRA_STFLR register  */
#define TMRA_STFLR_CMPF1_POS                           (0U)
#define TMRA_STFLR_CMPF1                               ((uint16_t)0x0001U)
#define TMRA_STFLR_CMPF2_POS                           (1U)
#define TMRA_STFLR_CMPF2                               ((uint16_t)0x0002U)

/*  Bit definition for TMRA_BCONR register  */
#define TMRA_BCONR_BEN_POS                             (0U)
#define TMRA_BCONR_BEN                                 ((uint16_t)0x0001U)
#define TMRA_BCONR_BSE0_POS                            (1U)
#define TMRA_BCONR_BSE0                                ((uint16_t)0x0002U)
#define TMRA_BCONR_BSE1_POS                            (2U)
#define TMRA_BCONR_BSE1                                ((uint16_t)0x0004U)

/*  Bit definition for TMRA_CCONR register  */
#define TMRA_CCONR_CAPMD_POS                           (0U)
#define TMRA_CCONR_CAPMD                               ((uint16_t)0x0001U)
#define TMRA_CCONR_HICP0_POS                           (4U)
#define TMRA_CCONR_HICP0                               ((uint16_t)0x0010U)
#define TMRA_CCONR_HICP1_POS                           (5U)
#define TMRA_CCONR_HICP1                               ((uint16_t)0x0020U)
#define TMRA_CCONR_HICP2_POS                           (6U)
#define TMRA_CCONR_HICP2                               ((uint16_t)0x0040U)
#define TMRA_CCONR_NOFIENCP_POS                        (12U)
#define TMRA_CCONR_NOFIENCP                            ((uint16_t)0x1000U)
#define TMRA_CCONR_NOFICKCP_POS                        (13U)
#define TMRA_CCONR_NOFICKCP                            ((uint16_t)0x6000U)
#define TMRA_CCONR_NOFICKCP_0                          ((uint16_t)0x2000U)
#define TMRA_CCONR_NOFICKCP_1                          ((uint16_t)0x4000U)

/*  Bit definition for TMRA_PCONR register  */
#define TMRA_PCONR_STAC_POS                            (0U)
#define TMRA_PCONR_STAC                                ((uint16_t)0x0003U)
#define TMRA_PCONR_STAC_0                              ((uint16_t)0x0001U)
#define TMRA_PCONR_STAC_1                              ((uint16_t)0x0002U)
#define TMRA_PCONR_STPC_POS                            (2U)
#define TMRA_PCONR_STPC                                ((uint16_t)0x000CU)
#define TMRA_PCONR_STPC_0                              ((uint16_t)0x0004U)
#define TMRA_PCONR_STPC_1                              ((uint16_t)0x0008U)
#define TMRA_PCONR_CMPC_POS                            (4U)
#define TMRA_PCONR_CMPC                                ((uint16_t)0x0030U)
#define TMRA_PCONR_CMPC_0                              ((uint16_t)0x0010U)
#define TMRA_PCONR_CMPC_1                              ((uint16_t)0x0020U)
#define TMRA_PCONR_PERC_POS                            (6U)
#define TMRA_PCONR_PERC                                ((uint16_t)0x00C0U)
#define TMRA_PCONR_PERC_0                              ((uint16_t)0x0040U)
#define TMRA_PCONR_PERC_1                              ((uint16_t)0x0080U)
#define TMRA_PCONR_FORC_POS                            (8U)
#define TMRA_PCONR_FORC                                ((uint16_t)0x0300U)
#define TMRA_PCONR_FORC_0                              ((uint16_t)0x0100U)
#define TMRA_PCONR_FORC_1                              ((uint16_t)0x0200U)
#define TMRA_PCONR_OUTEN_POS                           (12U)
#define TMRA_PCONR_OUTEN                               ((uint16_t)0x1000U)


/*******************************************************************************
                Bit definition for Peripheral TMRB
*******************************************************************************/
/*  Bit definition for TMRB_CNTER register  */
#define TMRB_CNTER_CNT_POS                             (0U)
#define TMRB_CNTER_CNT                                 ((uint16_t)0xFFFFU)
#define TMRB_CNTER_CNT_0                               ((uint16_t)0x0001U)
#define TMRB_CNTER_CNT_1                               ((uint16_t)0x0002U)
#define TMRB_CNTER_CNT_2                               ((uint16_t)0x0004U)
#define TMRB_CNTER_CNT_3                               ((uint16_t)0x0008U)
#define TMRB_CNTER_CNT_4                               ((uint16_t)0x0010U)
#define TMRB_CNTER_CNT_5                               ((uint16_t)0x0020U)
#define TMRB_CNTER_CNT_6                               ((uint16_t)0x0040U)
#define TMRB_CNTER_CNT_7                               ((uint16_t)0x0080U)
#define TMRB_CNTER_CNT_8                               ((uint16_t)0x0100U)
#define TMRB_CNTER_CNT_9                               ((uint16_t)0x0200U)
#define TMRB_CNTER_CNT_10                              ((uint16_t)0x0400U)
#define TMRB_CNTER_CNT_11                              ((uint16_t)0x0800U)
#define TMRB_CNTER_CNT_12                              ((uint16_t)0x1000U)
#define TMRB_CNTER_CNT_13                              ((uint16_t)0x2000U)
#define TMRB_CNTER_CNT_14                              ((uint16_t)0x4000U)
#define TMRB_CNTER_CNT_15                              ((uint16_t)0x8000U)

/*  Bit definition for TMRB_PERAR register  */
#define TMRB_PERAR_PER_POS                             (0U)
#define TMRB_PERAR_PER                                 ((uint16_t)0xFFFFU)
#define TMRB_PERAR_PER_0                               ((uint16_t)0x0001U)
#define TMRB_PERAR_PER_1                               ((uint16_t)0x0002U)
#define TMRB_PERAR_PER_2                               ((uint16_t)0x0004U)
#define TMRB_PERAR_PER_3                               ((uint16_t)0x0008U)
#define TMRB_PERAR_PER_4                               ((uint16_t)0x0010U)
#define TMRB_PERAR_PER_5                               ((uint16_t)0x0020U)
#define TMRB_PERAR_PER_6                               ((uint16_t)0x0040U)
#define TMRB_PERAR_PER_7                               ((uint16_t)0x0080U)
#define TMRB_PERAR_PER_8                               ((uint16_t)0x0100U)
#define TMRB_PERAR_PER_9                               ((uint16_t)0x0200U)
#define TMRB_PERAR_PER_10                              ((uint16_t)0x0400U)
#define TMRB_PERAR_PER_11                              ((uint16_t)0x0800U)
#define TMRB_PERAR_PER_12                              ((uint16_t)0x1000U)
#define TMRB_PERAR_PER_13                              ((uint16_t)0x2000U)
#define TMRB_PERAR_PER_14                              ((uint16_t)0x4000U)
#define TMRB_PERAR_PER_15                              ((uint16_t)0x8000U)

/*  Bit definition for TMRB_CMPAR register  */
#define TMRB_CMPAR_CMP_POS                             (0U)
#define TMRB_CMPAR_CMP                                 ((uint16_t)0xFFFFU)
#define TMRB_CMPAR_CMP_0                               ((uint16_t)0x0001U)
#define TMRB_CMPAR_CMP_1                               ((uint16_t)0x0002U)
#define TMRB_CMPAR_CMP_2                               ((uint16_t)0x0004U)
#define TMRB_CMPAR_CMP_3                               ((uint16_t)0x0008U)
#define TMRB_CMPAR_CMP_4                               ((uint16_t)0x0010U)
#define TMRB_CMPAR_CMP_5                               ((uint16_t)0x0020U)
#define TMRB_CMPAR_CMP_6                               ((uint16_t)0x0040U)
#define TMRB_CMPAR_CMP_7                               ((uint16_t)0x0080U)
#define TMRB_CMPAR_CMP_8                               ((uint16_t)0x0100U)
#define TMRB_CMPAR_CMP_9                               ((uint16_t)0x0200U)
#define TMRB_CMPAR_CMP_10                              ((uint16_t)0x0400U)
#define TMRB_CMPAR_CMP_11                              ((uint16_t)0x0800U)
#define TMRB_CMPAR_CMP_12                              ((uint16_t)0x1000U)
#define TMRB_CMPAR_CMP_13                              ((uint16_t)0x2000U)
#define TMRB_CMPAR_CMP_14                              ((uint16_t)0x4000U)
#define TMRB_CMPAR_CMP_15                              ((uint16_t)0x8000U)

/*  Bit definition for TMRB_BCSTR register  */
#define TMRB_BCSTR_START_POS                           (0U)
#define TMRB_BCSTR_START                               ((uint16_t)0x0001U)
#define TMRB_BCSTR_DIR_POS                             (1U)
#define TMRB_BCSTR_DIR                                 ((uint16_t)0x0002U)
#define TMRB_BCSTR_MODE_POS                            (2U)
#define TMRB_BCSTR_MODE                                ((uint16_t)0x0004U)
#define TMRB_BCSTR_CKDIV_POS                           (4U)
#define TMRB_BCSTR_CKDIV                               ((uint16_t)0x00F0U)
#define TMRB_BCSTR_CKDIV_0                             ((uint16_t)0x0010U)
#define TMRB_BCSTR_CKDIV_1                             ((uint16_t)0x0020U)
#define TMRB_BCSTR_CKDIV_2                             ((uint16_t)0x0040U)
#define TMRB_BCSTR_CKDIV_3                             ((uint16_t)0x0080U)
#define TMRB_BCSTR_OVSTP_POS                           (8U)
#define TMRB_BCSTR_OVSTP                               ((uint16_t)0x0100U)
#define TMRB_BCSTR_INENOVF_POS                         (12U)
#define TMRB_BCSTR_INENOVF                             ((uint16_t)0x1000U)
#define TMRB_BCSTR_INENUDF_POS                         (13U)
#define TMRB_BCSTR_INENUDF                             ((uint16_t)0x2000U)
#define TMRB_BCSTR_OVFF_POS                            (14U)
#define TMRB_BCSTR_OVFF                                ((uint16_t)0x4000U)
#define TMRB_BCSTR_UDFF_POS                            (15U)
#define TMRB_BCSTR_UDFF                                ((uint16_t)0x8000U)

/*  Bit definition for TMRB_HCONR register  */
#define TMRB_HCONR_HSTA0_POS                           (0U)
#define TMRB_HCONR_HSTA0                               ((uint16_t)0x0001U)
#define TMRB_HCONR_HSTA1_POS                           (1U)
#define TMRB_HCONR_HSTA1                               ((uint16_t)0x0002U)
#define TMRB_HCONR_HSTA2_POS                           (2U)
#define TMRB_HCONR_HSTA2                               ((uint16_t)0x0004U)
#define TMRB_HCONR_HSTP0_POS                           (4U)
#define TMRB_HCONR_HSTP0                               ((uint16_t)0x0010U)
#define TMRB_HCONR_HSTP1_POS                           (5U)
#define TMRB_HCONR_HSTP1                               ((uint16_t)0x0020U)
#define TMRB_HCONR_HSTP2_POS                           (6U)
#define TMRB_HCONR_HSTP2                               ((uint16_t)0x0040U)
#define TMRB_HCONR_HCLE0_POS                           (8U)
#define TMRB_HCONR_HCLE0                               ((uint16_t)0x0100U)
#define TMRB_HCONR_HCLE1_POS                           (9U)
#define TMRB_HCONR_HCLE1                               ((uint16_t)0x0200U)
#define TMRB_HCONR_HCLE2_POS                           (10U)
#define TMRB_HCONR_HCLE2                               ((uint16_t)0x0400U)
#define TMRB_HCONR_HCLE5_POS                           (14U)
#define TMRB_HCONR_HCLE5                               ((uint16_t)0x4000U)
#define TMRB_HCONR_HCLE6_POS                           (15U)
#define TMRB_HCONR_HCLE6                               ((uint16_t)0x8000U)

/*  Bit definition for TMRB_HCUPR register  */
#define TMRB_HCUPR_HCUP8_POS                           (8U)
#define TMRB_HCUPR_HCUP8                               ((uint16_t)0x0100U)
#define TMRB_HCUPR_HCUP9_POS                           (9U)
#define TMRB_HCUPR_HCUP9                               ((uint16_t)0x0200U)
#define TMRB_HCUPR_HCUP10_POS                          (10U)
#define TMRB_HCUPR_HCUP10                              ((uint16_t)0x0400U)

/*  Bit definition for TMRB_HCDOR register  */
#define TMRB_HCDOR_HCDO8_POS                           (8U)
#define TMRB_HCDOR_HCDO8                               ((uint16_t)0x0100U)
#define TMRB_HCDOR_HCDO9_POS                           (9U)
#define TMRB_HCDOR_HCDO9                               ((uint16_t)0x0200U)
#define TMRB_HCDOR_HCDO10_POS                          (10U)
#define TMRB_HCDOR_HCDO10                              ((uint16_t)0x0400U)

/*  Bit definition for TMRB_ICONR register  */
#define TMRB_ICONR_ITEN1_POS                           (0U)
#define TMRB_ICONR_ITEN1                               ((uint16_t)0x0001U)
#define TMRB_ICONR_ITEN2_POS                           (1U)
#define TMRB_ICONR_ITEN2                               ((uint16_t)0x0002U)
#define TMRB_ICONR_ITEN3_POS                           (2U)
#define TMRB_ICONR_ITEN3                               ((uint16_t)0x0004U)
#define TMRB_ICONR_ITEN4_POS                           (3U)
#define TMRB_ICONR_ITEN4                               ((uint16_t)0x0008U)
#define TMRB_ICONR_ITEN5_POS                           (4U)
#define TMRB_ICONR_ITEN5                               ((uint16_t)0x0010U)
#define TMRB_ICONR_ITEN6_POS                           (5U)
#define TMRB_ICONR_ITEN6                               ((uint16_t)0x0020U)

/*  Bit definition for TMRB_ECONR register  */
#define TMRB_ECONR_ETEN1_POS                           (0U)
#define TMRB_ECONR_ETEN1                               ((uint16_t)0x0001U)
#define TMRB_ECONR_ETEN2_POS                           (1U)
#define TMRB_ECONR_ETEN2                               ((uint16_t)0x0002U)
#define TMRB_ECONR_ETEN3_POS                           (2U)
#define TMRB_ECONR_ETEN3                               ((uint16_t)0x0004U)
#define TMRB_ECONR_ETEN4_POS                           (3U)
#define TMRB_ECONR_ETEN4                               ((uint16_t)0x0008U)
#define TMRB_ECONR_ETEN5_POS                           (4U)
#define TMRB_ECONR_ETEN5                               ((uint16_t)0x0010U)
#define TMRB_ECONR_ETEN6_POS                           (5U)
#define TMRB_ECONR_ETEN6                               ((uint16_t)0x0020U)

/*  Bit definition for TMRB_STFLR register  */
#define TMRB_STFLR_CMPF1_POS                           (0U)
#define TMRB_STFLR_CMPF1                               ((uint16_t)0x0001U)
#define TMRB_STFLR_CMPF2_POS                           (1U)
#define TMRB_STFLR_CMPF2                               ((uint16_t)0x0002U)
#define TMRB_STFLR_CMPF3_POS                           (2U)
#define TMRB_STFLR_CMPF3                               ((uint16_t)0x0004U)
#define TMRB_STFLR_CMPF4_POS                           (3U)
#define TMRB_STFLR_CMPF4                               ((uint16_t)0x0008U)
#define TMRB_STFLR_CMPF5_POS                           (4U)
#define TMRB_STFLR_CMPF5                               ((uint16_t)0x0010U)
#define TMRB_STFLR_CMPF6_POS                           (5U)
#define TMRB_STFLR_CMPF6                               ((uint16_t)0x0020U)

/*  Bit definition for TMRB_BCONR register  */
#define TMRB_BCONR_BEN_POS                             (0U)
#define TMRB_BCONR_BEN                                 ((uint16_t)0x0001U)
#define TMRB_BCONR_BSE0_POS                            (1U)
#define TMRB_BCONR_BSE0                                ((uint16_t)0x0002U)
#define TMRB_BCONR_BSE1_POS                            (2U)
#define TMRB_BCONR_BSE1                                ((uint16_t)0x0004U)

/*  Bit definition for TMRB_CCONR register  */
#define TMRB_CCONR_CAPMDA_POS                          (0U)
#define TMRB_CCONR_CAPMDA                              ((uint16_t)0x0001U)
#define TMRB_CCONR_HICP0_POS                           (4U)
#define TMRB_CCONR_HICP0                               ((uint16_t)0x0010U)
#define TMRB_CCONR_HICP1_POS                           (5U)
#define TMRB_CCONR_HICP1                               ((uint16_t)0x0020U)
#define TMRB_CCONR_HICP2_POS                           (6U)
#define TMRB_CCONR_HICP2                               ((uint16_t)0x0040U)
#define TMRB_CCONR_NOFIENCP_POS                        (12U)
#define TMRB_CCONR_NOFIENCP                            ((uint16_t)0x1000U)
#define TMRB_CCONR_NOFICKCP_POS                        (13U)
#define TMRB_CCONR_NOFICKCP                            ((uint16_t)0x6000U)
#define TMRB_CCONR_NOFICKCP_0                          ((uint16_t)0x2000U)
#define TMRB_CCONR_NOFICKCP_1                          ((uint16_t)0x4000U)

/*  Bit definition for TMRB_PCONR register  */
#define TMRB_PCONR_STAC_POS                            (0U)
#define TMRB_PCONR_STAC                                ((uint16_t)0x0003U)
#define TMRB_PCONR_STAC_0                              ((uint16_t)0x0001U)
#define TMRB_PCONR_STAC_1                              ((uint16_t)0x0002U)
#define TMRB_PCONR_STPC_POS                            (2U)
#define TMRB_PCONR_STPC                                ((uint16_t)0x000CU)
#define TMRB_PCONR_STPC_0                              ((uint16_t)0x0004U)
#define TMRB_PCONR_STPC_1                              ((uint16_t)0x0008U)
#define TMRB_PCONR_CMPC_POS                            (4U)
#define TMRB_PCONR_CMPC                                ((uint16_t)0x0030U)
#define TMRB_PCONR_CMPC_0                              ((uint16_t)0x0010U)
#define TMRB_PCONR_CMPC_1                              ((uint16_t)0x0020U)
#define TMRB_PCONR_PERC_POS                            (6U)
#define TMRB_PCONR_PERC                                ((uint16_t)0x00C0U)
#define TMRB_PCONR_PERC_0                              ((uint16_t)0x0040U)
#define TMRB_PCONR_PERC_1                              ((uint16_t)0x0080U)
#define TMRB_PCONR_FORC_POS                            (8U)
#define TMRB_PCONR_FORC                                ((uint16_t)0x0300U)
#define TMRB_PCONR_FORC_0                              ((uint16_t)0x0100U)
#define TMRB_PCONR_FORC_1                              ((uint16_t)0x0200U)
#define TMRB_PCONR_OUTEN_POS                           (12U)
#define TMRB_PCONR_OUTEN                               ((uint16_t)0x1000U)


/*******************************************************************************
                Bit definition for Peripheral USART
*******************************************************************************/
/*  Bit definition for USART_SR register  */
#define USART_SR_PE_POS                                (0U)
#define USART_SR_PE                                    ((uint32_t)0x00000001U)
#define USART_SR_FE_POS                                (1U)
#define USART_SR_FE                                    ((uint32_t)0x00000002U)
#define USART_SR_ORE_POS                               (3U)
#define USART_SR_ORE                                   ((uint32_t)0x00000008U)
#define USART_SR_RXNE_POS                              (5U)
#define USART_SR_RXNE                                  ((uint32_t)0x00000020U)
#define USART_SR_TC_POS                                (6U)
#define USART_SR_TC                                    ((uint32_t)0x00000040U)
#define USART_SR_TXE_POS                               (7U)
#define USART_SR_TXE                                   ((uint32_t)0x00000080U)
#define USART_SR_MPB_POS                               (16U)
#define USART_SR_MPB                                   ((uint32_t)0x00010000U)

/*  Bit definition for USART_DR register  */
#define USART_DR_TDR_POS                               (0U)
#define USART_DR_TDR                                   ((uint32_t)0x000001FFU)
#define USART_DR_TDR_0                                 ((uint32_t)0x00000001U)
#define USART_DR_TDR_1                                 ((uint32_t)0x00000002U)
#define USART_DR_TDR_2                                 ((uint32_t)0x00000004U)
#define USART_DR_TDR_3                                 ((uint32_t)0x00000008U)
#define USART_DR_TDR_4                                 ((uint32_t)0x00000010U)
#define USART_DR_TDR_5                                 ((uint32_t)0x00000020U)
#define USART_DR_TDR_6                                 ((uint32_t)0x00000040U)
#define USART_DR_TDR_7                                 ((uint32_t)0x00000080U)
#define USART_DR_TDR_8                                 ((uint32_t)0x00000100U)
#define USART_DR_MPID_POS                              (9U)
#define USART_DR_MPID                                  ((uint32_t)0x00000200U)
#define USART_DR_RDR_POS                               (16U)
#define USART_DR_RDR                                   ((uint32_t)0x01FF0000U)
#define USART_DR_RDR_0                                 ((uint32_t)0x00010000U)
#define USART_DR_RDR_1                                 ((uint32_t)0x00020000U)
#define USART_DR_RDR_2                                 ((uint32_t)0x00040000U)
#define USART_DR_RDR_3                                 ((uint32_t)0x00080000U)
#define USART_DR_RDR_4                                 ((uint32_t)0x00100000U)
#define USART_DR_RDR_5                                 ((uint32_t)0x00200000U)
#define USART_DR_RDR_6                                 ((uint32_t)0x00400000U)
#define USART_DR_RDR_7                                 ((uint32_t)0x00800000U)
#define USART_DR_RDR_8                                 ((uint32_t)0x01000000U)

/*  Bit definition for USART_BRR register  */
#define USART_BRR_DIV_INTEGER_POS                      (8U)
#define USART_BRR_DIV_INTEGER                          ((uint32_t)0x0000FF00U)
#define USART_BRR_DIV_INTEGER_0                        ((uint32_t)0x00000100U)
#define USART_BRR_DIV_INTEGER_1                        ((uint32_t)0x00000200U)
#define USART_BRR_DIV_INTEGER_2                        ((uint32_t)0x00000400U)
#define USART_BRR_DIV_INTEGER_3                        ((uint32_t)0x00000800U)
#define USART_BRR_DIV_INTEGER_4                        ((uint32_t)0x00001000U)
#define USART_BRR_DIV_INTEGER_5                        ((uint32_t)0x00002000U)
#define USART_BRR_DIV_INTEGER_6                        ((uint32_t)0x00004000U)
#define USART_BRR_DIV_INTEGER_7                        ((uint32_t)0x00008000U)

/*  Bit definition for USART_CR1 register  */
#define USART_CR1_RE_POS                               (2U)
#define USART_CR1_RE                                   ((uint32_t)0x00000004U)
#define USART_CR1_TE_POS                               (3U)
#define USART_CR1_TE                                   ((uint32_t)0x00000008U)
#define USART_CR1_SLME_POS                             (4U)
#define USART_CR1_SLME                                 ((uint32_t)0x00000010U)
#define USART_CR1_RIE_POS                              (5U)
#define USART_CR1_RIE                                  ((uint32_t)0x00000020U)
#define USART_CR1_TCIE_POS                             (6U)
#define USART_CR1_TCIE                                 ((uint32_t)0x00000040U)
#define USART_CR1_TXEIE_POS                            (7U)
#define USART_CR1_TXEIE                                ((uint32_t)0x00000080U)
#define USART_CR1_PS_POS                               (9U)
#define USART_CR1_PS                                   ((uint32_t)0x00000200U)
#define USART_CR1_PCE_POS                              (10U)
#define USART_CR1_PCE                                  ((uint32_t)0x00000400U)
#define USART_CR1_M_POS                                (12U)
#define USART_CR1_M                                    ((uint32_t)0x00001000U)
#define USART_CR1_OVER8_POS                            (15U)
#define USART_CR1_OVER8                                ((uint32_t)0x00008000U)
#define USART_CR1_CPE_POS                              (16U)
#define USART_CR1_CPE                                  ((uint32_t)0x00010000U)
#define USART_CR1_CFE_POS                              (17U)
#define USART_CR1_CFE                                  ((uint32_t)0x00020000U)
#define USART_CR1_CORE_POS                             (19U)
#define USART_CR1_CORE                                 ((uint32_t)0x00080000U)
#define USART_CR1_MS_POS                               (24U)
#define USART_CR1_MS                                   ((uint32_t)0x01000000U)
#define USART_CR1_ML_POS                               (28U)
#define USART_CR1_ML                                   ((uint32_t)0x10000000U)
#define USART_CR1_NFE_POS                              (30U)
#define USART_CR1_NFE                                  ((uint32_t)0x40000000U)
#define USART_CR1_SBS_POS                              (31U)
#define USART_CR1_SBS                                  ((uint32_t)0x80000000U)

/*  Bit definition for USART_CR2 register  */
#define USART_CR2_MPE_POS                              (0U)
#define USART_CR2_MPE                                  ((uint32_t)0x00000001U)
#define USART_CR2_CLKC_POS                             (11U)
#define USART_CR2_CLKC                                 ((uint32_t)0x00001800U)
#define USART_CR2_CLKC_0                               ((uint32_t)0x00000800U)
#define USART_CR2_CLKC_1                               ((uint32_t)0x00001000U)
#define USART_CR2_STOP_POS                             (13U)
#define USART_CR2_STOP                                 ((uint32_t)0x00002000U)

/*  Bit definition for USART_CR3 register  */
#define USART_CR3_HDSEL_POS                            (3U)
#define USART_CR3_HDSEL                                ((uint32_t)0x00000008U)
#define USART_CR3_CTSE_POS                             (9U)
#define USART_CR3_CTSE                                 ((uint32_t)0x00000200U)

/*  Bit definition for USART_PR register  */
#define USART_PR_PSC_POS                               (0U)
#define USART_PR_PSC                                   ((uint32_t)0x00000003U)
#define USART_PR_PSC_0                                 ((uint32_t)0x00000001U)
#define USART_PR_PSC_1                                 ((uint32_t)0x00000002U)


/*******************************************************************************
                Bit definition for Peripheral WDT
*******************************************************************************/
/*  Bit definition for WDT_CR register  */
#define WDT_CR_PERI_POS                                (0U)
#define WDT_CR_PERI                                    ((uint32_t)0x00000003U)
#define WDT_CR_PERI_0                                  ((uint32_t)0x00000001U)
#define WDT_CR_PERI_1                                  ((uint32_t)0x00000002U)
#define WDT_CR_CKS_POS                                 (4U)
#define WDT_CR_CKS                                     ((uint32_t)0x000000F0U)
#define WDT_CR_CKS_0                                   ((uint32_t)0x00000010U)
#define WDT_CR_CKS_1                                   ((uint32_t)0x00000020U)
#define WDT_CR_CKS_2                                   ((uint32_t)0x00000040U)
#define WDT_CR_CKS_3                                   ((uint32_t)0x00000080U)
#define WDT_CR_WDPT_POS                                (8U)
#define WDT_CR_WDPT                                    ((uint32_t)0x00000F00U)
#define WDT_CR_WDPT_0                                  ((uint32_t)0x00000100U)
#define WDT_CR_WDPT_1                                  ((uint32_t)0x00000200U)
#define WDT_CR_WDPT_2                                  ((uint32_t)0x00000400U)
#define WDT_CR_WDPT_3                                  ((uint32_t)0x00000800U)
#define WDT_CR_SLPOFF_POS                              (16U)
#define WDT_CR_SLPOFF                                  ((uint32_t)0x00010000U)
#define WDT_CR_ITS_POS                                 (31U)
#define WDT_CR_ITS                                     ((uint32_t)0x80000000U)

/*  Bit definition for WDT_SR register  */
#define WDT_SR_CNT_POS                                 (0U)
#define WDT_SR_CNT                                     ((uint32_t)0x0000FFFFU)
#define WDT_SR_CNT_0                                   ((uint32_t)0x00000001U)
#define WDT_SR_CNT_1                                   ((uint32_t)0x00000002U)
#define WDT_SR_CNT_2                                   ((uint32_t)0x00000004U)
#define WDT_SR_CNT_3                                   ((uint32_t)0x00000008U)
#define WDT_SR_CNT_4                                   ((uint32_t)0x00000010U)
#define WDT_SR_CNT_5                                   ((uint32_t)0x00000020U)
#define WDT_SR_CNT_6                                   ((uint32_t)0x00000040U)
#define WDT_SR_CNT_7                                   ((uint32_t)0x00000080U)
#define WDT_SR_CNT_8                                   ((uint32_t)0x00000100U)
#define WDT_SR_CNT_9                                   ((uint32_t)0x00000200U)
#define WDT_SR_CNT_10                                  ((uint32_t)0x00000400U)
#define WDT_SR_CNT_11                                  ((uint32_t)0x00000800U)
#define WDT_SR_CNT_12                                  ((uint32_t)0x00001000U)
#define WDT_SR_CNT_13                                  ((uint32_t)0x00002000U)
#define WDT_SR_CNT_14                                  ((uint32_t)0x00004000U)
#define WDT_SR_CNT_15                                  ((uint32_t)0x00008000U)
#define WDT_SR_UDF_POS                                 (16U)
#define WDT_SR_UDF                                     ((uint32_t)0x00010000U)
#define WDT_SR_REF_POS                                 (17U)
#define WDT_SR_REF                                     ((uint32_t)0x00020000U)

/*  Bit definition for WDT_RR register  */
#define WDT_RR_RF_POS                                  (0U)
#define WDT_RR_RF                                      ((uint32_t)0x0000FFFFU)
#define WDT_RR_RF_0                                    ((uint32_t)0x00000001U)
#define WDT_RR_RF_1                                    ((uint32_t)0x00000002U)
#define WDT_RR_RF_2                                    ((uint32_t)0x00000004U)
#define WDT_RR_RF_3                                    ((uint32_t)0x00000008U)
#define WDT_RR_RF_4                                    ((uint32_t)0x00000010U)
#define WDT_RR_RF_5                                    ((uint32_t)0x00000020U)
#define WDT_RR_RF_6                                    ((uint32_t)0x00000040U)
#define WDT_RR_RF_7                                    ((uint32_t)0x00000080U)
#define WDT_RR_RF_8                                    ((uint32_t)0x00000100U)
#define WDT_RR_RF_9                                    ((uint32_t)0x00000200U)
#define WDT_RR_RF_10                                   ((uint32_t)0x00000400U)
#define WDT_RR_RF_11                                   ((uint32_t)0x00000800U)
#define WDT_RR_RF_12                                   ((uint32_t)0x00001000U)
#define WDT_RR_RF_13                                   ((uint32_t)0x00002000U)
#define WDT_RR_RF_14                                   ((uint32_t)0x00004000U)
#define WDT_RR_RF_15                                   ((uint32_t)0x00008000U)




/******************************************************************************/
/*             Device Specific Registers bit_band structure                   */
/******************************************************************************/

typedef struct
{
    __IO uint32_t STRT;
    uint32_t RESERVED0[7];
} stc_adc_str_bit_t;

typedef struct
{
    __IO uint32_t MS0;
    __IO uint32_t MS1;
    uint32_t RESERVED0[2];
    __IO uint32_t ACCSEL0;
    __IO uint32_t ACCSEL1;
    __IO uint32_t CLREN;
    __IO uint32_t DFMT;
    __IO uint32_t AVCNT0;
    __IO uint32_t AVCNT1;
    __IO uint32_t AVCNT2;
    uint32_t RESERVED1[5];
} stc_adc_cr0_bit_t;

typedef struct
{
    uint32_t RESERVED0[2];
    __IO uint32_t RSCHSEL;
    uint32_t RESERVED1[13];
} stc_adc_cr1_bit_t;

typedef struct
{
    __IO uint32_t TRGSELA0;
    __IO uint32_t TRGSELA1;
    uint32_t RESERVED0[5];
    __IO uint32_t TRGENA;
    __IO uint32_t TRGSELB0;
    __IO uint32_t TRGSELB1;
    uint32_t RESERVED1[5];
    __IO uint32_t TRGENB;
} stc_adc_trgsr_bit_t;

typedef struct
{
    __IO uint32_t CHSELA0;
    __IO uint32_t CHSELA1;
    __IO uint32_t CHSELA2;
    __IO uint32_t CHSELA3;
    __IO uint32_t CHSELA4;
    __IO uint32_t CHSELA5;
    __IO uint32_t CHSELA6;
    __IO uint32_t CHSELA7;
    __IO uint32_t CHSELA8;
    __IO uint32_t CHSELA9;
    uint32_t RESERVED0[6];
} stc_adc_chselra0_bit_t;

typedef struct
{
    __IO uint32_t CHSELB0;
    __IO uint32_t CHSELB1;
    __IO uint32_t CHSELB2;
    __IO uint32_t CHSELB3;
    __IO uint32_t CHSELB4;
    __IO uint32_t CHSELB5;
    __IO uint32_t CHSELB6;
    __IO uint32_t CHSELB7;
    __IO uint32_t CHSELB8;
    __IO uint32_t CHSELB9;
    uint32_t RESERVED0[6];
} stc_adc_chselrb0_bit_t;

typedef struct
{
    __IO uint32_t AVCHSEL0;
    __IO uint32_t AVCHSEL1;
    __IO uint32_t AVCHSEL2;
    __IO uint32_t AVCHSEL3;
    __IO uint32_t AVCHSEL4;
    __IO uint32_t AVCHSEL5;
    __IO uint32_t AVCHSEL6;
    __IO uint32_t AVCHSEL7;
    __IO uint32_t AVCHSEL8;
    __IO uint32_t AVCHSEL9;
    uint32_t RESERVED0[6];
} stc_adc_avchselr0_bit_t;

typedef struct
{
    __IO uint32_t EXCHSEL;
    uint32_t RESERVED0[7];
} stc_adc_exchselr_bit_t;

typedef struct
{
    __IO uint32_t SHT0;
    __IO uint32_t SHT1;
    __IO uint32_t SHT2;
    __IO uint32_t SHT3;
    __IO uint32_t SHT4;
    __IO uint32_t SHT5;
    __IO uint32_t SHT6;
    __IO uint32_t SHT7;
    __IO uint32_t SHSEL0;
    __IO uint32_t SHSEL1;
    __IO uint32_t SHSEL2;
    uint32_t RESERVED0[4];
    __IO uint32_t SHMD;
} stc_adc_shcr_bit_t;

typedef struct
{
    uint32_t ADC_SSTR0_0;
    uint32_t ADC_SSTR0_1;
    uint32_t ADC_SSTR0_2;
    uint32_t ADC_SSTR0_3;
    uint32_t ADC_SSTR0_4;
    uint32_t ADC_SSTR0_5;
    uint32_t ADC_SSTR0_6;
    uint32_t ADC_SSTR0_7;
} stc_adc_sstr0_bit_t;

typedef struct
{
    uint32_t ADC_SSTR1_0;
    uint32_t ADC_SSTR1_1;
    uint32_t ADC_SSTR1_2;
    uint32_t ADC_SSTR1_3;
    uint32_t ADC_SSTR1_4;
    uint32_t ADC_SSTR1_5;
    uint32_t ADC_SSTR1_6;
    uint32_t ADC_SSTR1_7;
} stc_adc_sstr1_bit_t;

typedef struct
{
    uint32_t ADC_SSTR2_0;
    uint32_t ADC_SSTR2_1;
    uint32_t ADC_SSTR2_2;
    uint32_t ADC_SSTR2_3;
    uint32_t ADC_SSTR2_4;
    uint32_t ADC_SSTR2_5;
    uint32_t ADC_SSTR2_6;
    uint32_t ADC_SSTR2_7;
} stc_adc_sstr2_bit_t;

typedef struct
{
    uint32_t ADC_SSTR3_0;
    uint32_t ADC_SSTR3_1;
    uint32_t ADC_SSTR3_2;
    uint32_t ADC_SSTR3_3;
    uint32_t ADC_SSTR3_4;
    uint32_t ADC_SSTR3_5;
    uint32_t ADC_SSTR3_6;
    uint32_t ADC_SSTR3_7;
} stc_adc_sstr3_bit_t;

typedef struct
{
    uint32_t ADC_SSTR4_0;
    uint32_t ADC_SSTR4_1;
    uint32_t ADC_SSTR4_2;
    uint32_t ADC_SSTR4_3;
    uint32_t ADC_SSTR4_4;
    uint32_t ADC_SSTR4_5;
    uint32_t ADC_SSTR4_6;
    uint32_t ADC_SSTR4_7;
} stc_adc_sstr4_bit_t;

typedef struct
{
    uint32_t ADC_SSTR5_0;
    uint32_t ADC_SSTR5_1;
    uint32_t ADC_SSTR5_2;
    uint32_t ADC_SSTR5_3;
    uint32_t ADC_SSTR5_4;
    uint32_t ADC_SSTR5_5;
    uint32_t ADC_SSTR5_6;
    uint32_t ADC_SSTR5_7;
} stc_adc_sstr5_bit_t;

typedef struct
{
    uint32_t ADC_SSTR6_0;
    uint32_t ADC_SSTR6_1;
    uint32_t ADC_SSTR6_2;
    uint32_t ADC_SSTR6_3;
    uint32_t ADC_SSTR6_4;
    uint32_t ADC_SSTR6_5;
    uint32_t ADC_SSTR6_6;
    uint32_t ADC_SSTR6_7;
} stc_adc_sstr6_bit_t;

typedef struct
{
    uint32_t ADC_SSTR7_0;
    uint32_t ADC_SSTR7_1;
    uint32_t ADC_SSTR7_2;
    uint32_t ADC_SSTR7_3;
    uint32_t ADC_SSTR7_4;
    uint32_t ADC_SSTR7_5;
    uint32_t ADC_SSTR7_6;
    uint32_t ADC_SSTR7_7;
} stc_adc_sstr7_bit_t;

typedef struct
{
    uint32_t ADC_SSTR8_0;
    uint32_t ADC_SSTR8_1;
    uint32_t ADC_SSTR8_2;
    uint32_t ADC_SSTR8_3;
    uint32_t ADC_SSTR8_4;
    uint32_t ADC_SSTR8_5;
    uint32_t ADC_SSTR8_6;
    uint32_t ADC_SSTR8_7;
} stc_adc_sstr8_bit_t;

typedef struct
{
    uint32_t ADC_SSTR9_0;
    uint32_t ADC_SSTR9_1;
    uint32_t ADC_SSTR9_2;
    uint32_t ADC_SSTR9_3;
    uint32_t ADC_SSTR9_4;
    uint32_t ADC_SSTR9_5;
    uint32_t ADC_SSTR9_6;
    uint32_t ADC_SSTR9_7;
} stc_adc_sstr9_bit_t;

typedef struct
{
    __IO uint32_t EOCAF;
    __IO uint32_t EOCBF;
    uint32_t RESERVED0[2];
    __IO uint32_t SASTPDF;
    uint32_t RESERVED1[3];
} stc_adc_isr_bit_t;

typedef struct
{
    __IO uint32_t EOCAIEN;
    __IO uint32_t EOCBIEN;
    uint32_t RESERVED0[6];
} stc_adc_icr_bit_t;

typedef struct
{
    __IO uint32_t CLREOCAF;
    __IO uint32_t CLREOCBF;
    uint32_t RESERVED0[2];
    __IO uint32_t CLRSASTPDF;
    uint32_t RESERVED1[3];
} stc_adc_isclrr_bit_t;

typedef struct
{
    uint32_t ADC_DR0_0;
    uint32_t ADC_DR0_1;
    uint32_t ADC_DR0_2;
    uint32_t ADC_DR0_3;
    uint32_t ADC_DR0_4;
    uint32_t ADC_DR0_5;
    uint32_t ADC_DR0_6;
    uint32_t ADC_DR0_7;
    uint32_t ADC_DR0_8;
    uint32_t ADC_DR0_9;
    uint32_t ADC_DR0_10;
    uint32_t ADC_DR0_11;
    uint32_t ADC_DR0_12;
    uint32_t ADC_DR0_13;
    uint32_t ADC_DR0_14;
    uint32_t ADC_DR0_15;
} stc_adc_dr0_bit_t;

typedef struct
{
    uint32_t ADC_DR1_0;
    uint32_t ADC_DR1_1;
    uint32_t ADC_DR1_2;
    uint32_t ADC_DR1_3;
    uint32_t ADC_DR1_4;
    uint32_t ADC_DR1_5;
    uint32_t ADC_DR1_6;
    uint32_t ADC_DR1_7;
    uint32_t ADC_DR1_8;
    uint32_t ADC_DR1_9;
    uint32_t ADC_DR1_10;
    uint32_t ADC_DR1_11;
    uint32_t ADC_DR1_12;
    uint32_t ADC_DR1_13;
    uint32_t ADC_DR1_14;
    uint32_t ADC_DR1_15;
} stc_adc_dr1_bit_t;

typedef struct
{
    uint32_t ADC_DR2_0;
    uint32_t ADC_DR2_1;
    uint32_t ADC_DR2_2;
    uint32_t ADC_DR2_3;
    uint32_t ADC_DR2_4;
    uint32_t ADC_DR2_5;
    uint32_t ADC_DR2_6;
    uint32_t ADC_DR2_7;
    uint32_t ADC_DR2_8;
    uint32_t ADC_DR2_9;
    uint32_t ADC_DR2_10;
    uint32_t ADC_DR2_11;
    uint32_t ADC_DR2_12;
    uint32_t ADC_DR2_13;
    uint32_t ADC_DR2_14;
    uint32_t ADC_DR2_15;
} stc_adc_dr2_bit_t;

typedef struct
{
    uint32_t ADC_DR3_0;
    uint32_t ADC_DR3_1;
    uint32_t ADC_DR3_2;
    uint32_t ADC_DR3_3;
    uint32_t ADC_DR3_4;
    uint32_t ADC_DR3_5;
    uint32_t ADC_DR3_6;
    uint32_t ADC_DR3_7;
    uint32_t ADC_DR3_8;
    uint32_t ADC_DR3_9;
    uint32_t ADC_DR3_10;
    uint32_t ADC_DR3_11;
    uint32_t ADC_DR3_12;
    uint32_t ADC_DR3_13;
    uint32_t ADC_DR3_14;
    uint32_t ADC_DR3_15;
} stc_adc_dr3_bit_t;

typedef struct
{
    uint32_t ADC_DR4_0;
    uint32_t ADC_DR4_1;
    uint32_t ADC_DR4_2;
    uint32_t ADC_DR4_3;
    uint32_t ADC_DR4_4;
    uint32_t ADC_DR4_5;
    uint32_t ADC_DR4_6;
    uint32_t ADC_DR4_7;
    uint32_t ADC_DR4_8;
    uint32_t ADC_DR4_9;
    uint32_t ADC_DR4_10;
    uint32_t ADC_DR4_11;
    uint32_t ADC_DR4_12;
    uint32_t ADC_DR4_13;
    uint32_t ADC_DR4_14;
    uint32_t ADC_DR4_15;
} stc_adc_dr4_bit_t;

typedef struct
{
    uint32_t ADC_DR5_0;
    uint32_t ADC_DR5_1;
    uint32_t ADC_DR5_2;
    uint32_t ADC_DR5_3;
    uint32_t ADC_DR5_4;
    uint32_t ADC_DR5_5;
    uint32_t ADC_DR5_6;
    uint32_t ADC_DR5_7;
    uint32_t ADC_DR5_8;
    uint32_t ADC_DR5_9;
    uint32_t ADC_DR5_10;
    uint32_t ADC_DR5_11;
    uint32_t ADC_DR5_12;
    uint32_t ADC_DR5_13;
    uint32_t ADC_DR5_14;
    uint32_t ADC_DR5_15;
} stc_adc_dr5_bit_t;

typedef struct
{
    uint32_t ADC_DR6_0;
    uint32_t ADC_DR6_1;
    uint32_t ADC_DR6_2;
    uint32_t ADC_DR6_3;
    uint32_t ADC_DR6_4;
    uint32_t ADC_DR6_5;
    uint32_t ADC_DR6_6;
    uint32_t ADC_DR6_7;
    uint32_t ADC_DR6_8;
    uint32_t ADC_DR6_9;
    uint32_t ADC_DR6_10;
    uint32_t ADC_DR6_11;
    uint32_t ADC_DR6_12;
    uint32_t ADC_DR6_13;
    uint32_t ADC_DR6_14;
    uint32_t ADC_DR6_15;
} stc_adc_dr6_bit_t;

typedef struct
{
    uint32_t ADC_DR7_0;
    uint32_t ADC_DR7_1;
    uint32_t ADC_DR7_2;
    uint32_t ADC_DR7_3;
    uint32_t ADC_DR7_4;
    uint32_t ADC_DR7_5;
    uint32_t ADC_DR7_6;
    uint32_t ADC_DR7_7;
    uint32_t ADC_DR7_8;
    uint32_t ADC_DR7_9;
    uint32_t ADC_DR7_10;
    uint32_t ADC_DR7_11;
    uint32_t ADC_DR7_12;
    uint32_t ADC_DR7_13;
    uint32_t ADC_DR7_14;
    uint32_t ADC_DR7_15;
} stc_adc_dr7_bit_t;

typedef struct
{
    uint32_t ADC_DR8_0;
    uint32_t ADC_DR8_1;
    uint32_t ADC_DR8_2;
    uint32_t ADC_DR8_3;
    uint32_t ADC_DR8_4;
    uint32_t ADC_DR8_5;
    uint32_t ADC_DR8_6;
    uint32_t ADC_DR8_7;
    uint32_t ADC_DR8_8;
    uint32_t ADC_DR8_9;
    uint32_t ADC_DR8_10;
    uint32_t ADC_DR8_11;
    uint32_t ADC_DR8_12;
    uint32_t ADC_DR8_13;
    uint32_t ADC_DR8_14;
    uint32_t ADC_DR8_15;
} stc_adc_dr8_bit_t;

typedef struct
{
    uint32_t ADC_DR9_0;
    uint32_t ADC_DR9_1;
    uint32_t ADC_DR9_2;
    uint32_t ADC_DR9_3;
    uint32_t ADC_DR9_4;
    uint32_t ADC_DR9_5;
    uint32_t ADC_DR9_6;
    uint32_t ADC_DR9_7;
    uint32_t ADC_DR9_8;
    uint32_t ADC_DR9_9;
    uint32_t ADC_DR9_10;
    uint32_t ADC_DR9_11;
    uint32_t ADC_DR9_12;
    uint32_t ADC_DR9_13;
    uint32_t ADC_DR9_14;
    uint32_t ADC_DR9_15;
} stc_adc_dr9_bit_t;

typedef struct
{
    __IO uint32_t STRG;
    uint32_t RESERVED0[31];
} stc_aos_intc_strgcr_bit_t;

typedef struct
{
    __IO uint32_t TRGSEL0;
    __IO uint32_t TRGSEL1;
    __IO uint32_t TRGSEL2;
    __IO uint32_t TRGSEL3;
    __IO uint32_t TRGSEL4;
    __IO uint32_t TRGSEL5;
    __IO uint32_t TRGSEL6;
    __IO uint32_t TRGSEL7;
    __IO uint32_t TRGSEL8;
    uint32_t RESERVED0[23];
} stc_aos_tmr00_htssr_bit_t;

typedef struct
{
    __IO uint32_t TRGSEL0;
    __IO uint32_t TRGSEL1;
    __IO uint32_t TRGSEL2;
    __IO uint32_t TRGSEL3;
    __IO uint32_t TRGSEL4;
    __IO uint32_t TRGSEL5;
    __IO uint32_t TRGSEL6;
    __IO uint32_t TRGSEL7;
    __IO uint32_t TRGSEL8;
    uint32_t RESERVED0[23];
} stc_aos_tmr01_htssr_bit_t;

typedef struct
{
    __IO uint32_t TRGSEL0;
    __IO uint32_t TRGSEL1;
    __IO uint32_t TRGSEL2;
    __IO uint32_t TRGSEL3;
    __IO uint32_t TRGSEL4;
    __IO uint32_t TRGSEL5;
    __IO uint32_t TRGSEL6;
    __IO uint32_t TRGSEL7;
    __IO uint32_t TRGSEL8;
    uint32_t RESERVED0[23];
} stc_aos_tmra0_htssr_bit_t;

typedef struct
{
    __IO uint32_t TRGSEL0;
    __IO uint32_t TRGSEL1;
    __IO uint32_t TRGSEL2;
    __IO uint32_t TRGSEL3;
    __IO uint32_t TRGSEL4;
    __IO uint32_t TRGSEL5;
    __IO uint32_t TRGSEL6;
    __IO uint32_t TRGSEL7;
    __IO uint32_t TRGSEL8;
    uint32_t RESERVED0[23];
} stc_aos_tmra1_htssr_bit_t;

typedef struct
{
    __IO uint32_t TRGSEL0;
    __IO uint32_t TRGSEL1;
    __IO uint32_t TRGSEL2;
    __IO uint32_t TRGSEL3;
    __IO uint32_t TRGSEL4;
    __IO uint32_t TRGSEL5;
    __IO uint32_t TRGSEL6;
    __IO uint32_t TRGSEL7;
    __IO uint32_t TRGSEL8;
    uint32_t RESERVED0[23];
} stc_aos_tmrb_htssr_bit_t;

typedef struct
{
    __IO uint32_t TRGSEL0;
    __IO uint32_t TRGSEL1;
    __IO uint32_t TRGSEL2;
    __IO uint32_t TRGSEL3;
    __IO uint32_t TRGSEL4;
    __IO uint32_t TRGSEL5;
    __IO uint32_t TRGSEL6;
    __IO uint32_t TRGSEL7;
    __IO uint32_t TRGSEL8;
    uint32_t RESERVED0[23];
} stc_aos_adc_itrgselr0_bit_t;

typedef struct
{
    __IO uint32_t TRGSEL0;
    __IO uint32_t TRGSEL1;
    __IO uint32_t TRGSEL2;
    __IO uint32_t TRGSEL3;
    __IO uint32_t TRGSEL4;
    __IO uint32_t TRGSEL5;
    __IO uint32_t TRGSEL6;
    __IO uint32_t TRGSEL7;
    __IO uint32_t TRGSEL8;
    uint32_t RESERVED0[23];
} stc_aos_adc_itrgselr1_bit_t;

typedef struct
{
    __IO uint32_t TRGSEL0;
    __IO uint32_t TRGSEL1;
    __IO uint32_t TRGSEL2;
    __IO uint32_t TRGSEL3;
    __IO uint32_t TRGSEL4;
    __IO uint32_t TRGSEL5;
    __IO uint32_t TRGSEL6;
    __IO uint32_t TRGSEL7;
    __IO uint32_t TRGSEL8;
    uint32_t RESERVED0[23];
} stc_aos_dma0_trgsel_bit_t;

typedef struct
{
    __IO uint32_t TRGSEL0;
    __IO uint32_t TRGSEL1;
    __IO uint32_t TRGSEL2;
    __IO uint32_t TRGSEL3;
    __IO uint32_t TRGSEL4;
    __IO uint32_t TRGSEL5;
    __IO uint32_t TRGSEL6;
    __IO uint32_t TRGSEL7;
    __IO uint32_t TRGSEL8;
    uint32_t RESERVED0[23];
} stc_aos_dma1_trgsel_bit_t;

typedef struct
{
    __IO uint32_t TRGSEL0;
    __IO uint32_t TRGSEL1;
    __IO uint32_t TRGSEL2;
    __IO uint32_t TRGSEL3;
    __IO uint32_t TRGSEL4;
    __IO uint32_t TRGSEL5;
    __IO uint32_t TRGSEL6;
    __IO uint32_t TRGSEL7;
    __IO uint32_t TRGSEL8;
    uint32_t RESERVED0[23];
} stc_aos_dma2_trgsel_bit_t;

typedef struct
{
    __IO uint32_t TRGSEL0;
    __IO uint32_t TRGSEL1;
    __IO uint32_t TRGSEL2;
    __IO uint32_t TRGSEL3;
    __IO uint32_t TRGSEL4;
    __IO uint32_t TRGSEL5;
    __IO uint32_t TRGSEL6;
    __IO uint32_t TRGSEL7;
    __IO uint32_t TRGSEL8;
    uint32_t RESERVED0[23];
} stc_aos_dma3_trgsel_bit_t;

typedef struct
{
    __IO uint32_t TRGSEL0;
    __IO uint32_t TRGSEL1;
    __IO uint32_t TRGSEL2;
    __IO uint32_t TRGSEL3;
    __IO uint32_t TRGSEL4;
    __IO uint32_t TRGSEL5;
    __IO uint32_t TRGSEL6;
    __IO uint32_t TRGSEL7;
    __IO uint32_t TRGSEL8;
    uint32_t RESERVED0[23];
} stc_aos_dcu_trgsel_bit_t;

typedef struct
{
    __IO uint32_t CENB;
    __IO uint32_t CWDE;
    uint32_t RESERVED0[5];
    __IO uint32_t CMON;
} stc_cmp_mdr_bit_t;

typedef struct
{
    __IO uint32_t FCKS0;
    __IO uint32_t FCKS1;
    uint32_t RESERVED0[2];
    __IO uint32_t EDGS0;
    __IO uint32_t EDGS1;
    __IO uint32_t CIEN;
    uint32_t RESERVED1[1];
} stc_cmp_fir_bit_t;

typedef struct
{
    __IO uint32_t COEN;
    __IO uint32_t COPS;
    __IO uint32_t CPOE;
    __IO uint32_t TWOE;
    __IO uint32_t TWOL;
    uint32_t RESERVED0[3];
} stc_cmp_ocr_bit_t;

typedef struct
{
    __IO uint32_t RVSL0;
    __IO uint32_t RVSL1;
    __IO uint32_t RVSL2;
    uint32_t RESERVED0[1];
    __IO uint32_t CVSL0;
    __IO uint32_t CVSL1;
    __IO uint32_t CVSL2;
    __IO uint32_t CVSL3;
} stc_cmp_vsr_bit_t;

typedef struct
{
    __IO uint32_t CTWS0;
    __IO uint32_t CTWS1;
    __IO uint32_t CTWS2;
    __IO uint32_t CTWS3;
    __IO uint32_t CTWS4;
    __IO uint32_t CTWS5;
    __IO uint32_t CTWS6;
    __IO uint32_t CTWS7;
} stc_cmp_twr1_bit_t;

typedef struct
{
    __IO uint32_t CTWP0;
    __IO uint32_t CTWP1;
    __IO uint32_t CTWP2;
    __IO uint32_t CTWP3;
    __IO uint32_t CTWP4;
    __IO uint32_t CTWP5;
    __IO uint32_t CTWP6;
    __IO uint32_t CTWP7;
} stc_cmp_twr2_bit_t;

typedef struct
{
    __IO uint32_t ADCKSEL0;
    __IO uint32_t ADCKSEL1;
    __IO uint32_t ADCKSEL2;
    uint32_t RESERVED0[5];
} stc_cmu_adcksel_bit_t;

typedef struct
{
    __IO uint32_t XTALSTDF;
    uint32_t RESERVED0[7];
} stc_cmu_xtalstdsr_bit_t;

typedef struct
{
    __IO uint32_t PCLK1S0;
    __IO uint32_t PCLK1S1;
    __IO uint32_t PCLK1S2;
    uint32_t RESERVED0[9];
    __IO uint32_t PCLK4S0;
    __IO uint32_t PCLK4S1;
    __IO uint32_t PCLK4S2;
    uint32_t RESERVED1[9];
    __IO uint32_t HCLKS0;
    __IO uint32_t HCLKS1;
    __IO uint32_t HCLKS2;
    uint32_t RESERVED2[5];
} stc_cmu_scfgr_bit_t;

typedef struct
{
    __IO uint32_t CKSW0;
    __IO uint32_t CKSW1;
    __IO uint32_t CKSW2;
    uint32_t RESERVED0[5];
} stc_cmu_ckswr_bit_t;

typedef struct
{
    __IO uint32_t XTALSTP;
    uint32_t RESERVED0[7];
} stc_cmu_xtalcr_bit_t;

typedef struct
{
    uint32_t RESERVED0[4];
    __IO uint32_t XTALDRV0;
    __IO uint32_t XTALDRV1;
    __IO uint32_t XTALMS;
    __IO uint32_t SUPDRV;
} stc_cmu_xtalcfgr_bit_t;

typedef struct
{
    __IO uint32_t XTALSTB0;
    __IO uint32_t XTALSTB1;
    __IO uint32_t XTALSTB2;
    uint32_t RESERVED0[5];
} stc_cmu_xtalstbcr_bit_t;

typedef struct
{
    __IO uint32_t HRCSTP;
    uint32_t RESERVED0[7];
} stc_cmu_hrccr_bit_t;

typedef struct
{
    __IO uint32_t HRCFREQS0;
    __IO uint32_t HRCFREQS1;
    __IO uint32_t HRCFREQS2;
    __IO uint32_t HRCFREQS3;
    uint32_t RESERVED0[4];
} stc_cmu_hrccfgr_bit_t;

typedef struct
{
    __IO uint32_t HRCSTBF;
    uint32_t RESERVED0[2];
    __IO uint32_t XTALSTBF;
    uint32_t RESERVED1[1];
    __IO uint32_t PLLSTBF;
    uint32_t RESERVED2[2];
} stc_cmu_oscstbsr_bit_t;

typedef struct
{
    __IO uint32_t MCO1SEL0;
    __IO uint32_t MCO1SEL1;
    __IO uint32_t MCO1SEL2;
    __IO uint32_t MCO1SEL3;
    __IO uint32_t MCO1DIV0;
    __IO uint32_t MCO1DIV1;
    __IO uint32_t MCO1DIV2;
    __IO uint32_t MCO1EN;
} stc_cmu_mcocfgr_bit_t;

typedef struct
{
    __IO uint32_t XTALSTDIE;
    __IO uint32_t XTALSTDRE;
    __IO uint32_t XTALSTDRIS;
    uint32_t RESERVED0[4];
    __IO uint32_t XTALSTDE;
} stc_cmu_xtalstdcr_bit_t;

typedef struct
{
    __IO uint32_t ADC;
    __IO uint32_t CTC;
    __IO uint32_t CMP;
    uint32_t RESERVED0[1];
    __IO uint32_t AOS;
    __IO uint32_t DMA;
    uint32_t RESERVED1[1];
    __IO uint32_t CRC;
    __IO uint32_t TIMA1;
    __IO uint32_t TIMA2;
    __IO uint32_t TIMA3;
    __IO uint32_t TIMA4;
    uint32_t RESERVED2[4];
    __IO uint32_t TIM0_1;
    __IO uint32_t TIM0_2;
    __IO uint32_t TIM4_1;
    __IO uint32_t TIMB_1;
    __IO uint32_t EMB;
    __IO uint32_t FCM;
    __IO uint32_t DCU;
    uint32_t RESERVED3[1];
    __IO uint32_t UART1;
    __IO uint32_t UART2;
    __IO uint32_t UART3;
    __IO uint32_t UART4;
    __IO uint32_t IIC_1;
    __IO uint32_t SPI_1;
    uint32_t RESERVED4[2];
} stc_cmu_fcg_bit_t;

typedef struct
{
    __IO uint32_t LRCSTP;
    uint32_t RESERVED0[7];
} stc_cmu_lrccr_bit_t;

typedef struct
{
    __IO uint32_t MRCSTP;
    uint32_t RESERVED0[7];
} stc_cmu_mrccr_bit_t;

typedef struct
{
    __IO uint32_t PLLM0;
    __IO uint32_t PLLM1;
    __IO uint32_t PLLM2;
    uint32_t RESERVED0[4];
    __IO uint32_t PLLSRC;
    __IO uint32_t PLLN0;
    __IO uint32_t PLLN1;
    __IO uint32_t PLLN2;
    __IO uint32_t PLLN3;
    __IO uint32_t PLLN4;
    __IO uint32_t PLLN5;
    uint32_t RESERVED1[14];
    __IO uint32_t PLLP0;
    __IO uint32_t PLLP1;
    uint32_t RESERVED2[2];
} stc_cmu_pllcfgr_bit_t;

typedef struct
{
    __IO uint32_t PLLOFF;
    uint32_t RESERVED0[7];
} stc_cmu_pllcr_bit_t;

typedef struct
{
    __IO uint32_t TPIUCKS0;
    __IO uint32_t TPIUCKS1;
    uint32_t RESERVED0[5];
    __IO uint32_t TPIUCKOE;
} stc_cmu_tpiuckcfgr_bit_t;

typedef struct
{
    __IO uint32_t CR;
    __IO uint32_t FLAG;
    uint32_t RESERVED0[30];
} stc_crc_cr_bit_t;

typedef struct
{
    uint32_t CRC_RESLT_0;
    uint32_t CRC_RESLT_1;
    uint32_t CRC_RESLT_2;
    uint32_t CRC_RESLT_3;
    uint32_t CRC_RESLT_4;
    uint32_t CRC_RESLT_5;
    uint32_t CRC_RESLT_6;
    uint32_t CRC_RESLT_7;
    uint32_t CRC_RESLT_8;
    uint32_t CRC_RESLT_9;
    uint32_t CRC_RESLT_10;
    uint32_t CRC_RESLT_11;
    uint32_t CRC_RESLT_12;
    uint32_t CRC_RESLT_13;
    uint32_t CRC_RESLT_14;
    uint32_t CRC_RESLT_15;
    uint32_t CRC_RESLT_16;
    uint32_t CRC_RESLT_17;
    uint32_t CRC_RESLT_18;
    uint32_t CRC_RESLT_19;
    uint32_t CRC_RESLT_20;
    uint32_t CRC_RESLT_21;
    uint32_t CRC_RESLT_22;
    uint32_t CRC_RESLT_23;
    uint32_t CRC_RESLT_24;
    uint32_t CRC_RESLT_25;
    uint32_t CRC_RESLT_26;
    uint32_t CRC_RESLT_27;
    uint32_t CRC_RESLT_28;
    uint32_t CRC_RESLT_29;
    uint32_t CRC_RESLT_30;
    uint32_t CRC_RESLT_31;
} stc_crc_reslt_bit_t;

typedef struct
{
    uint32_t CRC_DAT0_0;
    uint32_t CRC_DAT0_1;
    uint32_t CRC_DAT0_2;
    uint32_t CRC_DAT0_3;
    uint32_t CRC_DAT0_4;
    uint32_t CRC_DAT0_5;
    uint32_t CRC_DAT0_6;
    uint32_t CRC_DAT0_7;
    uint32_t CRC_DAT0_8;
    uint32_t CRC_DAT0_9;
    uint32_t CRC_DAT0_10;
    uint32_t CRC_DAT0_11;
    uint32_t CRC_DAT0_12;
    uint32_t CRC_DAT0_13;
    uint32_t CRC_DAT0_14;
    uint32_t CRC_DAT0_15;
    uint32_t CRC_DAT0_16;
    uint32_t CRC_DAT0_17;
    uint32_t CRC_DAT0_18;
    uint32_t CRC_DAT0_19;
    uint32_t CRC_DAT0_20;
    uint32_t CRC_DAT0_21;
    uint32_t CRC_DAT0_22;
    uint32_t CRC_DAT0_23;
    uint32_t CRC_DAT0_24;
    uint32_t CRC_DAT0_25;
    uint32_t CRC_DAT0_26;
    uint32_t CRC_DAT0_27;
    uint32_t CRC_DAT0_28;
    uint32_t CRC_DAT0_29;
    uint32_t CRC_DAT0_30;
    uint32_t CRC_DAT0_31;
} stc_crc_dat0_bit_t;

typedef struct
{
    uint32_t CRC_DAT1_0;
    uint32_t CRC_DAT1_1;
    uint32_t CRC_DAT1_2;
    uint32_t CRC_DAT1_3;
    uint32_t CRC_DAT1_4;
    uint32_t CRC_DAT1_5;
    uint32_t CRC_DAT1_6;
    uint32_t CRC_DAT1_7;
    uint32_t CRC_DAT1_8;
    uint32_t CRC_DAT1_9;
    uint32_t CRC_DAT1_10;
    uint32_t CRC_DAT1_11;
    uint32_t CRC_DAT1_12;
    uint32_t CRC_DAT1_13;
    uint32_t CRC_DAT1_14;
    uint32_t CRC_DAT1_15;
    uint32_t CRC_DAT1_16;
    uint32_t CRC_DAT1_17;
    uint32_t CRC_DAT1_18;
    uint32_t CRC_DAT1_19;
    uint32_t CRC_DAT1_20;
    uint32_t CRC_DAT1_21;
    uint32_t CRC_DAT1_22;
    uint32_t CRC_DAT1_23;
    uint32_t CRC_DAT1_24;
    uint32_t CRC_DAT1_25;
    uint32_t CRC_DAT1_26;
    uint32_t CRC_DAT1_27;
    uint32_t CRC_DAT1_28;
    uint32_t CRC_DAT1_29;
    uint32_t CRC_DAT1_30;
    uint32_t CRC_DAT1_31;
} stc_crc_dat1_bit_t;

typedef struct
{
    uint32_t CRC_DAT2_0;
    uint32_t CRC_DAT2_1;
    uint32_t CRC_DAT2_2;
    uint32_t CRC_DAT2_3;
    uint32_t CRC_DAT2_4;
    uint32_t CRC_DAT2_5;
    uint32_t CRC_DAT2_6;
    uint32_t CRC_DAT2_7;
    uint32_t CRC_DAT2_8;
    uint32_t CRC_DAT2_9;
    uint32_t CRC_DAT2_10;
    uint32_t CRC_DAT2_11;
    uint32_t CRC_DAT2_12;
    uint32_t CRC_DAT2_13;
    uint32_t CRC_DAT2_14;
    uint32_t CRC_DAT2_15;
    uint32_t CRC_DAT2_16;
    uint32_t CRC_DAT2_17;
    uint32_t CRC_DAT2_18;
    uint32_t CRC_DAT2_19;
    uint32_t CRC_DAT2_20;
    uint32_t CRC_DAT2_21;
    uint32_t CRC_DAT2_22;
    uint32_t CRC_DAT2_23;
    uint32_t CRC_DAT2_24;
    uint32_t CRC_DAT2_25;
    uint32_t CRC_DAT2_26;
    uint32_t CRC_DAT2_27;
    uint32_t CRC_DAT2_28;
    uint32_t CRC_DAT2_29;
    uint32_t CRC_DAT2_30;
    uint32_t CRC_DAT2_31;
} stc_crc_dat2_bit_t;

typedef struct
{
    uint32_t CRC_DAT3_0;
    uint32_t CRC_DAT3_1;
    uint32_t CRC_DAT3_2;
    uint32_t CRC_DAT3_3;
    uint32_t CRC_DAT3_4;
    uint32_t CRC_DAT3_5;
    uint32_t CRC_DAT3_6;
    uint32_t CRC_DAT3_7;
    uint32_t CRC_DAT3_8;
    uint32_t CRC_DAT3_9;
    uint32_t CRC_DAT3_10;
    uint32_t CRC_DAT3_11;
    uint32_t CRC_DAT3_12;
    uint32_t CRC_DAT3_13;
    uint32_t CRC_DAT3_14;
    uint32_t CRC_DAT3_15;
    uint32_t CRC_DAT3_16;
    uint32_t CRC_DAT3_17;
    uint32_t CRC_DAT3_18;
    uint32_t CRC_DAT3_19;
    uint32_t CRC_DAT3_20;
    uint32_t CRC_DAT3_21;
    uint32_t CRC_DAT3_22;
    uint32_t CRC_DAT3_23;
    uint32_t CRC_DAT3_24;
    uint32_t CRC_DAT3_25;
    uint32_t CRC_DAT3_26;
    uint32_t CRC_DAT3_27;
    uint32_t CRC_DAT3_28;
    uint32_t CRC_DAT3_29;
    uint32_t CRC_DAT3_30;
    uint32_t CRC_DAT3_31;
} stc_crc_dat3_bit_t;

typedef struct
{
    uint32_t CRC_DAT4_0;
    uint32_t CRC_DAT4_1;
    uint32_t CRC_DAT4_2;
    uint32_t CRC_DAT4_3;
    uint32_t CRC_DAT4_4;
    uint32_t CRC_DAT4_5;
    uint32_t CRC_DAT4_6;
    uint32_t CRC_DAT4_7;
    uint32_t CRC_DAT4_8;
    uint32_t CRC_DAT4_9;
    uint32_t CRC_DAT4_10;
    uint32_t CRC_DAT4_11;
    uint32_t CRC_DAT4_12;
    uint32_t CRC_DAT4_13;
    uint32_t CRC_DAT4_14;
    uint32_t CRC_DAT4_15;
    uint32_t CRC_DAT4_16;
    uint32_t CRC_DAT4_17;
    uint32_t CRC_DAT4_18;
    uint32_t CRC_DAT4_19;
    uint32_t CRC_DAT4_20;
    uint32_t CRC_DAT4_21;
    uint32_t CRC_DAT4_22;
    uint32_t CRC_DAT4_23;
    uint32_t CRC_DAT4_24;
    uint32_t CRC_DAT4_25;
    uint32_t CRC_DAT4_26;
    uint32_t CRC_DAT4_27;
    uint32_t CRC_DAT4_28;
    uint32_t CRC_DAT4_29;
    uint32_t CRC_DAT4_30;
    uint32_t CRC_DAT4_31;
} stc_crc_dat4_bit_t;

typedef struct
{
    uint32_t CRC_DAT5_0;
    uint32_t CRC_DAT5_1;
    uint32_t CRC_DAT5_2;
    uint32_t CRC_DAT5_3;
    uint32_t CRC_DAT5_4;
    uint32_t CRC_DAT5_5;
    uint32_t CRC_DAT5_6;
    uint32_t CRC_DAT5_7;
    uint32_t CRC_DAT5_8;
    uint32_t CRC_DAT5_9;
    uint32_t CRC_DAT5_10;
    uint32_t CRC_DAT5_11;
    uint32_t CRC_DAT5_12;
    uint32_t CRC_DAT5_13;
    uint32_t CRC_DAT5_14;
    uint32_t CRC_DAT5_15;
    uint32_t CRC_DAT5_16;
    uint32_t CRC_DAT5_17;
    uint32_t CRC_DAT5_18;
    uint32_t CRC_DAT5_19;
    uint32_t CRC_DAT5_20;
    uint32_t CRC_DAT5_21;
    uint32_t CRC_DAT5_22;
    uint32_t CRC_DAT5_23;
    uint32_t CRC_DAT5_24;
    uint32_t CRC_DAT5_25;
    uint32_t CRC_DAT5_26;
    uint32_t CRC_DAT5_27;
    uint32_t CRC_DAT5_28;
    uint32_t CRC_DAT5_29;
    uint32_t CRC_DAT5_30;
    uint32_t CRC_DAT5_31;
} stc_crc_dat5_bit_t;

typedef struct
{
    uint32_t CRC_DAT6_0;
    uint32_t CRC_DAT6_1;
    uint32_t CRC_DAT6_2;
    uint32_t CRC_DAT6_3;
    uint32_t CRC_DAT6_4;
    uint32_t CRC_DAT6_5;
    uint32_t CRC_DAT6_6;
    uint32_t CRC_DAT6_7;
    uint32_t CRC_DAT6_8;
    uint32_t CRC_DAT6_9;
    uint32_t CRC_DAT6_10;
    uint32_t CRC_DAT6_11;
    uint32_t CRC_DAT6_12;
    uint32_t CRC_DAT6_13;
    uint32_t CRC_DAT6_14;
    uint32_t CRC_DAT6_15;
    uint32_t CRC_DAT6_16;
    uint32_t CRC_DAT6_17;
    uint32_t CRC_DAT6_18;
    uint32_t CRC_DAT6_19;
    uint32_t CRC_DAT6_20;
    uint32_t CRC_DAT6_21;
    uint32_t CRC_DAT6_22;
    uint32_t CRC_DAT6_23;
    uint32_t CRC_DAT6_24;
    uint32_t CRC_DAT6_25;
    uint32_t CRC_DAT6_26;
    uint32_t CRC_DAT6_27;
    uint32_t CRC_DAT6_28;
    uint32_t CRC_DAT6_29;
    uint32_t CRC_DAT6_30;
    uint32_t CRC_DAT6_31;
} stc_crc_dat6_bit_t;

typedef struct
{
    uint32_t CRC_DAT7_0;
    uint32_t CRC_DAT7_1;
    uint32_t CRC_DAT7_2;
    uint32_t CRC_DAT7_3;
    uint32_t CRC_DAT7_4;
    uint32_t CRC_DAT7_5;
    uint32_t CRC_DAT7_6;
    uint32_t CRC_DAT7_7;
    uint32_t CRC_DAT7_8;
    uint32_t CRC_DAT7_9;
    uint32_t CRC_DAT7_10;
    uint32_t CRC_DAT7_11;
    uint32_t CRC_DAT7_12;
    uint32_t CRC_DAT7_13;
    uint32_t CRC_DAT7_14;
    uint32_t CRC_DAT7_15;
    uint32_t CRC_DAT7_16;
    uint32_t CRC_DAT7_17;
    uint32_t CRC_DAT7_18;
    uint32_t CRC_DAT7_19;
    uint32_t CRC_DAT7_20;
    uint32_t CRC_DAT7_21;
    uint32_t CRC_DAT7_22;
    uint32_t CRC_DAT7_23;
    uint32_t CRC_DAT7_24;
    uint32_t CRC_DAT7_25;
    uint32_t CRC_DAT7_26;
    uint32_t CRC_DAT7_27;
    uint32_t CRC_DAT7_28;
    uint32_t CRC_DAT7_29;
    uint32_t CRC_DAT7_30;
    uint32_t CRC_DAT7_31;
} stc_crc_dat7_bit_t;

typedef struct
{
    uint32_t CRC_DAT8_0;
    uint32_t CRC_DAT8_1;
    uint32_t CRC_DAT8_2;
    uint32_t CRC_DAT8_3;
    uint32_t CRC_DAT8_4;
    uint32_t CRC_DAT8_5;
    uint32_t CRC_DAT8_6;
    uint32_t CRC_DAT8_7;
    uint32_t CRC_DAT8_8;
    uint32_t CRC_DAT8_9;
    uint32_t CRC_DAT8_10;
    uint32_t CRC_DAT8_11;
    uint32_t CRC_DAT8_12;
    uint32_t CRC_DAT8_13;
    uint32_t CRC_DAT8_14;
    uint32_t CRC_DAT8_15;
    uint32_t CRC_DAT8_16;
    uint32_t CRC_DAT8_17;
    uint32_t CRC_DAT8_18;
    uint32_t CRC_DAT8_19;
    uint32_t CRC_DAT8_20;
    uint32_t CRC_DAT8_21;
    uint32_t CRC_DAT8_22;
    uint32_t CRC_DAT8_23;
    uint32_t CRC_DAT8_24;
    uint32_t CRC_DAT8_25;
    uint32_t CRC_DAT8_26;
    uint32_t CRC_DAT8_27;
    uint32_t CRC_DAT8_28;
    uint32_t CRC_DAT8_29;
    uint32_t CRC_DAT8_30;
    uint32_t CRC_DAT8_31;
} stc_crc_dat8_bit_t;

typedef struct
{
    uint32_t CRC_DAT9_0;
    uint32_t CRC_DAT9_1;
    uint32_t CRC_DAT9_2;
    uint32_t CRC_DAT9_3;
    uint32_t CRC_DAT9_4;
    uint32_t CRC_DAT9_5;
    uint32_t CRC_DAT9_6;
    uint32_t CRC_DAT9_7;
    uint32_t CRC_DAT9_8;
    uint32_t CRC_DAT9_9;
    uint32_t CRC_DAT9_10;
    uint32_t CRC_DAT9_11;
    uint32_t CRC_DAT9_12;
    uint32_t CRC_DAT9_13;
    uint32_t CRC_DAT9_14;
    uint32_t CRC_DAT9_15;
    uint32_t CRC_DAT9_16;
    uint32_t CRC_DAT9_17;
    uint32_t CRC_DAT9_18;
    uint32_t CRC_DAT9_19;
    uint32_t CRC_DAT9_20;
    uint32_t CRC_DAT9_21;
    uint32_t CRC_DAT9_22;
    uint32_t CRC_DAT9_23;
    uint32_t CRC_DAT9_24;
    uint32_t CRC_DAT9_25;
    uint32_t CRC_DAT9_26;
    uint32_t CRC_DAT9_27;
    uint32_t CRC_DAT9_28;
    uint32_t CRC_DAT9_29;
    uint32_t CRC_DAT9_30;
    uint32_t CRC_DAT9_31;
} stc_crc_dat9_bit_t;

typedef struct
{
    uint32_t CRC_DAT10_0;
    uint32_t CRC_DAT10_1;
    uint32_t CRC_DAT10_2;
    uint32_t CRC_DAT10_3;
    uint32_t CRC_DAT10_4;
    uint32_t CRC_DAT10_5;
    uint32_t CRC_DAT10_6;
    uint32_t CRC_DAT10_7;
    uint32_t CRC_DAT10_8;
    uint32_t CRC_DAT10_9;
    uint32_t CRC_DAT10_10;
    uint32_t CRC_DAT10_11;
    uint32_t CRC_DAT10_12;
    uint32_t CRC_DAT10_13;
    uint32_t CRC_DAT10_14;
    uint32_t CRC_DAT10_15;
    uint32_t CRC_DAT10_16;
    uint32_t CRC_DAT10_17;
    uint32_t CRC_DAT10_18;
    uint32_t CRC_DAT10_19;
    uint32_t CRC_DAT10_20;
    uint32_t CRC_DAT10_21;
    uint32_t CRC_DAT10_22;
    uint32_t CRC_DAT10_23;
    uint32_t CRC_DAT10_24;
    uint32_t CRC_DAT10_25;
    uint32_t CRC_DAT10_26;
    uint32_t CRC_DAT10_27;
    uint32_t CRC_DAT10_28;
    uint32_t CRC_DAT10_29;
    uint32_t CRC_DAT10_30;
    uint32_t CRC_DAT10_31;
} stc_crc_dat10_bit_t;

typedef struct
{
    uint32_t CRC_DAT11_0;
    uint32_t CRC_DAT11_1;
    uint32_t CRC_DAT11_2;
    uint32_t CRC_DAT11_3;
    uint32_t CRC_DAT11_4;
    uint32_t CRC_DAT11_5;
    uint32_t CRC_DAT11_6;
    uint32_t CRC_DAT11_7;
    uint32_t CRC_DAT11_8;
    uint32_t CRC_DAT11_9;
    uint32_t CRC_DAT11_10;
    uint32_t CRC_DAT11_11;
    uint32_t CRC_DAT11_12;
    uint32_t CRC_DAT11_13;
    uint32_t CRC_DAT11_14;
    uint32_t CRC_DAT11_15;
    uint32_t CRC_DAT11_16;
    uint32_t CRC_DAT11_17;
    uint32_t CRC_DAT11_18;
    uint32_t CRC_DAT11_19;
    uint32_t CRC_DAT11_20;
    uint32_t CRC_DAT11_21;
    uint32_t CRC_DAT11_22;
    uint32_t CRC_DAT11_23;
    uint32_t CRC_DAT11_24;
    uint32_t CRC_DAT11_25;
    uint32_t CRC_DAT11_26;
    uint32_t CRC_DAT11_27;
    uint32_t CRC_DAT11_28;
    uint32_t CRC_DAT11_29;
    uint32_t CRC_DAT11_30;
    uint32_t CRC_DAT11_31;
} stc_crc_dat11_bit_t;

typedef struct
{
    uint32_t CRC_DAT12_0;
    uint32_t CRC_DAT12_1;
    uint32_t CRC_DAT12_2;
    uint32_t CRC_DAT12_3;
    uint32_t CRC_DAT12_4;
    uint32_t CRC_DAT12_5;
    uint32_t CRC_DAT12_6;
    uint32_t CRC_DAT12_7;
    uint32_t CRC_DAT12_8;
    uint32_t CRC_DAT12_9;
    uint32_t CRC_DAT12_10;
    uint32_t CRC_DAT12_11;
    uint32_t CRC_DAT12_12;
    uint32_t CRC_DAT12_13;
    uint32_t CRC_DAT12_14;
    uint32_t CRC_DAT12_15;
    uint32_t CRC_DAT12_16;
    uint32_t CRC_DAT12_17;
    uint32_t CRC_DAT12_18;
    uint32_t CRC_DAT12_19;
    uint32_t CRC_DAT12_20;
    uint32_t CRC_DAT12_21;
    uint32_t CRC_DAT12_22;
    uint32_t CRC_DAT12_23;
    uint32_t CRC_DAT12_24;
    uint32_t CRC_DAT12_25;
    uint32_t CRC_DAT12_26;
    uint32_t CRC_DAT12_27;
    uint32_t CRC_DAT12_28;
    uint32_t CRC_DAT12_29;
    uint32_t CRC_DAT12_30;
    uint32_t CRC_DAT12_31;
} stc_crc_dat12_bit_t;

typedef struct
{
    uint32_t CRC_DAT13_0;
    uint32_t CRC_DAT13_1;
    uint32_t CRC_DAT13_2;
    uint32_t CRC_DAT13_3;
    uint32_t CRC_DAT13_4;
    uint32_t CRC_DAT13_5;
    uint32_t CRC_DAT13_6;
    uint32_t CRC_DAT13_7;
    uint32_t CRC_DAT13_8;
    uint32_t CRC_DAT13_9;
    uint32_t CRC_DAT13_10;
    uint32_t CRC_DAT13_11;
    uint32_t CRC_DAT13_12;
    uint32_t CRC_DAT13_13;
    uint32_t CRC_DAT13_14;
    uint32_t CRC_DAT13_15;
    uint32_t CRC_DAT13_16;
    uint32_t CRC_DAT13_17;
    uint32_t CRC_DAT13_18;
    uint32_t CRC_DAT13_19;
    uint32_t CRC_DAT13_20;
    uint32_t CRC_DAT13_21;
    uint32_t CRC_DAT13_22;
    uint32_t CRC_DAT13_23;
    uint32_t CRC_DAT13_24;
    uint32_t CRC_DAT13_25;
    uint32_t CRC_DAT13_26;
    uint32_t CRC_DAT13_27;
    uint32_t CRC_DAT13_28;
    uint32_t CRC_DAT13_29;
    uint32_t CRC_DAT13_30;
    uint32_t CRC_DAT13_31;
} stc_crc_dat13_bit_t;

typedef struct
{
    uint32_t CRC_DAT14_0;
    uint32_t CRC_DAT14_1;
    uint32_t CRC_DAT14_2;
    uint32_t CRC_DAT14_3;
    uint32_t CRC_DAT14_4;
    uint32_t CRC_DAT14_5;
    uint32_t CRC_DAT14_6;
    uint32_t CRC_DAT14_7;
    uint32_t CRC_DAT14_8;
    uint32_t CRC_DAT14_9;
    uint32_t CRC_DAT14_10;
    uint32_t CRC_DAT14_11;
    uint32_t CRC_DAT14_12;
    uint32_t CRC_DAT14_13;
    uint32_t CRC_DAT14_14;
    uint32_t CRC_DAT14_15;
    uint32_t CRC_DAT14_16;
    uint32_t CRC_DAT14_17;
    uint32_t CRC_DAT14_18;
    uint32_t CRC_DAT14_19;
    uint32_t CRC_DAT14_20;
    uint32_t CRC_DAT14_21;
    uint32_t CRC_DAT14_22;
    uint32_t CRC_DAT14_23;
    uint32_t CRC_DAT14_24;
    uint32_t CRC_DAT14_25;
    uint32_t CRC_DAT14_26;
    uint32_t CRC_DAT14_27;
    uint32_t CRC_DAT14_28;
    uint32_t CRC_DAT14_29;
    uint32_t CRC_DAT14_30;
    uint32_t CRC_DAT14_31;
} stc_crc_dat14_bit_t;

typedef struct
{
    uint32_t CRC_DAT15_0;
    uint32_t CRC_DAT15_1;
    uint32_t CRC_DAT15_2;
    uint32_t CRC_DAT15_3;
    uint32_t CRC_DAT15_4;
    uint32_t CRC_DAT15_5;
    uint32_t CRC_DAT15_6;
    uint32_t CRC_DAT15_7;
    uint32_t CRC_DAT15_8;
    uint32_t CRC_DAT15_9;
    uint32_t CRC_DAT15_10;
    uint32_t CRC_DAT15_11;
    uint32_t CRC_DAT15_12;
    uint32_t CRC_DAT15_13;
    uint32_t CRC_DAT15_14;
    uint32_t CRC_DAT15_15;
    uint32_t CRC_DAT15_16;
    uint32_t CRC_DAT15_17;
    uint32_t CRC_DAT15_18;
    uint32_t CRC_DAT15_19;
    uint32_t CRC_DAT15_20;
    uint32_t CRC_DAT15_21;
    uint32_t CRC_DAT15_22;
    uint32_t CRC_DAT15_23;
    uint32_t CRC_DAT15_24;
    uint32_t CRC_DAT15_25;
    uint32_t CRC_DAT15_26;
    uint32_t CRC_DAT15_27;
    uint32_t CRC_DAT15_28;
    uint32_t CRC_DAT15_29;
    uint32_t CRC_DAT15_30;
    uint32_t CRC_DAT15_31;
} stc_crc_dat15_bit_t;

typedef struct
{
    uint32_t CRC_DAT16_0;
    uint32_t CRC_DAT16_1;
    uint32_t CRC_DAT16_2;
    uint32_t CRC_DAT16_3;
    uint32_t CRC_DAT16_4;
    uint32_t CRC_DAT16_5;
    uint32_t CRC_DAT16_6;
    uint32_t CRC_DAT16_7;
    uint32_t CRC_DAT16_8;
    uint32_t CRC_DAT16_9;
    uint32_t CRC_DAT16_10;
    uint32_t CRC_DAT16_11;
    uint32_t CRC_DAT16_12;
    uint32_t CRC_DAT16_13;
    uint32_t CRC_DAT16_14;
    uint32_t CRC_DAT16_15;
    uint32_t CRC_DAT16_16;
    uint32_t CRC_DAT16_17;
    uint32_t CRC_DAT16_18;
    uint32_t CRC_DAT16_19;
    uint32_t CRC_DAT16_20;
    uint32_t CRC_DAT16_21;
    uint32_t CRC_DAT16_22;
    uint32_t CRC_DAT16_23;
    uint32_t CRC_DAT16_24;
    uint32_t CRC_DAT16_25;
    uint32_t CRC_DAT16_26;
    uint32_t CRC_DAT16_27;
    uint32_t CRC_DAT16_28;
    uint32_t CRC_DAT16_29;
    uint32_t CRC_DAT16_30;
    uint32_t CRC_DAT16_31;
} stc_crc_dat16_bit_t;

typedef struct
{
    uint32_t CRC_DAT17_0;
    uint32_t CRC_DAT17_1;
    uint32_t CRC_DAT17_2;
    uint32_t CRC_DAT17_3;
    uint32_t CRC_DAT17_4;
    uint32_t CRC_DAT17_5;
    uint32_t CRC_DAT17_6;
    uint32_t CRC_DAT17_7;
    uint32_t CRC_DAT17_8;
    uint32_t CRC_DAT17_9;
    uint32_t CRC_DAT17_10;
    uint32_t CRC_DAT17_11;
    uint32_t CRC_DAT17_12;
    uint32_t CRC_DAT17_13;
    uint32_t CRC_DAT17_14;
    uint32_t CRC_DAT17_15;
    uint32_t CRC_DAT17_16;
    uint32_t CRC_DAT17_17;
    uint32_t CRC_DAT17_18;
    uint32_t CRC_DAT17_19;
    uint32_t CRC_DAT17_20;
    uint32_t CRC_DAT17_21;
    uint32_t CRC_DAT17_22;
    uint32_t CRC_DAT17_23;
    uint32_t CRC_DAT17_24;
    uint32_t CRC_DAT17_25;
    uint32_t CRC_DAT17_26;
    uint32_t CRC_DAT17_27;
    uint32_t CRC_DAT17_28;
    uint32_t CRC_DAT17_29;
    uint32_t CRC_DAT17_30;
    uint32_t CRC_DAT17_31;
} stc_crc_dat17_bit_t;

typedef struct
{
    uint32_t CRC_DAT18_0;
    uint32_t CRC_DAT18_1;
    uint32_t CRC_DAT18_2;
    uint32_t CRC_DAT18_3;
    uint32_t CRC_DAT18_4;
    uint32_t CRC_DAT18_5;
    uint32_t CRC_DAT18_6;
    uint32_t CRC_DAT18_7;
    uint32_t CRC_DAT18_8;
    uint32_t CRC_DAT18_9;
    uint32_t CRC_DAT18_10;
    uint32_t CRC_DAT18_11;
    uint32_t CRC_DAT18_12;
    uint32_t CRC_DAT18_13;
    uint32_t CRC_DAT18_14;
    uint32_t CRC_DAT18_15;
    uint32_t CRC_DAT18_16;
    uint32_t CRC_DAT18_17;
    uint32_t CRC_DAT18_18;
    uint32_t CRC_DAT18_19;
    uint32_t CRC_DAT18_20;
    uint32_t CRC_DAT18_21;
    uint32_t CRC_DAT18_22;
    uint32_t CRC_DAT18_23;
    uint32_t CRC_DAT18_24;
    uint32_t CRC_DAT18_25;
    uint32_t CRC_DAT18_26;
    uint32_t CRC_DAT18_27;
    uint32_t CRC_DAT18_28;
    uint32_t CRC_DAT18_29;
    uint32_t CRC_DAT18_30;
    uint32_t CRC_DAT18_31;
} stc_crc_dat18_bit_t;

typedef struct
{
    uint32_t CRC_DAT19_0;
    uint32_t CRC_DAT19_1;
    uint32_t CRC_DAT19_2;
    uint32_t CRC_DAT19_3;
    uint32_t CRC_DAT19_4;
    uint32_t CRC_DAT19_5;
    uint32_t CRC_DAT19_6;
    uint32_t CRC_DAT19_7;
    uint32_t CRC_DAT19_8;
    uint32_t CRC_DAT19_9;
    uint32_t CRC_DAT19_10;
    uint32_t CRC_DAT19_11;
    uint32_t CRC_DAT19_12;
    uint32_t CRC_DAT19_13;
    uint32_t CRC_DAT19_14;
    uint32_t CRC_DAT19_15;
    uint32_t CRC_DAT19_16;
    uint32_t CRC_DAT19_17;
    uint32_t CRC_DAT19_18;
    uint32_t CRC_DAT19_19;
    uint32_t CRC_DAT19_20;
    uint32_t CRC_DAT19_21;
    uint32_t CRC_DAT19_22;
    uint32_t CRC_DAT19_23;
    uint32_t CRC_DAT19_24;
    uint32_t CRC_DAT19_25;
    uint32_t CRC_DAT19_26;
    uint32_t CRC_DAT19_27;
    uint32_t CRC_DAT19_28;
    uint32_t CRC_DAT19_29;
    uint32_t CRC_DAT19_30;
    uint32_t CRC_DAT19_31;
} stc_crc_dat19_bit_t;

typedef struct
{
    uint32_t CRC_DAT20_0;
    uint32_t CRC_DAT20_1;
    uint32_t CRC_DAT20_2;
    uint32_t CRC_DAT20_3;
    uint32_t CRC_DAT20_4;
    uint32_t CRC_DAT20_5;
    uint32_t CRC_DAT20_6;
    uint32_t CRC_DAT20_7;
    uint32_t CRC_DAT20_8;
    uint32_t CRC_DAT20_9;
    uint32_t CRC_DAT20_10;
    uint32_t CRC_DAT20_11;
    uint32_t CRC_DAT20_12;
    uint32_t CRC_DAT20_13;
    uint32_t CRC_DAT20_14;
    uint32_t CRC_DAT20_15;
    uint32_t CRC_DAT20_16;
    uint32_t CRC_DAT20_17;
    uint32_t CRC_DAT20_18;
    uint32_t CRC_DAT20_19;
    uint32_t CRC_DAT20_20;
    uint32_t CRC_DAT20_21;
    uint32_t CRC_DAT20_22;
    uint32_t CRC_DAT20_23;
    uint32_t CRC_DAT20_24;
    uint32_t CRC_DAT20_25;
    uint32_t CRC_DAT20_26;
    uint32_t CRC_DAT20_27;
    uint32_t CRC_DAT20_28;
    uint32_t CRC_DAT20_29;
    uint32_t CRC_DAT20_30;
    uint32_t CRC_DAT20_31;
} stc_crc_dat20_bit_t;

typedef struct
{
    uint32_t CRC_DAT21_0;
    uint32_t CRC_DAT21_1;
    uint32_t CRC_DAT21_2;
    uint32_t CRC_DAT21_3;
    uint32_t CRC_DAT21_4;
    uint32_t CRC_DAT21_5;
    uint32_t CRC_DAT21_6;
    uint32_t CRC_DAT21_7;
    uint32_t CRC_DAT21_8;
    uint32_t CRC_DAT21_9;
    uint32_t CRC_DAT21_10;
    uint32_t CRC_DAT21_11;
    uint32_t CRC_DAT21_12;
    uint32_t CRC_DAT21_13;
    uint32_t CRC_DAT21_14;
    uint32_t CRC_DAT21_15;
    uint32_t CRC_DAT21_16;
    uint32_t CRC_DAT21_17;
    uint32_t CRC_DAT21_18;
    uint32_t CRC_DAT21_19;
    uint32_t CRC_DAT21_20;
    uint32_t CRC_DAT21_21;
    uint32_t CRC_DAT21_22;
    uint32_t CRC_DAT21_23;
    uint32_t CRC_DAT21_24;
    uint32_t CRC_DAT21_25;
    uint32_t CRC_DAT21_26;
    uint32_t CRC_DAT21_27;
    uint32_t CRC_DAT21_28;
    uint32_t CRC_DAT21_29;
    uint32_t CRC_DAT21_30;
    uint32_t CRC_DAT21_31;
} stc_crc_dat21_bit_t;

typedef struct
{
    uint32_t CRC_DAT22_0;
    uint32_t CRC_DAT22_1;
    uint32_t CRC_DAT22_2;
    uint32_t CRC_DAT22_3;
    uint32_t CRC_DAT22_4;
    uint32_t CRC_DAT22_5;
    uint32_t CRC_DAT22_6;
    uint32_t CRC_DAT22_7;
    uint32_t CRC_DAT22_8;
    uint32_t CRC_DAT22_9;
    uint32_t CRC_DAT22_10;
    uint32_t CRC_DAT22_11;
    uint32_t CRC_DAT22_12;
    uint32_t CRC_DAT22_13;
    uint32_t CRC_DAT22_14;
    uint32_t CRC_DAT22_15;
    uint32_t CRC_DAT22_16;
    uint32_t CRC_DAT22_17;
    uint32_t CRC_DAT22_18;
    uint32_t CRC_DAT22_19;
    uint32_t CRC_DAT22_20;
    uint32_t CRC_DAT22_21;
    uint32_t CRC_DAT22_22;
    uint32_t CRC_DAT22_23;
    uint32_t CRC_DAT22_24;
    uint32_t CRC_DAT22_25;
    uint32_t CRC_DAT22_26;
    uint32_t CRC_DAT22_27;
    uint32_t CRC_DAT22_28;
    uint32_t CRC_DAT22_29;
    uint32_t CRC_DAT22_30;
    uint32_t CRC_DAT22_31;
} stc_crc_dat22_bit_t;

typedef struct
{
    uint32_t CRC_DAT23_0;
    uint32_t CRC_DAT23_1;
    uint32_t CRC_DAT23_2;
    uint32_t CRC_DAT23_3;
    uint32_t CRC_DAT23_4;
    uint32_t CRC_DAT23_5;
    uint32_t CRC_DAT23_6;
    uint32_t CRC_DAT23_7;
    uint32_t CRC_DAT23_8;
    uint32_t CRC_DAT23_9;
    uint32_t CRC_DAT23_10;
    uint32_t CRC_DAT23_11;
    uint32_t CRC_DAT23_12;
    uint32_t CRC_DAT23_13;
    uint32_t CRC_DAT23_14;
    uint32_t CRC_DAT23_15;
    uint32_t CRC_DAT23_16;
    uint32_t CRC_DAT23_17;
    uint32_t CRC_DAT23_18;
    uint32_t CRC_DAT23_19;
    uint32_t CRC_DAT23_20;
    uint32_t CRC_DAT23_21;
    uint32_t CRC_DAT23_22;
    uint32_t CRC_DAT23_23;
    uint32_t CRC_DAT23_24;
    uint32_t CRC_DAT23_25;
    uint32_t CRC_DAT23_26;
    uint32_t CRC_DAT23_27;
    uint32_t CRC_DAT23_28;
    uint32_t CRC_DAT23_29;
    uint32_t CRC_DAT23_30;
    uint32_t CRC_DAT23_31;
} stc_crc_dat23_bit_t;

typedef struct
{
    uint32_t CRC_DAT24_0;
    uint32_t CRC_DAT24_1;
    uint32_t CRC_DAT24_2;
    uint32_t CRC_DAT24_3;
    uint32_t CRC_DAT24_4;
    uint32_t CRC_DAT24_5;
    uint32_t CRC_DAT24_6;
    uint32_t CRC_DAT24_7;
    uint32_t CRC_DAT24_8;
    uint32_t CRC_DAT24_9;
    uint32_t CRC_DAT24_10;
    uint32_t CRC_DAT24_11;
    uint32_t CRC_DAT24_12;
    uint32_t CRC_DAT24_13;
    uint32_t CRC_DAT24_14;
    uint32_t CRC_DAT24_15;
    uint32_t CRC_DAT24_16;
    uint32_t CRC_DAT24_17;
    uint32_t CRC_DAT24_18;
    uint32_t CRC_DAT24_19;
    uint32_t CRC_DAT24_20;
    uint32_t CRC_DAT24_21;
    uint32_t CRC_DAT24_22;
    uint32_t CRC_DAT24_23;
    uint32_t CRC_DAT24_24;
    uint32_t CRC_DAT24_25;
    uint32_t CRC_DAT24_26;
    uint32_t CRC_DAT24_27;
    uint32_t CRC_DAT24_28;
    uint32_t CRC_DAT24_29;
    uint32_t CRC_DAT24_30;
    uint32_t CRC_DAT24_31;
} stc_crc_dat24_bit_t;

typedef struct
{
    uint32_t CRC_DAT25_0;
    uint32_t CRC_DAT25_1;
    uint32_t CRC_DAT25_2;
    uint32_t CRC_DAT25_3;
    uint32_t CRC_DAT25_4;
    uint32_t CRC_DAT25_5;
    uint32_t CRC_DAT25_6;
    uint32_t CRC_DAT25_7;
    uint32_t CRC_DAT25_8;
    uint32_t CRC_DAT25_9;
    uint32_t CRC_DAT25_10;
    uint32_t CRC_DAT25_11;
    uint32_t CRC_DAT25_12;
    uint32_t CRC_DAT25_13;
    uint32_t CRC_DAT25_14;
    uint32_t CRC_DAT25_15;
    uint32_t CRC_DAT25_16;
    uint32_t CRC_DAT25_17;
    uint32_t CRC_DAT25_18;
    uint32_t CRC_DAT25_19;
    uint32_t CRC_DAT25_20;
    uint32_t CRC_DAT25_21;
    uint32_t CRC_DAT25_22;
    uint32_t CRC_DAT25_23;
    uint32_t CRC_DAT25_24;
    uint32_t CRC_DAT25_25;
    uint32_t CRC_DAT25_26;
    uint32_t CRC_DAT25_27;
    uint32_t CRC_DAT25_28;
    uint32_t CRC_DAT25_29;
    uint32_t CRC_DAT25_30;
    uint32_t CRC_DAT25_31;
} stc_crc_dat25_bit_t;

typedef struct
{
    uint32_t CRC_DAT26_0;
    uint32_t CRC_DAT26_1;
    uint32_t CRC_DAT26_2;
    uint32_t CRC_DAT26_3;
    uint32_t CRC_DAT26_4;
    uint32_t CRC_DAT26_5;
    uint32_t CRC_DAT26_6;
    uint32_t CRC_DAT26_7;
    uint32_t CRC_DAT26_8;
    uint32_t CRC_DAT26_9;
    uint32_t CRC_DAT26_10;
    uint32_t CRC_DAT26_11;
    uint32_t CRC_DAT26_12;
    uint32_t CRC_DAT26_13;
    uint32_t CRC_DAT26_14;
    uint32_t CRC_DAT26_15;
    uint32_t CRC_DAT26_16;
    uint32_t CRC_DAT26_17;
    uint32_t CRC_DAT26_18;
    uint32_t CRC_DAT26_19;
    uint32_t CRC_DAT26_20;
    uint32_t CRC_DAT26_21;
    uint32_t CRC_DAT26_22;
    uint32_t CRC_DAT26_23;
    uint32_t CRC_DAT26_24;
    uint32_t CRC_DAT26_25;
    uint32_t CRC_DAT26_26;
    uint32_t CRC_DAT26_27;
    uint32_t CRC_DAT26_28;
    uint32_t CRC_DAT26_29;
    uint32_t CRC_DAT26_30;
    uint32_t CRC_DAT26_31;
} stc_crc_dat26_bit_t;

typedef struct
{
    uint32_t CRC_DAT27_0;
    uint32_t CRC_DAT27_1;
    uint32_t CRC_DAT27_2;
    uint32_t CRC_DAT27_3;
    uint32_t CRC_DAT27_4;
    uint32_t CRC_DAT27_5;
    uint32_t CRC_DAT27_6;
    uint32_t CRC_DAT27_7;
    uint32_t CRC_DAT27_8;
    uint32_t CRC_DAT27_9;
    uint32_t CRC_DAT27_10;
    uint32_t CRC_DAT27_11;
    uint32_t CRC_DAT27_12;
    uint32_t CRC_DAT27_13;
    uint32_t CRC_DAT27_14;
    uint32_t CRC_DAT27_15;
    uint32_t CRC_DAT27_16;
    uint32_t CRC_DAT27_17;
    uint32_t CRC_DAT27_18;
    uint32_t CRC_DAT27_19;
    uint32_t CRC_DAT27_20;
    uint32_t CRC_DAT27_21;
    uint32_t CRC_DAT27_22;
    uint32_t CRC_DAT27_23;
    uint32_t CRC_DAT27_24;
    uint32_t CRC_DAT27_25;
    uint32_t CRC_DAT27_26;
    uint32_t CRC_DAT27_27;
    uint32_t CRC_DAT27_28;
    uint32_t CRC_DAT27_29;
    uint32_t CRC_DAT27_30;
    uint32_t CRC_DAT27_31;
} stc_crc_dat27_bit_t;

typedef struct
{
    uint32_t CRC_DAT28_0;
    uint32_t CRC_DAT28_1;
    uint32_t CRC_DAT28_2;
    uint32_t CRC_DAT28_3;
    uint32_t CRC_DAT28_4;
    uint32_t CRC_DAT28_5;
    uint32_t CRC_DAT28_6;
    uint32_t CRC_DAT28_7;
    uint32_t CRC_DAT28_8;
    uint32_t CRC_DAT28_9;
    uint32_t CRC_DAT28_10;
    uint32_t CRC_DAT28_11;
    uint32_t CRC_DAT28_12;
    uint32_t CRC_DAT28_13;
    uint32_t CRC_DAT28_14;
    uint32_t CRC_DAT28_15;
    uint32_t CRC_DAT28_16;
    uint32_t CRC_DAT28_17;
    uint32_t CRC_DAT28_18;
    uint32_t CRC_DAT28_19;
    uint32_t CRC_DAT28_20;
    uint32_t CRC_DAT28_21;
    uint32_t CRC_DAT28_22;
    uint32_t CRC_DAT28_23;
    uint32_t CRC_DAT28_24;
    uint32_t CRC_DAT28_25;
    uint32_t CRC_DAT28_26;
    uint32_t CRC_DAT28_27;
    uint32_t CRC_DAT28_28;
    uint32_t CRC_DAT28_29;
    uint32_t CRC_DAT28_30;
    uint32_t CRC_DAT28_31;
} stc_crc_dat28_bit_t;

typedef struct
{
    uint32_t CRC_DAT29_0;
    uint32_t CRC_DAT29_1;
    uint32_t CRC_DAT29_2;
    uint32_t CRC_DAT29_3;
    uint32_t CRC_DAT29_4;
    uint32_t CRC_DAT29_5;
    uint32_t CRC_DAT29_6;
    uint32_t CRC_DAT29_7;
    uint32_t CRC_DAT29_8;
    uint32_t CRC_DAT29_9;
    uint32_t CRC_DAT29_10;
    uint32_t CRC_DAT29_11;
    uint32_t CRC_DAT29_12;
    uint32_t CRC_DAT29_13;
    uint32_t CRC_DAT29_14;
    uint32_t CRC_DAT29_15;
    uint32_t CRC_DAT29_16;
    uint32_t CRC_DAT29_17;
    uint32_t CRC_DAT29_18;
    uint32_t CRC_DAT29_19;
    uint32_t CRC_DAT29_20;
    uint32_t CRC_DAT29_21;
    uint32_t CRC_DAT29_22;
    uint32_t CRC_DAT29_23;
    uint32_t CRC_DAT29_24;
    uint32_t CRC_DAT29_25;
    uint32_t CRC_DAT29_26;
    uint32_t CRC_DAT29_27;
    uint32_t CRC_DAT29_28;
    uint32_t CRC_DAT29_29;
    uint32_t CRC_DAT29_30;
    uint32_t CRC_DAT29_31;
} stc_crc_dat29_bit_t;

typedef struct
{
    uint32_t CRC_DAT30_0;
    uint32_t CRC_DAT30_1;
    uint32_t CRC_DAT30_2;
    uint32_t CRC_DAT30_3;
    uint32_t CRC_DAT30_4;
    uint32_t CRC_DAT30_5;
    uint32_t CRC_DAT30_6;
    uint32_t CRC_DAT30_7;
    uint32_t CRC_DAT30_8;
    uint32_t CRC_DAT30_9;
    uint32_t CRC_DAT30_10;
    uint32_t CRC_DAT30_11;
    uint32_t CRC_DAT30_12;
    uint32_t CRC_DAT30_13;
    uint32_t CRC_DAT30_14;
    uint32_t CRC_DAT30_15;
    uint32_t CRC_DAT30_16;
    uint32_t CRC_DAT30_17;
    uint32_t CRC_DAT30_18;
    uint32_t CRC_DAT30_19;
    uint32_t CRC_DAT30_20;
    uint32_t CRC_DAT30_21;
    uint32_t CRC_DAT30_22;
    uint32_t CRC_DAT30_23;
    uint32_t CRC_DAT30_24;
    uint32_t CRC_DAT30_25;
    uint32_t CRC_DAT30_26;
    uint32_t CRC_DAT30_27;
    uint32_t CRC_DAT30_28;
    uint32_t CRC_DAT30_29;
    uint32_t CRC_DAT30_30;
    uint32_t CRC_DAT30_31;
} stc_crc_dat30_bit_t;

typedef struct
{
    uint32_t CRC_DAT31_0;
    uint32_t CRC_DAT31_1;
    uint32_t CRC_DAT31_2;
    uint32_t CRC_DAT31_3;
    uint32_t CRC_DAT31_4;
    uint32_t CRC_DAT31_5;
    uint32_t CRC_DAT31_6;
    uint32_t CRC_DAT31_7;
    uint32_t CRC_DAT31_8;
    uint32_t CRC_DAT31_9;
    uint32_t CRC_DAT31_10;
    uint32_t CRC_DAT31_11;
    uint32_t CRC_DAT31_12;
    uint32_t CRC_DAT31_13;
    uint32_t CRC_DAT31_14;
    uint32_t CRC_DAT31_15;
    uint32_t CRC_DAT31_16;
    uint32_t CRC_DAT31_17;
    uint32_t CRC_DAT31_18;
    uint32_t CRC_DAT31_19;
    uint32_t CRC_DAT31_20;
    uint32_t CRC_DAT31_21;
    uint32_t CRC_DAT31_22;
    uint32_t CRC_DAT31_23;
    uint32_t CRC_DAT31_24;
    uint32_t CRC_DAT31_25;
    uint32_t CRC_DAT31_26;
    uint32_t CRC_DAT31_27;
    uint32_t CRC_DAT31_28;
    uint32_t CRC_DAT31_29;
    uint32_t CRC_DAT31_30;
    uint32_t CRC_DAT31_31;
} stc_crc_dat31_bit_t;

typedef struct
{
    __IO uint32_t REFPSC0;
    __IO uint32_t REFPSC1;
    __IO uint32_t REFPSC2;
    uint32_t RESERVED0[1];
    __IO uint32_t REFCKS0;
    __IO uint32_t REFCKS1;
    __IO uint32_t ERRIE;
    __IO uint32_t CTCEN;
    uint32_t RESERVED1[8];
    __IO uint32_t TRMVAL0;
    __IO uint32_t TRMVAL1;
    __IO uint32_t TRMVAL2;
    __IO uint32_t TRMVAL3;
    __IO uint32_t TRMVAL4;
    __IO uint32_t TRMVAL5;
    uint32_t RESERVED2[10];
} stc_ctc_cr1_bit_t;

typedef struct
{
    __IO uint32_t OFSVAL0;
    __IO uint32_t OFSVAL1;
    __IO uint32_t OFSVAL2;
    __IO uint32_t OFSVAL3;
    __IO uint32_t OFSVAL4;
    __IO uint32_t OFSVAL5;
    __IO uint32_t OFSVAL6;
    __IO uint32_t OFSVAL7;
    uint32_t RESERVED0[8];
    __IO uint32_t RLDVAL0;
    __IO uint32_t RLDVAL1;
    __IO uint32_t RLDVAL2;
    __IO uint32_t RLDVAL3;
    __IO uint32_t RLDVAL4;
    __IO uint32_t RLDVAL5;
    __IO uint32_t RLDVAL6;
    __IO uint32_t RLDVAL7;
    __IO uint32_t RLDVAL8;
    __IO uint32_t RLDVAL9;
    __IO uint32_t RLDVAL10;
    __IO uint32_t RLDVAL11;
    __IO uint32_t RLDVAL12;
    __IO uint32_t RLDVAL13;
    __IO uint32_t RLDVAL14;
    __IO uint32_t RLDVAL15;
} stc_ctc_cr2_bit_t;

typedef struct
{
    __IO uint32_t TRIMOK;
    __IO uint32_t TRMOVF;
    __IO uint32_t TRMUDF;
    __IO uint32_t CTCBSY;
    uint32_t RESERVED0[28];
} stc_ctc_str_bit_t;

typedef struct
{
    __IO uint32_t DATA10;
    __IO uint32_t DATA11;
    __IO uint32_t DATA12;
    __IO uint32_t DATA13;
    __IO uint32_t DATA14;
    __IO uint32_t DATA15;
    __IO uint32_t DATA16;
    __IO uint32_t DATA17;
    __IO uint32_t DATA20;
    __IO uint32_t DATA21;
    __IO uint32_t DATA22;
    __IO uint32_t DATA23;
    __IO uint32_t DATA24;
    __IO uint32_t DATA25;
    __IO uint32_t DATA26;
    __IO uint32_t DATA27;
} stc_cmp_dadr1_bit_t;

typedef struct
{
    __IO uint32_t DAEN;
    uint32_t RESERVED0[7];
    __IO uint32_t ALGN;
    uint32_t RESERVED1[7];
} stc_cmp_dacr1_bit_t;

typedef struct
{
    __IO uint32_t DASW;
    uint32_t RESERVED0[7];
    __IO uint32_t WPRT0;
    __IO uint32_t WPRT1;
    __IO uint32_t WPRT2;
    __IO uint32_t WPRT3;
    __IO uint32_t WPRT4;
    __IO uint32_t WPRT5;
    __IO uint32_t WPRT6;
    __IO uint32_t WPRT7;
} stc_cmp_dadc1_bit_t;

typedef struct
{
    uint32_t DBG_AUTHID0_0;
    uint32_t DBG_AUTHID0_1;
    uint32_t DBG_AUTHID0_2;
    uint32_t DBG_AUTHID0_3;
    uint32_t DBG_AUTHID0_4;
    uint32_t DBG_AUTHID0_5;
    uint32_t DBG_AUTHID0_6;
    uint32_t DBG_AUTHID0_7;
    uint32_t DBG_AUTHID0_8;
    uint32_t DBG_AUTHID0_9;
    uint32_t DBG_AUTHID0_10;
    uint32_t DBG_AUTHID0_11;
    uint32_t DBG_AUTHID0_12;
    uint32_t DBG_AUTHID0_13;
    uint32_t DBG_AUTHID0_14;
    uint32_t DBG_AUTHID0_15;
    uint32_t DBG_AUTHID0_16;
    uint32_t DBG_AUTHID0_17;
    uint32_t DBG_AUTHID0_18;
    uint32_t DBG_AUTHID0_19;
    uint32_t DBG_AUTHID0_20;
    uint32_t DBG_AUTHID0_21;
    uint32_t DBG_AUTHID0_22;
    uint32_t DBG_AUTHID0_23;
    uint32_t DBG_AUTHID0_24;
    uint32_t DBG_AUTHID0_25;
    uint32_t DBG_AUTHID0_26;
    uint32_t DBG_AUTHID0_27;
    uint32_t DBG_AUTHID0_28;
    uint32_t DBG_AUTHID0_29;
    uint32_t DBG_AUTHID0_30;
    uint32_t DBG_AUTHID0_31;
} stc_dbg_authid0_bit_t;

typedef struct
{
    uint32_t DBG_AUTHID1_0;
    uint32_t DBG_AUTHID1_1;
    uint32_t DBG_AUTHID1_2;
    uint32_t DBG_AUTHID1_3;
    uint32_t DBG_AUTHID1_4;
    uint32_t DBG_AUTHID1_5;
    uint32_t DBG_AUTHID1_6;
    uint32_t DBG_AUTHID1_7;
    uint32_t DBG_AUTHID1_8;
    uint32_t DBG_AUTHID1_9;
    uint32_t DBG_AUTHID1_10;
    uint32_t DBG_AUTHID1_11;
    uint32_t DBG_AUTHID1_12;
    uint32_t DBG_AUTHID1_13;
    uint32_t DBG_AUTHID1_14;
    uint32_t DBG_AUTHID1_15;
    uint32_t DBG_AUTHID1_16;
    uint32_t DBG_AUTHID1_17;
    uint32_t DBG_AUTHID1_18;
    uint32_t DBG_AUTHID1_19;
    uint32_t DBG_AUTHID1_20;
    uint32_t DBG_AUTHID1_21;
    uint32_t DBG_AUTHID1_22;
    uint32_t DBG_AUTHID1_23;
    uint32_t DBG_AUTHID1_24;
    uint32_t DBG_AUTHID1_25;
    uint32_t DBG_AUTHID1_26;
    uint32_t DBG_AUTHID1_27;
    uint32_t DBG_AUTHID1_28;
    uint32_t DBG_AUTHID1_29;
    uint32_t DBG_AUTHID1_30;
    uint32_t DBG_AUTHID1_31;
} stc_dbg_authid1_bit_t;

typedef struct
{
    uint32_t DBG_AUTHID2_0;
    uint32_t DBG_AUTHID2_1;
    uint32_t DBG_AUTHID2_2;
    uint32_t DBG_AUTHID2_3;
    uint32_t DBG_AUTHID2_4;
    uint32_t DBG_AUTHID2_5;
    uint32_t DBG_AUTHID2_6;
    uint32_t DBG_AUTHID2_7;
    uint32_t DBG_AUTHID2_8;
    uint32_t DBG_AUTHID2_9;
    uint32_t DBG_AUTHID2_10;
    uint32_t DBG_AUTHID2_11;
    uint32_t DBG_AUTHID2_12;
    uint32_t DBG_AUTHID2_13;
    uint32_t DBG_AUTHID2_14;
    uint32_t DBG_AUTHID2_15;
    uint32_t DBG_AUTHID2_16;
    uint32_t DBG_AUTHID2_17;
    uint32_t DBG_AUTHID2_18;
    uint32_t DBG_AUTHID2_19;
    uint32_t DBG_AUTHID2_20;
    uint32_t DBG_AUTHID2_21;
    uint32_t DBG_AUTHID2_22;
    uint32_t DBG_AUTHID2_23;
    uint32_t DBG_AUTHID2_24;
    uint32_t DBG_AUTHID2_25;
    uint32_t DBG_AUTHID2_26;
    uint32_t DBG_AUTHID2_27;
    uint32_t DBG_AUTHID2_28;
    uint32_t DBG_AUTHID2_29;
    uint32_t DBG_AUTHID2_30;
    uint32_t DBG_AUTHID2_31;
} stc_dbg_authid2_bit_t;

typedef struct
{
    uint32_t DBG_RESV0_0;
    uint32_t DBG_RESV0_1;
    uint32_t DBG_RESV0_2;
    uint32_t DBG_RESV0_3;
    uint32_t DBG_RESV0_4;
    uint32_t DBG_RESV0_5;
    uint32_t DBG_RESV0_6;
    uint32_t DBG_RESV0_7;
    uint32_t DBG_RESV0_8;
    uint32_t DBG_RESV0_9;
    uint32_t DBG_RESV0_10;
    uint32_t DBG_RESV0_11;
    uint32_t DBG_RESV0_12;
    uint32_t DBG_RESV0_13;
    uint32_t DBG_RESV0_14;
    uint32_t DBG_RESV0_15;
    uint32_t DBG_RESV0_16;
    uint32_t DBG_RESV0_17;
    uint32_t DBG_RESV0_18;
    uint32_t DBG_RESV0_19;
    uint32_t DBG_RESV0_20;
    uint32_t DBG_RESV0_21;
    uint32_t DBG_RESV0_22;
    uint32_t DBG_RESV0_23;
    uint32_t DBG_RESV0_24;
    uint32_t DBG_RESV0_25;
    uint32_t DBG_RESV0_26;
    uint32_t DBG_RESV0_27;
    uint32_t DBG_RESV0_28;
    uint32_t DBG_RESV0_29;
    uint32_t DBG_RESV0_30;
    uint32_t DBG_RESV0_31;
} stc_dbg_resv0_bit_t;

typedef struct
{
    __IO uint32_t DBG_AUTH;
    __IO uint32_t FMC_REMVLOCK;
    __IO uint32_t FMC_SAFTYLOCK1;
    __IO uint32_t FMC_SAFTYLOCK2;
    uint32_t RESERVED0[4];
    __IO uint32_t MCUSTAT0;
    __IO uint32_t MCUSTAT1;
    uint32_t RESERVED1[22];
} stc_dbg_mcustat_bit_t;

typedef struct
{
    __IO uint32_t EDBGRQ;
    __IO uint32_t RESTART;
    uint32_t RESERVED0[6];
    __IO uint32_t DBG_IRQ;
    uint32_t RESERVED1[23];
} stc_dbg_mcuctl_bit_t;

typedef struct
{
    __IO uint32_t ERASEREQ;
    __IO uint32_t ERASEACK;
    __IO uint32_t ERASEERR;
    uint32_t RESERVED0[29];
} stc_dbg_fmcctl_bit_t;

typedef struct
{
    __IO uint32_t MODE0;
    __IO uint32_t MODE1;
    __IO uint32_t MODE2;
    __IO uint32_t DATASIZE0;
    __IO uint32_t DATASIZE1;
    uint32_t RESERVED0[3];
    __IO uint32_t COMP_TRG;
    uint32_t RESERVED1[22];
    __IO uint32_t INTEN;
} stc_dcu_ctl_bit_t;

typedef struct
{
    __IO uint32_t FLAG_OP;
    __IO uint32_t FLAG_LS2;
    __IO uint32_t FLAG_EQ2;
    __IO uint32_t FLAG_GT2;
    __IO uint32_t FLAG_LS1;
    __IO uint32_t FLAG_EQ1;
    __IO uint32_t FLAG_GT1;
    uint32_t RESERVED0[25];
} stc_dcu_flag_bit_t;

typedef struct
{
    uint32_t DCU_DATA0_0;
    uint32_t DCU_DATA0_1;
    uint32_t DCU_DATA0_2;
    uint32_t DCU_DATA0_3;
    uint32_t DCU_DATA0_4;
    uint32_t DCU_DATA0_5;
    uint32_t DCU_DATA0_6;
    uint32_t DCU_DATA0_7;
    uint32_t DCU_DATA0_8;
    uint32_t DCU_DATA0_9;
    uint32_t DCU_DATA0_10;
    uint32_t DCU_DATA0_11;
    uint32_t DCU_DATA0_12;
    uint32_t DCU_DATA0_13;
    uint32_t DCU_DATA0_14;
    uint32_t DCU_DATA0_15;
    uint32_t DCU_DATA0_16;
    uint32_t DCU_DATA0_17;
    uint32_t DCU_DATA0_18;
    uint32_t DCU_DATA0_19;
    uint32_t DCU_DATA0_20;
    uint32_t DCU_DATA0_21;
    uint32_t DCU_DATA0_22;
    uint32_t DCU_DATA0_23;
    uint32_t DCU_DATA0_24;
    uint32_t DCU_DATA0_25;
    uint32_t DCU_DATA0_26;
    uint32_t DCU_DATA0_27;
    uint32_t DCU_DATA0_28;
    uint32_t DCU_DATA0_29;
    uint32_t DCU_DATA0_30;
    uint32_t DCU_DATA0_31;
} stc_dcu_data0_bit_t;

typedef struct
{
    uint32_t DCU_DATA1_0;
    uint32_t DCU_DATA1_1;
    uint32_t DCU_DATA1_2;
    uint32_t DCU_DATA1_3;
    uint32_t DCU_DATA1_4;
    uint32_t DCU_DATA1_5;
    uint32_t DCU_DATA1_6;
    uint32_t DCU_DATA1_7;
    uint32_t DCU_DATA1_8;
    uint32_t DCU_DATA1_9;
    uint32_t DCU_DATA1_10;
    uint32_t DCU_DATA1_11;
    uint32_t DCU_DATA1_12;
    uint32_t DCU_DATA1_13;
    uint32_t DCU_DATA1_14;
    uint32_t DCU_DATA1_15;
    uint32_t DCU_DATA1_16;
    uint32_t DCU_DATA1_17;
    uint32_t DCU_DATA1_18;
    uint32_t DCU_DATA1_19;
    uint32_t DCU_DATA1_20;
    uint32_t DCU_DATA1_21;
    uint32_t DCU_DATA1_22;
    uint32_t DCU_DATA1_23;
    uint32_t DCU_DATA1_24;
    uint32_t DCU_DATA1_25;
    uint32_t DCU_DATA1_26;
    uint32_t DCU_DATA1_27;
    uint32_t DCU_DATA1_28;
    uint32_t DCU_DATA1_29;
    uint32_t DCU_DATA1_30;
    uint32_t DCU_DATA1_31;
} stc_dcu_data1_bit_t;

typedef struct
{
    uint32_t DCU_DATA2_0;
    uint32_t DCU_DATA2_1;
    uint32_t DCU_DATA2_2;
    uint32_t DCU_DATA2_3;
    uint32_t DCU_DATA2_4;
    uint32_t DCU_DATA2_5;
    uint32_t DCU_DATA2_6;
    uint32_t DCU_DATA2_7;
    uint32_t DCU_DATA2_8;
    uint32_t DCU_DATA2_9;
    uint32_t DCU_DATA2_10;
    uint32_t DCU_DATA2_11;
    uint32_t DCU_DATA2_12;
    uint32_t DCU_DATA2_13;
    uint32_t DCU_DATA2_14;
    uint32_t DCU_DATA2_15;
    uint32_t DCU_DATA2_16;
    uint32_t DCU_DATA2_17;
    uint32_t DCU_DATA2_18;
    uint32_t DCU_DATA2_19;
    uint32_t DCU_DATA2_20;
    uint32_t DCU_DATA2_21;
    uint32_t DCU_DATA2_22;
    uint32_t DCU_DATA2_23;
    uint32_t DCU_DATA2_24;
    uint32_t DCU_DATA2_25;
    uint32_t DCU_DATA2_26;
    uint32_t DCU_DATA2_27;
    uint32_t DCU_DATA2_28;
    uint32_t DCU_DATA2_29;
    uint32_t DCU_DATA2_30;
    uint32_t DCU_DATA2_31;
} stc_dcu_data2_bit_t;

typedef struct
{
    __IO uint32_t CLR_OP;
    __IO uint32_t CLR_LS2;
    __IO uint32_t CLR_EQ2;
    __IO uint32_t CLR_GT2;
    __IO uint32_t CLR_LS1;
    __IO uint32_t CLR_EQ1;
    __IO uint32_t CLR_GT1;
    uint32_t RESERVED0[25];
} stc_dcu_flagclr_bit_t;

typedef struct
{
    __IO uint32_t INT_OP;
    __IO uint32_t INT_LS2;
    __IO uint32_t INT_EQ2;
    __IO uint32_t INT_GT2;
    __IO uint32_t INT_LS1;
    __IO uint32_t INT_EQ1;
    __IO uint32_t INT_GT1;
    __IO uint32_t INT_WIN0;
    __IO uint32_t INT_WIN1;
    uint32_t RESERVED0[23];
} stc_dcu_intsel_bit_t;

typedef struct
{
    __IO uint32_t EN;
    uint32_t RESERVED0[31];
} stc_dma_en_bit_t;

typedef struct
{
    __IO uint32_t TRNERR0;
    __IO uint32_t TRNERR1;
    __IO uint32_t TRNERR2;
    __IO uint32_t TRNERR3;
    uint32_t RESERVED0[12];
    __IO uint32_t REQERR0;
    __IO uint32_t REQERR1;
    __IO uint32_t REQERR2;
    __IO uint32_t REQERR3;
    uint32_t RESERVED1[12];
} stc_dma_intstat0_bit_t;

typedef struct
{
    __IO uint32_t TC0;
    __IO uint32_t TC1;
    __IO uint32_t TC2;
    __IO uint32_t TC3;
    uint32_t RESERVED0[12];
    __IO uint32_t BTC0;
    __IO uint32_t BTC1;
    __IO uint32_t BTC2;
    __IO uint32_t BTC3;
    uint32_t RESERVED1[12];
} stc_dma_intstat1_bit_t;

typedef struct
{
    __IO uint32_t MSKTRNERR0;
    __IO uint32_t MSKTRNERR1;
    __IO uint32_t MSKTRNERR2;
    __IO uint32_t MSKTRNERR3;
    uint32_t RESERVED0[12];
    __IO uint32_t MSKREQERR0;
    __IO uint32_t MSKREQERR1;
    __IO uint32_t MSKREQERR2;
    __IO uint32_t MSKREQERR3;
    uint32_t RESERVED1[12];
} stc_dma_intmask0_bit_t;

typedef struct
{
    __IO uint32_t MSKTC0;
    __IO uint32_t MSKTC1;
    __IO uint32_t MSKTC2;
    __IO uint32_t MSKTC3;
    uint32_t RESERVED0[12];
    __IO uint32_t MSKBTC0;
    __IO uint32_t MSKBTC1;
    __IO uint32_t MSKBTC2;
    __IO uint32_t MSKBTC3;
    uint32_t RESERVED1[12];
} stc_dma_intmask1_bit_t;

typedef struct
{
    __IO uint32_t CLRTRNERR0;
    __IO uint32_t CLRTRNERR1;
    __IO uint32_t CLRTRNERR2;
    __IO uint32_t CLRTRNERR3;
    uint32_t RESERVED0[12];
    __IO uint32_t CLRREQERR0;
    __IO uint32_t CLRREQERR1;
    __IO uint32_t CLRREQERR2;
    __IO uint32_t CLRREQERR3;
    uint32_t RESERVED1[12];
} stc_dma_intclr0_bit_t;

typedef struct
{
    __IO uint32_t CLRTC0;
    __IO uint32_t CLRTC1;
    __IO uint32_t CLRTC2;
    __IO uint32_t CLRTC3;
    uint32_t RESERVED0[12];
    __IO uint32_t CLRBTC0;
    __IO uint32_t CLRBTC1;
    __IO uint32_t CLRBTC2;
    __IO uint32_t CLRBTC3;
    uint32_t RESERVED1[12];
} stc_dma_intclr1_bit_t;

typedef struct
{
    __IO uint32_t CHEN0;
    __IO uint32_t CHEN1;
    __IO uint32_t CHEN2;
    __IO uint32_t CHEN3;
    uint32_t RESERVED0[28];
} stc_dma_chen_bit_t;

typedef struct
{
    __IO uint32_t DMAACT;
    uint32_t RESERVED0[15];
    __IO uint32_t CHACT0;
    __IO uint32_t CHACT1;
    __IO uint32_t CHACT2;
    __IO uint32_t CHACT3;
    uint32_t RESERVED1[12];
} stc_dma_chstat_bit_t;

typedef struct
{
    uint32_t RESERVED0[14];
    __IO uint32_t LLP0;
    __IO uint32_t LLP1;
    __IO uint32_t LLP2;
    __IO uint32_t LLP3;
    __IO uint32_t LLP4;
    __IO uint32_t LLP5;
    __IO uint32_t LLP6;
    __IO uint32_t LLP7;
    __IO uint32_t LLP8;
    __IO uint32_t LLP9;
    __IO uint32_t LLP10;
    __IO uint32_t LLP11;
    __IO uint32_t LLP12;
    __IO uint32_t LLP13;
    __IO uint32_t LLP14;
    __IO uint32_t LLP15;
    __IO uint32_t LLP16;
    __IO uint32_t LLP17;
} stc_dma_ram_llp_bit_t;

typedef struct
{
    uint32_t RESERVED0[14];
    __IO uint32_t LLP0;
    __IO uint32_t LLP1;
    __IO uint32_t LLP2;
    __IO uint32_t LLP3;
    __IO uint32_t LLP4;
    __IO uint32_t LLP5;
    __IO uint32_t LLP6;
    __IO uint32_t LLP7;
    __IO uint32_t LLP8;
    __IO uint32_t LLP9;
    __IO uint32_t LLP10;
    __IO uint32_t LLP11;
    __IO uint32_t LLP12;
    __IO uint32_t LLP13;
    __IO uint32_t LLP14;
    __IO uint32_t LLP15;
    __IO uint32_t LLP16;
    __IO uint32_t LLP17;
} stc_dma_rom_llp_bit_t;

typedef struct
{
    __IO uint32_t CHENCLR0;
    __IO uint32_t CHENCLR1;
    __IO uint32_t CHENCLR2;
    __IO uint32_t CHENCLR3;
    uint32_t RESERVED0[28];
} stc_dma_chenclr_bit_t;

typedef struct
{
    uint32_t DMA_SAR0_0;
    uint32_t DMA_SAR0_1;
    uint32_t DMA_SAR0_2;
    uint32_t DMA_SAR0_3;
    uint32_t DMA_SAR0_4;
    uint32_t DMA_SAR0_5;
    uint32_t DMA_SAR0_6;
    uint32_t DMA_SAR0_7;
    uint32_t DMA_SAR0_8;
    uint32_t DMA_SAR0_9;
    uint32_t DMA_SAR0_10;
    uint32_t DMA_SAR0_11;
    uint32_t DMA_SAR0_12;
    uint32_t DMA_SAR0_13;
    uint32_t DMA_SAR0_14;
    uint32_t DMA_SAR0_15;
    uint32_t DMA_SAR0_16;
    uint32_t DMA_SAR0_17;
    uint32_t DMA_SAR0_18;
    uint32_t DMA_SAR0_19;
    uint32_t DMA_SAR0_20;
    uint32_t DMA_SAR0_21;
    uint32_t DMA_SAR0_22;
    uint32_t DMA_SAR0_23;
    uint32_t DMA_SAR0_24;
    uint32_t DMA_SAR0_25;
    uint32_t DMA_SAR0_26;
    uint32_t DMA_SAR0_27;
    uint32_t DMA_SAR0_28;
    uint32_t DMA_SAR0_29;
    uint32_t DMA_SAR0_30;
    uint32_t DMA_SAR0_31;
} stc_dma_sar0_bit_t;

typedef struct
{
    uint32_t DMA_DAR0_0;
    uint32_t DMA_DAR0_1;
    uint32_t DMA_DAR0_2;
    uint32_t DMA_DAR0_3;
    uint32_t DMA_DAR0_4;
    uint32_t DMA_DAR0_5;
    uint32_t DMA_DAR0_6;
    uint32_t DMA_DAR0_7;
    uint32_t DMA_DAR0_8;
    uint32_t DMA_DAR0_9;
    uint32_t DMA_DAR0_10;
    uint32_t DMA_DAR0_11;
    uint32_t DMA_DAR0_12;
    uint32_t DMA_DAR0_13;
    uint32_t DMA_DAR0_14;
    uint32_t DMA_DAR0_15;
    uint32_t DMA_DAR0_16;
    uint32_t DMA_DAR0_17;
    uint32_t DMA_DAR0_18;
    uint32_t DMA_DAR0_19;
    uint32_t DMA_DAR0_20;
    uint32_t DMA_DAR0_21;
    uint32_t DMA_DAR0_22;
    uint32_t DMA_DAR0_23;
    uint32_t DMA_DAR0_24;
    uint32_t DMA_DAR0_25;
    uint32_t DMA_DAR0_26;
    uint32_t DMA_DAR0_27;
    uint32_t DMA_DAR0_28;
    uint32_t DMA_DAR0_29;
    uint32_t DMA_DAR0_30;
    uint32_t DMA_DAR0_31;
} stc_dma_dar0_bit_t;

typedef struct
{
    __IO uint32_t BLKSIZE0;
    __IO uint32_t BLKSIZE1;
    __IO uint32_t BLKSIZE2;
    __IO uint32_t BLKSIZE3;
    __IO uint32_t BLKSIZE4;
    __IO uint32_t BLKSIZE5;
    __IO uint32_t BLKSIZE6;
    __IO uint32_t BLKSIZE7;
    __IO uint32_t CNT0;
    __IO uint32_t CNT1;
    __IO uint32_t CNT2;
    __IO uint32_t CNT3;
    __IO uint32_t CNT4;
    __IO uint32_t CNT5;
    __IO uint32_t CNT6;
    __IO uint32_t CNT7;
    __IO uint32_t CNT8;
    __IO uint32_t CNT9;
    __IO uint32_t LLP0;
    __IO uint32_t LLP1;
    __IO uint32_t LLP2;
    __IO uint32_t LLP3;
    __IO uint32_t LLP4;
    __IO uint32_t LLP5;
    __IO uint32_t LLP6;
    __IO uint32_t LLP7;
    __IO uint32_t LLP8;
    __IO uint32_t LLP9;
    __IO uint32_t LLPEN;
    __IO uint32_t LLPRUN;
    __IO uint32_t HSIZE0;
    __IO uint32_t HSIZE1;
} stc_dma_ch0ctl0_bit_t;

typedef struct
{
    __IO uint32_t OFFSET0;
    __IO uint32_t OFFSET1;
    __IO uint32_t OFFSET2;
    __IO uint32_t OFFSET3;
    __IO uint32_t OFFSET4;
    __IO uint32_t OFFSET5;
    __IO uint32_t OFFSET6;
    __IO uint32_t OFFSET7;
    __IO uint32_t OFFSET8;
    __IO uint32_t OFFSET9;
    __IO uint32_t OFFSET10;
    __IO uint32_t OFFSET11;
    __IO uint32_t OFFSET12;
    __IO uint32_t OFFSET13;
    __IO uint32_t OFFSET14;
    __IO uint32_t OFFSET15;
    __IO uint32_t RPTNSCNT0;
    __IO uint32_t RPTNSCNT1;
    __IO uint32_t RPTNSCNT2;
    __IO uint32_t RPTNSCNT3;
    __IO uint32_t RPTNSCNT4;
    __IO uint32_t RPTNSCNT5;
    __IO uint32_t RPTNSCNT6;
    __IO uint32_t RPTNSCNT7;
    __IO uint32_t RPTNSEN;
    __IO uint32_t RPTNSSEL0;
    __IO uint32_t RPTNSSEL1;
    __IO uint32_t LLPSEL;
    __IO uint32_t SINC0;
    __IO uint32_t SINC1;
    __IO uint32_t DINC0;
    __IO uint32_t DINC1;
} stc_dma_ch0ctl1_bit_t;

typedef struct
{
    uint32_t DMA_SAR1_0;
    uint32_t DMA_SAR1_1;
    uint32_t DMA_SAR1_2;
    uint32_t DMA_SAR1_3;
    uint32_t DMA_SAR1_4;
    uint32_t DMA_SAR1_5;
    uint32_t DMA_SAR1_6;
    uint32_t DMA_SAR1_7;
    uint32_t DMA_SAR1_8;
    uint32_t DMA_SAR1_9;
    uint32_t DMA_SAR1_10;
    uint32_t DMA_SAR1_11;
    uint32_t DMA_SAR1_12;
    uint32_t DMA_SAR1_13;
    uint32_t DMA_SAR1_14;
    uint32_t DMA_SAR1_15;
    uint32_t DMA_SAR1_16;
    uint32_t DMA_SAR1_17;
    uint32_t DMA_SAR1_18;
    uint32_t DMA_SAR1_19;
    uint32_t DMA_SAR1_20;
    uint32_t DMA_SAR1_21;
    uint32_t DMA_SAR1_22;
    uint32_t DMA_SAR1_23;
    uint32_t DMA_SAR1_24;
    uint32_t DMA_SAR1_25;
    uint32_t DMA_SAR1_26;
    uint32_t DMA_SAR1_27;
    uint32_t DMA_SAR1_28;
    uint32_t DMA_SAR1_29;
    uint32_t DMA_SAR1_30;
    uint32_t DMA_SAR1_31;
} stc_dma_sar1_bit_t;

typedef struct
{
    uint32_t DMA_DAR1_0;
    uint32_t DMA_DAR1_1;
    uint32_t DMA_DAR1_2;
    uint32_t DMA_DAR1_3;
    uint32_t DMA_DAR1_4;
    uint32_t DMA_DAR1_5;
    uint32_t DMA_DAR1_6;
    uint32_t DMA_DAR1_7;
    uint32_t DMA_DAR1_8;
    uint32_t DMA_DAR1_9;
    uint32_t DMA_DAR1_10;
    uint32_t DMA_DAR1_11;
    uint32_t DMA_DAR1_12;
    uint32_t DMA_DAR1_13;
    uint32_t DMA_DAR1_14;
    uint32_t DMA_DAR1_15;
    uint32_t DMA_DAR1_16;
    uint32_t DMA_DAR1_17;
    uint32_t DMA_DAR1_18;
    uint32_t DMA_DAR1_19;
    uint32_t DMA_DAR1_20;
    uint32_t DMA_DAR1_21;
    uint32_t DMA_DAR1_22;
    uint32_t DMA_DAR1_23;
    uint32_t DMA_DAR1_24;
    uint32_t DMA_DAR1_25;
    uint32_t DMA_DAR1_26;
    uint32_t DMA_DAR1_27;
    uint32_t DMA_DAR1_28;
    uint32_t DMA_DAR1_29;
    uint32_t DMA_DAR1_30;
    uint32_t DMA_DAR1_31;
} stc_dma_dar1_bit_t;

typedef struct
{
    __IO uint32_t BLKSIZE0;
    __IO uint32_t BLKSIZE1;
    __IO uint32_t BLKSIZE2;
    __IO uint32_t BLKSIZE3;
    __IO uint32_t BLKSIZE4;
    __IO uint32_t BLKSIZE5;
    __IO uint32_t BLKSIZE6;
    __IO uint32_t BLKSIZE7;
    __IO uint32_t CNT0;
    __IO uint32_t CNT1;
    __IO uint32_t CNT2;
    __IO uint32_t CNT3;
    __IO uint32_t CNT4;
    __IO uint32_t CNT5;
    __IO uint32_t CNT6;
    __IO uint32_t CNT7;
    __IO uint32_t CNT8;
    __IO uint32_t CNT9;
    __IO uint32_t LLP0;
    __IO uint32_t LLP1;
    __IO uint32_t LLP2;
    __IO uint32_t LLP3;
    __IO uint32_t LLP4;
    __IO uint32_t LLP5;
    __IO uint32_t LLP6;
    __IO uint32_t LLP7;
    __IO uint32_t LLP8;
    __IO uint32_t LLP9;
    __IO uint32_t LLPEN;
    __IO uint32_t LLPRUN;
    __IO uint32_t HSIZE0;
    __IO uint32_t HSIZE1;
} stc_dma_ch1ctl0_bit_t;

typedef struct
{
    __IO uint32_t OFFSET0;
    __IO uint32_t OFFSET1;
    __IO uint32_t OFFSET2;
    __IO uint32_t OFFSET3;
    __IO uint32_t OFFSET4;
    __IO uint32_t OFFSET5;
    __IO uint32_t OFFSET6;
    __IO uint32_t OFFSET7;
    __IO uint32_t OFFSET8;
    __IO uint32_t OFFSET9;
    __IO uint32_t OFFSET10;
    __IO uint32_t OFFSET11;
    __IO uint32_t OFFSET12;
    __IO uint32_t OFFSET13;
    __IO uint32_t OFFSET14;
    __IO uint32_t OFFSET15;
    __IO uint32_t RPTNSCNT0;
    __IO uint32_t RPTNSCNT1;
    __IO uint32_t RPTNSCNT2;
    __IO uint32_t RPTNSCNT3;
    __IO uint32_t RPTNSCNT4;
    __IO uint32_t RPTNSCNT5;
    __IO uint32_t RPTNSCNT6;
    __IO uint32_t RPTNSCNT7;
    __IO uint32_t RPTNSEN;
    __IO uint32_t RPTNSSEL0;
    __IO uint32_t RPTNSSEL1;
    __IO uint32_t LLPSEL;
    __IO uint32_t SINC0;
    __IO uint32_t SINC1;
    __IO uint32_t DINC0;
    __IO uint32_t DINC1;
} stc_dma_ch1ctl1_bit_t;

typedef struct
{
    uint32_t DMA_SAR2_0;
    uint32_t DMA_SAR2_1;
    uint32_t DMA_SAR2_2;
    uint32_t DMA_SAR2_3;
    uint32_t DMA_SAR2_4;
    uint32_t DMA_SAR2_5;
    uint32_t DMA_SAR2_6;
    uint32_t DMA_SAR2_7;
    uint32_t DMA_SAR2_8;
    uint32_t DMA_SAR2_9;
    uint32_t DMA_SAR2_10;
    uint32_t DMA_SAR2_11;
    uint32_t DMA_SAR2_12;
    uint32_t DMA_SAR2_13;
    uint32_t DMA_SAR2_14;
    uint32_t DMA_SAR2_15;
    uint32_t DMA_SAR2_16;
    uint32_t DMA_SAR2_17;
    uint32_t DMA_SAR2_18;
    uint32_t DMA_SAR2_19;
    uint32_t DMA_SAR2_20;
    uint32_t DMA_SAR2_21;
    uint32_t DMA_SAR2_22;
    uint32_t DMA_SAR2_23;
    uint32_t DMA_SAR2_24;
    uint32_t DMA_SAR2_25;
    uint32_t DMA_SAR2_26;
    uint32_t DMA_SAR2_27;
    uint32_t DMA_SAR2_28;
    uint32_t DMA_SAR2_29;
    uint32_t DMA_SAR2_30;
    uint32_t DMA_SAR2_31;
} stc_dma_sar2_bit_t;

typedef struct
{
    uint32_t DMA_DAR2_0;
    uint32_t DMA_DAR2_1;
    uint32_t DMA_DAR2_2;
    uint32_t DMA_DAR2_3;
    uint32_t DMA_DAR2_4;
    uint32_t DMA_DAR2_5;
    uint32_t DMA_DAR2_6;
    uint32_t DMA_DAR2_7;
    uint32_t DMA_DAR2_8;
    uint32_t DMA_DAR2_9;
    uint32_t DMA_DAR2_10;
    uint32_t DMA_DAR2_11;
    uint32_t DMA_DAR2_12;
    uint32_t DMA_DAR2_13;
    uint32_t DMA_DAR2_14;
    uint32_t DMA_DAR2_15;
    uint32_t DMA_DAR2_16;
    uint32_t DMA_DAR2_17;
    uint32_t DMA_DAR2_18;
    uint32_t DMA_DAR2_19;
    uint32_t DMA_DAR2_20;
    uint32_t DMA_DAR2_21;
    uint32_t DMA_DAR2_22;
    uint32_t DMA_DAR2_23;
    uint32_t DMA_DAR2_24;
    uint32_t DMA_DAR2_25;
    uint32_t DMA_DAR2_26;
    uint32_t DMA_DAR2_27;
    uint32_t DMA_DAR2_28;
    uint32_t DMA_DAR2_29;
    uint32_t DMA_DAR2_30;
    uint32_t DMA_DAR2_31;
} stc_dma_dar2_bit_t;

typedef struct
{
    __IO uint32_t BLKSIZE0;
    __IO uint32_t BLKSIZE1;
    __IO uint32_t BLKSIZE2;
    __IO uint32_t BLKSIZE3;
    __IO uint32_t BLKSIZE4;
    __IO uint32_t BLKSIZE5;
    __IO uint32_t BLKSIZE6;
    __IO uint32_t BLKSIZE7;
    __IO uint32_t CNT0;
    __IO uint32_t CNT1;
    __IO uint32_t CNT2;
    __IO uint32_t CNT3;
    __IO uint32_t CNT4;
    __IO uint32_t CNT5;
    __IO uint32_t CNT6;
    __IO uint32_t CNT7;
    __IO uint32_t CNT8;
    __IO uint32_t CNT9;
    __IO uint32_t LLP0;
    __IO uint32_t LLP1;
    __IO uint32_t LLP2;
    __IO uint32_t LLP3;
    __IO uint32_t LLP4;
    __IO uint32_t LLP5;
    __IO uint32_t LLP6;
    __IO uint32_t LLP7;
    __IO uint32_t LLP8;
    __IO uint32_t LLP9;
    __IO uint32_t LLPEN;
    __IO uint32_t LLPRUN;
    __IO uint32_t HSIZE0;
    __IO uint32_t HSIZE1;
} stc_dma_ch2ctl0_bit_t;

typedef struct
{
    __IO uint32_t OFFSET0;
    __IO uint32_t OFFSET1;
    __IO uint32_t OFFSET2;
    __IO uint32_t OFFSET3;
    __IO uint32_t OFFSET4;
    __IO uint32_t OFFSET5;
    __IO uint32_t OFFSET6;
    __IO uint32_t OFFSET7;
    __IO uint32_t OFFSET8;
    __IO uint32_t OFFSET9;
    __IO uint32_t OFFSET10;
    __IO uint32_t OFFSET11;
    __IO uint32_t OFFSET12;
    __IO uint32_t OFFSET13;
    __IO uint32_t OFFSET14;
    __IO uint32_t OFFSET15;
    __IO uint32_t RPTNSCNT0;
    __IO uint32_t RPTNSCNT1;
    __IO uint32_t RPTNSCNT2;
    __IO uint32_t RPTNSCNT3;
    __IO uint32_t RPTNSCNT4;
    __IO uint32_t RPTNSCNT5;
    __IO uint32_t RPTNSCNT6;
    __IO uint32_t RPTNSCNT7;
    __IO uint32_t RPTNSEN;
    __IO uint32_t RPTNSSEL0;
    __IO uint32_t RPTNSSEL1;
    __IO uint32_t LLPSEL;
    __IO uint32_t SINC0;
    __IO uint32_t SINC1;
    __IO uint32_t DINC0;
    __IO uint32_t DINC1;
} stc_dma_ch2ctl1_bit_t;

typedef struct
{
    uint32_t DMA_SAR3_0;
    uint32_t DMA_SAR3_1;
    uint32_t DMA_SAR3_2;
    uint32_t DMA_SAR3_3;
    uint32_t DMA_SAR3_4;
    uint32_t DMA_SAR3_5;
    uint32_t DMA_SAR3_6;
    uint32_t DMA_SAR3_7;
    uint32_t DMA_SAR3_8;
    uint32_t DMA_SAR3_9;
    uint32_t DMA_SAR3_10;
    uint32_t DMA_SAR3_11;
    uint32_t DMA_SAR3_12;
    uint32_t DMA_SAR3_13;
    uint32_t DMA_SAR3_14;
    uint32_t DMA_SAR3_15;
    uint32_t DMA_SAR3_16;
    uint32_t DMA_SAR3_17;
    uint32_t DMA_SAR3_18;
    uint32_t DMA_SAR3_19;
    uint32_t DMA_SAR3_20;
    uint32_t DMA_SAR3_21;
    uint32_t DMA_SAR3_22;
    uint32_t DMA_SAR3_23;
    uint32_t DMA_SAR3_24;
    uint32_t DMA_SAR3_25;
    uint32_t DMA_SAR3_26;
    uint32_t DMA_SAR3_27;
    uint32_t DMA_SAR3_28;
    uint32_t DMA_SAR3_29;
    uint32_t DMA_SAR3_30;
    uint32_t DMA_SAR3_31;
} stc_dma_sar3_bit_t;

typedef struct
{
    uint32_t DMA_DAR3_0;
    uint32_t DMA_DAR3_1;
    uint32_t DMA_DAR3_2;
    uint32_t DMA_DAR3_3;
    uint32_t DMA_DAR3_4;
    uint32_t DMA_DAR3_5;
    uint32_t DMA_DAR3_6;
    uint32_t DMA_DAR3_7;
    uint32_t DMA_DAR3_8;
    uint32_t DMA_DAR3_9;
    uint32_t DMA_DAR3_10;
    uint32_t DMA_DAR3_11;
    uint32_t DMA_DAR3_12;
    uint32_t DMA_DAR3_13;
    uint32_t DMA_DAR3_14;
    uint32_t DMA_DAR3_15;
    uint32_t DMA_DAR3_16;
    uint32_t DMA_DAR3_17;
    uint32_t DMA_DAR3_18;
    uint32_t DMA_DAR3_19;
    uint32_t DMA_DAR3_20;
    uint32_t DMA_DAR3_21;
    uint32_t DMA_DAR3_22;
    uint32_t DMA_DAR3_23;
    uint32_t DMA_DAR3_24;
    uint32_t DMA_DAR3_25;
    uint32_t DMA_DAR3_26;
    uint32_t DMA_DAR3_27;
    uint32_t DMA_DAR3_28;
    uint32_t DMA_DAR3_29;
    uint32_t DMA_DAR3_30;
    uint32_t DMA_DAR3_31;
} stc_dma_dar3_bit_t;

typedef struct
{
    __IO uint32_t BLKSIZE0;
    __IO uint32_t BLKSIZE1;
    __IO uint32_t BLKSIZE2;
    __IO uint32_t BLKSIZE3;
    __IO uint32_t BLKSIZE4;
    __IO uint32_t BLKSIZE5;
    __IO uint32_t BLKSIZE6;
    __IO uint32_t BLKSIZE7;
    __IO uint32_t CNT0;
    __IO uint32_t CNT1;
    __IO uint32_t CNT2;
    __IO uint32_t CNT3;
    __IO uint32_t CNT4;
    __IO uint32_t CNT5;
    __IO uint32_t CNT6;
    __IO uint32_t CNT7;
    __IO uint32_t CNT8;
    __IO uint32_t CNT9;
    __IO uint32_t LLP0;
    __IO uint32_t LLP1;
    __IO uint32_t LLP2;
    __IO uint32_t LLP3;
    __IO uint32_t LLP4;
    __IO uint32_t LLP5;
    __IO uint32_t LLP6;
    __IO uint32_t LLP7;
    __IO uint32_t LLP8;
    __IO uint32_t LLP9;
    __IO uint32_t LLPEN;
    __IO uint32_t LLPRUN;
    __IO uint32_t HSIZE0;
    __IO uint32_t HSIZE1;
} stc_dma_ch3ctl0_bit_t;

typedef struct
{
    __IO uint32_t OFFSET0;
    __IO uint32_t OFFSET1;
    __IO uint32_t OFFSET2;
    __IO uint32_t OFFSET3;
    __IO uint32_t OFFSET4;
    __IO uint32_t OFFSET5;
    __IO uint32_t OFFSET6;
    __IO uint32_t OFFSET7;
    __IO uint32_t OFFSET8;
    __IO uint32_t OFFSET9;
    __IO uint32_t OFFSET10;
    __IO uint32_t OFFSET11;
    __IO uint32_t OFFSET12;
    __IO uint32_t OFFSET13;
    __IO uint32_t OFFSET14;
    __IO uint32_t OFFSET15;
    __IO uint32_t RPTNSCNT0;
    __IO uint32_t RPTNSCNT1;
    __IO uint32_t RPTNSCNT2;
    __IO uint32_t RPTNSCNT3;
    __IO uint32_t RPTNSCNT4;
    __IO uint32_t RPTNSCNT5;
    __IO uint32_t RPTNSCNT6;
    __IO uint32_t RPTNSCNT7;
    __IO uint32_t RPTNSEN;
    __IO uint32_t RPTNSSEL0;
    __IO uint32_t RPTNSSEL1;
    __IO uint32_t LLPSEL;
    __IO uint32_t SINC0;
    __IO uint32_t SINC1;
    __IO uint32_t DINC0;
    __IO uint32_t DINC1;
} stc_dma_ch3ctl1_bit_t;

typedef struct
{
    __IO uint32_t FAPRT0;
    __IO uint32_t FAPRT1;
    __IO uint32_t FAPRT2;
    __IO uint32_t FAPRT3;
    __IO uint32_t FAPRT4;
    __IO uint32_t FAPRT5;
    __IO uint32_t FAPRT6;
    __IO uint32_t FAPRT7;
    __IO uint32_t FAPRT8;
    __IO uint32_t FAPRT9;
    __IO uint32_t FAPRT10;
    __IO uint32_t FAPRT11;
    __IO uint32_t FAPRT12;
    __IO uint32_t FAPRT13;
    __IO uint32_t FAPRT14;
    __IO uint32_t FAPRT15;
    uint32_t RESERVED0[16];
} stc_efm_faprt_bit_t;

typedef struct
{
    __IO uint32_t FSTP;
    uint32_t RESERVED0[31];
} stc_efm_fstp_bit_t;

typedef struct
{
    __IO uint32_t FLWT0;
    __IO uint32_t FLWT1;
    __IO uint32_t FLWT2;
    uint32_t RESERVED0[13];
    __IO uint32_t ICHE;
    __IO uint32_t DCHE;
    uint32_t RESERVED1[1];
    __IO uint32_t CRST;
    uint32_t RESERVED2[12];
} stc_efm_frmc_bit_t;

typedef struct
{
    __IO uint32_t PEMODE;
    uint32_t RESERVED0[3];
    __IO uint32_t PEMOD0;
    __IO uint32_t PEMOD1;
    __IO uint32_t PEMOD2;
    uint32_t RESERVED1[1];
    __IO uint32_t BUSHLDCTL;
    uint32_t RESERVED2[23];
} stc_efm_fwmc_bit_t;

typedef struct
{
    __IO uint32_t PEWERR;
    __IO uint32_t PEPRTERR;
    uint32_t RESERVED0[1];
    __IO uint32_t PGMISMTCH;
    __IO uint32_t OPTEND;
    __IO uint32_t RDCOLERR;
    uint32_t RESERVED1[2];
    __IO uint32_t RDY;
    uint32_t RESERVED2[23];
} stc_efm_fsr_bit_t;

typedef struct
{
    __IO uint32_t PEWERRCLR;
    __IO uint32_t PEPRTERRCLR;
    uint32_t RESERVED0[1];
    __IO uint32_t PGMISMTCHCLR;
    __IO uint32_t OPTENDCLR;
    __IO uint32_t RDCOLERRCLR;
    uint32_t RESERVED1[26];
} stc_efm_fsclr_bit_t;

typedef struct
{
    __IO uint32_t PEERRITE;
    __IO uint32_t OPTENDITE;
    __IO uint32_t RDCOLERRITE;
    uint32_t RESERVED0[29];
} stc_efm_fite_bit_t;

typedef struct
{
    __IO uint32_t FPMTSW0;
    __IO uint32_t FPMTSW1;
    __IO uint32_t FPMTSW2;
    __IO uint32_t FPMTSW3;
    __IO uint32_t FPMTSW4;
    __IO uint32_t FPMTSW5;
    __IO uint32_t FPMTSW6;
    __IO uint32_t FPMTSW7;
    __IO uint32_t FPMTSW8;
    __IO uint32_t FPMTSW9;
    __IO uint32_t FPMTSW10;
    __IO uint32_t FPMTSW11;
    __IO uint32_t FPMTSW12;
    __IO uint32_t FPMTSW13;
    __IO uint32_t FPMTSW14;
    __IO uint32_t FPMTSW15;
    __IO uint32_t FPMTSW16;
    uint32_t RESERVED0[15];
} stc_efm_fpmtsw_bit_t;

typedef struct
{
    __IO uint32_t FPMTEW0;
    __IO uint32_t FPMTEW1;
    __IO uint32_t FPMTEW2;
    __IO uint32_t FPMTEW3;
    __IO uint32_t FPMTEW4;
    __IO uint32_t FPMTEW5;
    __IO uint32_t FPMTEW6;
    __IO uint32_t FPMTEW7;
    __IO uint32_t FPMTEW8;
    __IO uint32_t FPMTEW9;
    __IO uint32_t FPMTEW10;
    __IO uint32_t FPMTEW11;
    __IO uint32_t FPMTEW12;
    __IO uint32_t FPMTEW13;
    __IO uint32_t FPMTEW14;
    __IO uint32_t FPMTEW15;
    __IO uint32_t FPMTEW16;
    uint32_t RESERVED0[15];
} stc_efm_fpmtew_bit_t;

typedef struct
{
    uint32_t EFM_UQID0_0;
    uint32_t EFM_UQID0_1;
    uint32_t EFM_UQID0_2;
    uint32_t EFM_UQID0_3;
    uint32_t EFM_UQID0_4;
    uint32_t EFM_UQID0_5;
    uint32_t EFM_UQID0_6;
    uint32_t EFM_UQID0_7;
    uint32_t EFM_UQID0_8;
    uint32_t EFM_UQID0_9;
    uint32_t EFM_UQID0_10;
    uint32_t EFM_UQID0_11;
    uint32_t EFM_UQID0_12;
    uint32_t EFM_UQID0_13;
    uint32_t EFM_UQID0_14;
    uint32_t EFM_UQID0_15;
    uint32_t EFM_UQID0_16;
    uint32_t EFM_UQID0_17;
    uint32_t EFM_UQID0_18;
    uint32_t EFM_UQID0_19;
    uint32_t EFM_UQID0_20;
    uint32_t EFM_UQID0_21;
    uint32_t EFM_UQID0_22;
    uint32_t EFM_UQID0_23;
    uint32_t EFM_UQID0_24;
    uint32_t EFM_UQID0_25;
    uint32_t EFM_UQID0_26;
    uint32_t EFM_UQID0_27;
    uint32_t EFM_UQID0_28;
    uint32_t EFM_UQID0_29;
    uint32_t EFM_UQID0_30;
    uint32_t EFM_UQID0_31;
} stc_efm_uqid0_bit_t;

typedef struct
{
    uint32_t EFM_UQID1_0;
    uint32_t EFM_UQID1_1;
    uint32_t EFM_UQID1_2;
    uint32_t EFM_UQID1_3;
    uint32_t EFM_UQID1_4;
    uint32_t EFM_UQID1_5;
    uint32_t EFM_UQID1_6;
    uint32_t EFM_UQID1_7;
    uint32_t EFM_UQID1_8;
    uint32_t EFM_UQID1_9;
    uint32_t EFM_UQID1_10;
    uint32_t EFM_UQID1_11;
    uint32_t EFM_UQID1_12;
    uint32_t EFM_UQID1_13;
    uint32_t EFM_UQID1_14;
    uint32_t EFM_UQID1_15;
    uint32_t EFM_UQID1_16;
    uint32_t EFM_UQID1_17;
    uint32_t EFM_UQID1_18;
    uint32_t EFM_UQID1_19;
    uint32_t EFM_UQID1_20;
    uint32_t EFM_UQID1_21;
    uint32_t EFM_UQID1_22;
    uint32_t EFM_UQID1_23;
    uint32_t EFM_UQID1_24;
    uint32_t EFM_UQID1_25;
    uint32_t EFM_UQID1_26;
    uint32_t EFM_UQID1_27;
    uint32_t EFM_UQID1_28;
    uint32_t EFM_UQID1_29;
    uint32_t EFM_UQID1_30;
    uint32_t EFM_UQID1_31;
} stc_efm_uqid1_bit_t;

typedef struct
{
    uint32_t EFM_UQID2_0;
    uint32_t EFM_UQID2_1;
    uint32_t EFM_UQID2_2;
    uint32_t EFM_UQID2_3;
    uint32_t EFM_UQID2_4;
    uint32_t EFM_UQID2_5;
    uint32_t EFM_UQID2_6;
    uint32_t EFM_UQID2_7;
    uint32_t EFM_UQID2_8;
    uint32_t EFM_UQID2_9;
    uint32_t EFM_UQID2_10;
    uint32_t EFM_UQID2_11;
    uint32_t EFM_UQID2_12;
    uint32_t EFM_UQID2_13;
    uint32_t EFM_UQID2_14;
    uint32_t EFM_UQID2_15;
    uint32_t EFM_UQID2_16;
    uint32_t EFM_UQID2_17;
    uint32_t EFM_UQID2_18;
    uint32_t EFM_UQID2_19;
    uint32_t EFM_UQID2_20;
    uint32_t EFM_UQID2_21;
    uint32_t EFM_UQID2_22;
    uint32_t EFM_UQID2_23;
    uint32_t EFM_UQID2_24;
    uint32_t EFM_UQID2_25;
    uint32_t EFM_UQID2_26;
    uint32_t EFM_UQID2_27;
    uint32_t EFM_UQID2_28;
    uint32_t EFM_UQID2_29;
    uint32_t EFM_UQID2_30;
    uint32_t EFM_UQID2_31;
} stc_efm_uqid2_bit_t;

typedef struct
{
    uint32_t EFM_UQID3_0;
    uint32_t EFM_UQID3_1;
    uint32_t EFM_UQID3_2;
    uint32_t EFM_UQID3_3;
    uint32_t EFM_UQID3_4;
    uint32_t EFM_UQID3_5;
    uint32_t EFM_UQID3_6;
    uint32_t EFM_UQID3_7;
    uint32_t EFM_UQID3_8;
    uint32_t EFM_UQID3_9;
    uint32_t EFM_UQID3_10;
    uint32_t EFM_UQID3_11;
    uint32_t EFM_UQID3_12;
    uint32_t EFM_UQID3_13;
    uint32_t EFM_UQID3_14;
    uint32_t EFM_UQID3_15;
    uint32_t EFM_UQID3_16;
    uint32_t EFM_UQID3_17;
    uint32_t EFM_UQID3_18;
    uint32_t EFM_UQID3_19;
    uint32_t EFM_UQID3_20;
    uint32_t EFM_UQID3_21;
    uint32_t EFM_UQID3_22;
    uint32_t EFM_UQID3_23;
    uint32_t EFM_UQID3_24;
    uint32_t EFM_UQID3_25;
    uint32_t EFM_UQID3_26;
    uint32_t EFM_UQID3_27;
    uint32_t EFM_UQID3_28;
    uint32_t EFM_UQID3_29;
    uint32_t EFM_UQID3_30;
    uint32_t EFM_UQID3_31;
} stc_efm_uqid3_bit_t;

typedef struct
{
    __IO uint32_t HRCFREQS0;
    __IO uint32_t HRCFREQS1;
    __IO uint32_t HRCFREQS2;
    __IO uint32_t HRCFREQS3;
    uint32_t RESERVED0[4];
} stc_efm_hrccfgr_bit_t;

typedef struct
{
    __IO uint32_t CMPEN0;
    __IO uint32_t CMPEN1;
    __IO uint32_t CMPEN2;
    uint32_t RESERVED0[1];
    __IO uint32_t OSCSTPEN;
    __IO uint32_t PWMSEN0;
    __IO uint32_t PWMSEN1;
    __IO uint32_t PWMSEN2;
    __IO uint32_t PORTINEN0;
    __IO uint32_t PORTINEN1;
    __IO uint32_t PORTINEN2;
    uint32_t RESERVED1[5];
    __IO uint32_t NFSEL00;
    __IO uint32_t NFSEL01;
    __IO uint32_t NFEN0;
    __IO uint32_t INVSEL0;
    __IO uint32_t NFSEL10;
    __IO uint32_t NFSEL11;
    __IO uint32_t NFEN1;
    __IO uint32_t INVSEL1;
    __IO uint32_t NFSEL20;
    __IO uint32_t NFSEL21;
    __IO uint32_t NFEN2;
    __IO uint32_t INVSEL2;
    uint32_t RESERVED2[4];
} stc_emb_ctl0_bit_t;

typedef struct
{
    __IO uint32_t PWMLV0;
    __IO uint32_t PWMLV1;
    __IO uint32_t PWMLV2;
    uint32_t RESERVED0[29];
} stc_emb_pwmlv0_bit_t;

typedef struct
{
    __IO uint32_t SOE;
    uint32_t RESERVED0[31];
} stc_emb_soe0_bit_t;

typedef struct
{
    __IO uint32_t PWMSF;
    __IO uint32_t CMPF;
    __IO uint32_t OSF;
    __IO uint32_t PWMST;
    uint32_t RESERVED0[4];
    __IO uint32_t PORTINF0;
    __IO uint32_t PORTINF1;
    __IO uint32_t PORTINF2;
    uint32_t RESERVED1[1];
    __IO uint32_t PORTINST0;
    __IO uint32_t PORTINST1;
    __IO uint32_t PORTINST2;
    uint32_t RESERVED2[17];
} stc_emb_stat0_bit_t;

typedef struct
{
    __IO uint32_t PWMSFCLR;
    __IO uint32_t CMPFCLR;
    __IO uint32_t OSFCLR;
    uint32_t RESERVED0[5];
    __IO uint32_t PORTINFCLR0;
    __IO uint32_t PORTINFCLR1;
    __IO uint32_t PORTINFCLR2;
    uint32_t RESERVED1[21];
} stc_emb_statclr0_bit_t;

typedef struct
{
    __IO uint32_t PWMINTEN;
    __IO uint32_t CMPINTEN;
    __IO uint32_t OSINTEN;
    uint32_t RESERVED0[5];
    __IO uint32_t PORTININTEN0;
    __IO uint32_t PORTININTEN1;
    __IO uint32_t PORTININTEN2;
    uint32_t RESERVED1[21];
} stc_emb_inten0_bit_t;

typedef struct
{
    __IO uint32_t CMPEN0;
    __IO uint32_t CMPEN1;
    __IO uint32_t CMPEN2;
    uint32_t RESERVED0[1];
    __IO uint32_t OSCSTPEN;
    uint32_t RESERVED1[3];
    __IO uint32_t PORTINEN0;
    __IO uint32_t PORTINEN1;
    __IO uint32_t PORTINEN2;
    uint32_t RESERVED2[5];
    __IO uint32_t NFSEL00;
    __IO uint32_t NFSEL01;
    __IO uint32_t NFEN0;
    __IO uint32_t INVSEL0;
    __IO uint32_t NFSEL10;
    __IO uint32_t NFSEL11;
    __IO uint32_t NFEN1;
    __IO uint32_t INVSEL1;
    __IO uint32_t NFSEL20;
    __IO uint32_t NFSEL21;
    __IO uint32_t NFEN2;
    __IO uint32_t INVSEL2;
    uint32_t RESERVED3[4];
} stc_emb_ctl1_bit_t;

typedef struct
{
    __IO uint32_t SOE;
    uint32_t RESERVED0[31];
} stc_emb_soe1_bit_t;

typedef struct
{
    uint32_t RESERVED0[1];
    __IO uint32_t CMPF;
    __IO uint32_t OSF;
    uint32_t RESERVED1[5];
    __IO uint32_t PORTINF0;
    __IO uint32_t PORTINF1;
    __IO uint32_t PORTINF2;
    uint32_t RESERVED2[1];
    __IO uint32_t PORTINST0;
    __IO uint32_t PORTINST1;
    __IO uint32_t PORTINST2;
    uint32_t RESERVED3[17];
} stc_emb_stat1_bit_t;

typedef struct
{
    uint32_t RESERVED0[1];
    __IO uint32_t CMPFCLR;
    __IO uint32_t OSFCLR;
    uint32_t RESERVED1[5];
    __IO uint32_t PORTINFCLR0;
    __IO uint32_t PORTINFCLR1;
    __IO uint32_t PORTINFCLR2;
    uint32_t RESERVED2[21];
} stc_emb_statclr1_bit_t;

typedef struct
{
    uint32_t RESERVED0[1];
    __IO uint32_t CMPINTEN;
    __IO uint32_t OSINTEN;
    uint32_t RESERVED1[5];
    __IO uint32_t PORTININTEN0;
    __IO uint32_t PORTININTEN1;
    __IO uint32_t PORTININTEN2;
    uint32_t RESERVED2[21];
} stc_emb_inten1_bit_t;

typedef struct
{
    __IO uint32_t EMBVAL0;
    __IO uint32_t EMBVAL1;
    uint32_t RESERVED0[30];
} stc_emb_ecsr_bit_t;

typedef struct
{
    __IO uint32_t LVR0;
    __IO uint32_t LVR1;
    __IO uint32_t LVR2;
    __IO uint32_t LVR3;
    __IO uint32_t LVR4;
    __IO uint32_t LVR5;
    __IO uint32_t LVR6;
    __IO uint32_t LVR7;
    __IO uint32_t LVR8;
    __IO uint32_t LVR9;
    __IO uint32_t LVR10;
    __IO uint32_t LVR11;
    __IO uint32_t LVR12;
    __IO uint32_t LVR13;
    __IO uint32_t LVR14;
    __IO uint32_t LVR15;
    uint32_t RESERVED0[16];
} stc_fcm_lvr_bit_t;

typedef struct
{
    __IO uint32_t UVR0;
    __IO uint32_t UVR1;
    __IO uint32_t UVR2;
    __IO uint32_t UVR3;
    __IO uint32_t UVR4;
    __IO uint32_t UVR5;
    __IO uint32_t UVR6;
    __IO uint32_t UVR7;
    __IO uint32_t UVR8;
    __IO uint32_t UVR9;
    __IO uint32_t UVR10;
    __IO uint32_t UVR11;
    __IO uint32_t UVR12;
    __IO uint32_t UVR13;
    __IO uint32_t UVR14;
    __IO uint32_t UVR15;
    uint32_t RESERVED0[16];
} stc_fcm_uvr_bit_t;

typedef struct
{
    __IO uint32_t CNTR0;
    __IO uint32_t CNTR1;
    __IO uint32_t CNTR2;
    __IO uint32_t CNTR3;
    __IO uint32_t CNTR4;
    __IO uint32_t CNTR5;
    __IO uint32_t CNTR6;
    __IO uint32_t CNTR7;
    __IO uint32_t CNTR8;
    __IO uint32_t CNTR9;
    __IO uint32_t CNTR10;
    __IO uint32_t CNTR11;
    __IO uint32_t CNTR12;
    __IO uint32_t CNTR13;
    __IO uint32_t CNTR14;
    __IO uint32_t CNTR15;
    uint32_t RESERVED0[16];
} stc_fcm_cntr_bit_t;

typedef struct
{
    __IO uint32_t START;
    uint32_t RESERVED0[31];
} stc_fcm_str_bit_t;

typedef struct
{
    __IO uint32_t MDIVS0;
    __IO uint32_t MDIVS1;
    uint32_t RESERVED0[2];
    __IO uint32_t MCKS0;
    __IO uint32_t MCKS1;
    __IO uint32_t MCKS2;
    __IO uint32_t MCKS3;
    uint32_t RESERVED1[24];
} stc_fcm_mccr_bit_t;

typedef struct
{
    __IO uint32_t RDIVS0;
    __IO uint32_t RDIVS1;
    uint32_t RESERVED0[1];
    __IO uint32_t RCKS0;
    __IO uint32_t RCKS1;
    __IO uint32_t RCKS2;
    __IO uint32_t RCKS3;
    __IO uint32_t INEXS;
    __IO uint32_t DNFS0;
    __IO uint32_t DNFS1;
    uint32_t RESERVED1[2];
    __IO uint32_t EDGES0;
    __IO uint32_t EDGES1;
    uint32_t RESERVED2[1];
    __IO uint32_t EXREFE;
    uint32_t RESERVED3[16];
} stc_fcm_rccr_bit_t;

typedef struct
{
    __IO uint32_t ERRIE;
    __IO uint32_t MENDIE;
    __IO uint32_t OVFIE;
    uint32_t RESERVED0[1];
    __IO uint32_t ERRINTRS;
    uint32_t RESERVED1[2];
    __IO uint32_t ERRE;
    uint32_t RESERVED2[24];
} stc_fcm_rier_bit_t;

typedef struct
{
    __IO uint32_t ERRF;
    __IO uint32_t MENDF;
    __IO uint32_t OVF;
    uint32_t RESERVED0[29];
} stc_fcm_sr_bit_t;

typedef struct
{
    __IO uint32_t ERRFCLR;
    __IO uint32_t MENDFCLR;
    __IO uint32_t OVFCLR;
    uint32_t RESERVED0[29];
} stc_fcm_clr_bit_t;

typedef struct
{
    __IO uint32_t PIN0;
    __IO uint32_t PIN1;
    __IO uint32_t PIN2;
    __IO uint32_t PIN3;
    __IO uint32_t PIN4;
    __IO uint32_t PIN5;
    __IO uint32_t PIN6;
    __IO uint32_t PIN7;
} stc_gpio_pidr_bit_t;

typedef struct
{
    __IO uint32_t POUT0;
    __IO uint32_t POUT1;
    __IO uint32_t POUT2;
    __IO uint32_t POUT3;
    __IO uint32_t POUT4;
    __IO uint32_t POUT5;
    __IO uint32_t POUT6;
    __IO uint32_t POUT7;
} stc_gpio_podr_bit_t;

typedef struct
{
    __IO uint32_t POUTE0;
    __IO uint32_t POUTE1;
    __IO uint32_t POUTE2;
    __IO uint32_t POUTE3;
    __IO uint32_t POUTE4;
    __IO uint32_t POUTE5;
    __IO uint32_t POUTE6;
    __IO uint32_t POUTE7;
} stc_gpio_poer_bit_t;

typedef struct
{
    __IO uint32_t POS0;
    __IO uint32_t POS1;
    __IO uint32_t POS2;
    __IO uint32_t POS3;
    __IO uint32_t POS4;
    __IO uint32_t POS5;
    __IO uint32_t POS6;
    __IO uint32_t POS7;
} stc_gpio_posr_bit_t;

typedef struct
{
    __IO uint32_t POR0;
    __IO uint32_t POR1;
    __IO uint32_t POR2;
    __IO uint32_t POR3;
    __IO uint32_t POR4;
    __IO uint32_t POR5;
    __IO uint32_t POR6;
    __IO uint32_t POR7;
} stc_gpio_porr_bit_t;

typedef struct
{
    __IO uint32_t POT0;
    __IO uint32_t POT1;
    __IO uint32_t POT2;
    __IO uint32_t POT3;
    __IO uint32_t POT4;
    __IO uint32_t POT5;
    __IO uint32_t POT6;
    __IO uint32_t POT7;
} stc_gpio_potr_bit_t;

typedef struct
{
    __IO uint32_t SPFE0;
    __IO uint32_t SPFE1;
    __IO uint32_t SPFE2;
    __IO uint32_t SPFE3;
    __IO uint32_t SPFE4;
    uint32_t RESERVED0[11];
} stc_gpio_pspcr_bit_t;

typedef struct
{
    uint32_t RESERVED0[14];
    __IO uint32_t RDWT0;
    __IO uint32_t RDWT1;
} stc_gpio_pccr_bit_t;

typedef struct
{
    __IO uint32_t PINAE0;
    __IO uint32_t PINAE1;
    __IO uint32_t PINAE2;
    __IO uint32_t PINAE3;
    __IO uint32_t PINAE4;
    __IO uint32_t PINAE5;
    uint32_t RESERVED0[1];
    __IO uint32_t PINAE7;
    uint32_t RESERVED1[1];
    __IO uint32_t PINAE9;
    __IO uint32_t PINAE10;
    __IO uint32_t PINAE11;
    uint32_t RESERVED2[1];
    __IO uint32_t PINAE13;
    __IO uint32_t PINAE14;
    uint32_t RESERVED3[1];
} stc_gpio_pinaer_bit_t;

typedef struct
{
    __IO uint32_t WE;
    uint32_t RESERVED0[7];
    __IO uint32_t WP0;
    __IO uint32_t WP1;
    __IO uint32_t WP2;
    __IO uint32_t WP3;
    __IO uint32_t WP4;
    __IO uint32_t WP5;
    __IO uint32_t WP6;
    __IO uint32_t WP7;
} stc_gpio_pwpr_bit_t;

typedef struct
{
    __IO uint32_t POUT;
    __IO uint32_t POUTE;
    __IO uint32_t NOD;
    uint32_t RESERVED0[1];
    __IO uint32_t DRV;
    __IO uint32_t LTE;
    __IO uint32_t PUU;
    uint32_t RESERVED1[1];
    __IO uint32_t PIN;
    __IO uint32_t INVE;
    __IO uint32_t CINSEL;
    __IO uint32_t INTE;
    uint32_t RESERVED2[4];
} stc_gpio_pcr_bit_t;

typedef struct
{
    __IO uint32_t FSEL0;
    __IO uint32_t FSEL1;
    __IO uint32_t FSEL2;
    uint32_t RESERVED0[13];
} stc_gpio_pfsr_bit_t;

typedef struct
{
    __IO uint32_t PE;
    __IO uint32_t SMBUS;
    __IO uint32_t SMBALRTEN;
    __IO uint32_t SMBDEFAULTEN;
    __IO uint32_t SMBHOSTEN;
    __IO uint32_t FACKEN;
    __IO uint32_t GCEN;
    __IO uint32_t RESTART;
    __IO uint32_t START;
    __IO uint32_t STOP;
    __IO uint32_t ACK;
    uint32_t RESERVED0[4];
    __IO uint32_t SWRST;
    uint32_t RESERVED1[16];
} stc_i2c_cr1_bit_t;

typedef struct
{
    __IO uint32_t STARTIE;
    __IO uint32_t SLADDR0IE;
    __IO uint32_t SLADDR1IE;
    __IO uint32_t TENDIE;
    __IO uint32_t STOPIE;
    uint32_t RESERVED0[1];
    __IO uint32_t RFULLIE;
    __IO uint32_t TEMPTYIE;
    uint32_t RESERVED1[1];
    __IO uint32_t ARLOIE;
    uint32_t RESERVED2[2];
    __IO uint32_t NACKIE;
    uint32_t RESERVED3[7];
    __IO uint32_t GENCALLIE;
    __IO uint32_t SMBDEFAULTIE;
    __IO uint32_t SMBHOSTIE;
    __IO uint32_t SMBALRTIE;
    uint32_t RESERVED4[8];
} stc_i2c_cr2_bit_t;

typedef struct
{
    __IO uint32_t SLADDR00;
    __IO uint32_t SLADDR01;
    __IO uint32_t SLADDR02;
    __IO uint32_t SLADDR03;
    __IO uint32_t SLADDR04;
    __IO uint32_t SLADDR05;
    __IO uint32_t SLADDR06;
    __IO uint32_t SLADDR07;
    __IO uint32_t SLADDR08;
    __IO uint32_t SLADDR09;
    uint32_t RESERVED0[2];
    __IO uint32_t SLADDR0EN;
    uint32_t RESERVED1[2];
    __IO uint32_t ADDRMOD0;
    uint32_t RESERVED2[16];
} stc_i2c_slr0_bit_t;

typedef struct
{
    __IO uint32_t SLADDR10;
    __IO uint32_t SLADDR11;
    __IO uint32_t SLADDR12;
    __IO uint32_t SLADDR13;
    __IO uint32_t SLADDR14;
    __IO uint32_t SLADDR15;
    __IO uint32_t SLADDR16;
    __IO uint32_t SLADDR17;
    __IO uint32_t SLADDR18;
    __IO uint32_t SLADDR19;
    uint32_t RESERVED0[2];
    __IO uint32_t SLADDR1EN;
    uint32_t RESERVED1[2];
    __IO uint32_t ADDRMOD1;
    uint32_t RESERVED2[16];
} stc_i2c_slr1_bit_t;

typedef struct
{
    __IO uint32_t STARTF;
    __IO uint32_t SLADDR0F;
    __IO uint32_t SLADDR1F;
    __IO uint32_t TENDF;
    __IO uint32_t STOPF;
    uint32_t RESERVED0[1];
    __IO uint32_t RFULLF;
    __IO uint32_t TEMPTYF;
    uint32_t RESERVED1[1];
    __IO uint32_t ARLOF;
    __IO uint32_t ACKRF;
    uint32_t RESERVED2[1];
    __IO uint32_t NACKF;
    uint32_t RESERVED3[3];
    __IO uint32_t MSL;
    __IO uint32_t BUSY;
    __IO uint32_t TRA;
    uint32_t RESERVED4[1];
    __IO uint32_t GENCALLF;
    __IO uint32_t SMBDEFAULTF;
    __IO uint32_t SMBHOSTF;
    __IO uint32_t SMBALRTF;
    uint32_t RESERVED5[8];
} stc_i2c_sr_bit_t;

typedef struct
{
    __IO uint32_t STARTFCLR;
    __IO uint32_t SLADDR0FCLR;
    __IO uint32_t SLADDR1FCLR;
    __IO uint32_t TENDFCLR;
    __IO uint32_t STOPFCLR;
    uint32_t RESERVED0[1];
    __IO uint32_t RFULLFCLR;
    __IO uint32_t TEMPTYFCLR;
    uint32_t RESERVED1[1];
    __IO uint32_t ARLOFCLR;
    uint32_t RESERVED2[2];
    __IO uint32_t NACKFCLR;
    uint32_t RESERVED3[7];
    __IO uint32_t GENCALLFCLR;
    __IO uint32_t SMBDEFAULTF;
    __IO uint32_t SMBHOSTFCL;
    __IO uint32_t SMBALRTFCLR;
    uint32_t RESERVED4[8];
} stc_i2c_clr_bit_t;

typedef struct
{
    __IO uint32_t DT0;
    __IO uint32_t DT1;
    __IO uint32_t DT2;
    __IO uint32_t DT3;
    __IO uint32_t DT4;
    __IO uint32_t DT5;
    __IO uint32_t DT6;
    __IO uint32_t DT7;
    uint32_t RESERVED0[24];
} stc_i2c_dtr_bit_t;

typedef struct
{
    __IO uint32_t DR0;
    __IO uint32_t DR1;
    __IO uint32_t DR2;
    __IO uint32_t DR3;
    __IO uint32_t DR4;
    __IO uint32_t DR5;
    __IO uint32_t DR6;
    __IO uint32_t DR7;
    uint32_t RESERVED0[24];
} stc_i2c_drr_bit_t;

typedef struct
{
    __IO uint32_t SLOWW0;
    __IO uint32_t SLOWW1;
    __IO uint32_t SLOWW2;
    __IO uint32_t SLOWW3;
    __IO uint32_t SLOWW4;
    uint32_t RESERVED0[3];
    __IO uint32_t SHIGHW0;
    __IO uint32_t SHIGHW1;
    __IO uint32_t SHIGHW2;
    __IO uint32_t SHIGHW3;
    __IO uint32_t SHIGHW4;
    uint32_t RESERVED1[3];
    __IO uint32_t CKDIV0;
    __IO uint32_t CKDIV1;
    __IO uint32_t CKDIV2;
    uint32_t RESERVED2[4];
    __IO uint32_t FMPE;
    uint32_t RESERVED3[8];
} stc_i2c_ccr_bit_t;

typedef struct
{
    __IO uint32_t DNF0;
    __IO uint32_t DNF1;
    uint32_t RESERVED0[2];
    __IO uint32_t DNFEN;
    __IO uint32_t ANFEN;
    uint32_t RESERVED1[26];
} stc_i2c_fltr_bit_t;

typedef struct
{
    __IO uint32_t SWDTAUTST;
    __IO uint32_t SWDTITS;
    __IO uint32_t SWDTPERI0;
    __IO uint32_t SWDTPERI1;
    __IO uint32_t SWDTCKS0;
    __IO uint32_t SWDTCKS1;
    __IO uint32_t SWDTCKS2;
    __IO uint32_t SWDTCKS3;
    __IO uint32_t SWDTWDPT0;
    __IO uint32_t SWDTWDPT1;
    __IO uint32_t SWDTWDPT2;
    __IO uint32_t SWDTWDPT3;
    __IO uint32_t SWDTSLPOFF;
    uint32_t RESERVED0[3];
    __IO uint32_t HRCREQS0;
    __IO uint32_t HRCREQS1;
    __IO uint32_t HRCREQS2;
    __IO uint32_t HRCREQS3;
    __IO uint32_t HRCSTOP;
    uint32_t RESERVED1[5];
    __IO uint32_t NMIFCLK0;
    __IO uint32_t NMIFCLK1;
    __IO uint32_t NMIFEN;
    __IO uint32_t NMITRG;
    __IO uint32_t NMIEN;
    __IO uint32_t NMIICGNE;
} stc_icg_icg0_bit_t;

typedef struct
{
    uint32_t RESERVED0[8];
    __IO uint32_t LKUPDIS;
    uint32_t RESERVED1[3];
    __IO uint32_t LVD0LVL0;
    __IO uint32_t LVD0LVL1;
    __IO uint32_t LVD0LVL2;
    __IO uint32_t LVDDIS;
    uint32_t RESERVED2[16];
} stc_icg_icg1_bit_t;

typedef struct
{
    uint32_t ICG_ICG2_0;
    uint32_t ICG_ICG2_1;
    uint32_t ICG_ICG2_2;
    uint32_t ICG_ICG2_3;
    uint32_t ICG_ICG2_4;
    uint32_t ICG_ICG2_5;
    uint32_t ICG_ICG2_6;
    uint32_t ICG_ICG2_7;
    uint32_t ICG_ICG2_8;
    uint32_t ICG_ICG2_9;
    uint32_t ICG_ICG2_10;
    uint32_t ICG_ICG2_11;
    uint32_t ICG_ICG2_12;
    uint32_t ICG_ICG2_13;
    uint32_t ICG_ICG2_14;
    uint32_t ICG_ICG2_15;
    uint32_t ICG_ICG2_16;
    uint32_t ICG_ICG2_17;
    uint32_t ICG_ICG2_18;
    uint32_t ICG_ICG2_19;
    uint32_t ICG_ICG2_20;
    uint32_t ICG_ICG2_21;
    uint32_t ICG_ICG2_22;
    uint32_t ICG_ICG2_23;
    uint32_t ICG_ICG2_24;
    uint32_t ICG_ICG2_25;
    uint32_t ICG_ICG2_26;
    uint32_t ICG_ICG2_27;
    uint32_t ICG_ICG2_28;
    uint32_t ICG_ICG2_29;
    uint32_t ICG_ICG2_30;
    uint32_t ICG_ICG2_31;
} stc_icg_icg2_bit_t;

typedef struct
{
    uint32_t ICG_ICG3_0;
    uint32_t ICG_ICG3_1;
    uint32_t ICG_ICG3_2;
    uint32_t ICG_ICG3_3;
    uint32_t ICG_ICG3_4;
    uint32_t ICG_ICG3_5;
    uint32_t ICG_ICG3_6;
    uint32_t ICG_ICG3_7;
    uint32_t ICG_ICG3_8;
    uint32_t ICG_ICG3_9;
    uint32_t ICG_ICG3_10;
    uint32_t ICG_ICG3_11;
    uint32_t ICG_ICG3_12;
    uint32_t ICG_ICG3_13;
    uint32_t ICG_ICG3_14;
    uint32_t ICG_ICG3_15;
    uint32_t ICG_ICG3_16;
    uint32_t ICG_ICG3_17;
    uint32_t ICG_ICG3_18;
    uint32_t ICG_ICG3_19;
    uint32_t ICG_ICG3_20;
    uint32_t ICG_ICG3_21;
    uint32_t ICG_ICG3_22;
    uint32_t ICG_ICG3_23;
    uint32_t ICG_ICG3_24;
    uint32_t ICG_ICG3_25;
    uint32_t ICG_ICG3_26;
    uint32_t ICG_ICG3_27;
    uint32_t ICG_ICG3_28;
    uint32_t ICG_ICG3_29;
    uint32_t ICG_ICG3_30;
    uint32_t ICG_ICG3_31;
} stc_icg_icg3_bit_t;

typedef struct
{
    uint32_t ICG_ICG4_0;
    uint32_t ICG_ICG4_1;
    uint32_t ICG_ICG4_2;
    uint32_t ICG_ICG4_3;
    uint32_t ICG_ICG4_4;
    uint32_t ICG_ICG4_5;
    uint32_t ICG_ICG4_6;
    uint32_t ICG_ICG4_7;
    uint32_t ICG_ICG4_8;
    uint32_t ICG_ICG4_9;
    uint32_t ICG_ICG4_10;
    uint32_t ICG_ICG4_11;
    uint32_t ICG_ICG4_12;
    uint32_t ICG_ICG4_13;
    uint32_t ICG_ICG4_14;
    uint32_t ICG_ICG4_15;
    uint32_t ICG_ICG4_16;
    uint32_t ICG_ICG4_17;
    uint32_t ICG_ICG4_18;
    uint32_t ICG_ICG4_19;
    uint32_t ICG_ICG4_20;
    uint32_t ICG_ICG4_21;
    uint32_t ICG_ICG4_22;
    uint32_t ICG_ICG4_23;
    uint32_t ICG_ICG4_24;
    uint32_t ICG_ICG4_25;
    uint32_t ICG_ICG4_26;
    uint32_t ICG_ICG4_27;
    uint32_t ICG_ICG4_28;
    uint32_t ICG_ICG4_29;
    uint32_t ICG_ICG4_30;
    uint32_t ICG_ICG4_31;
} stc_icg_icg4_bit_t;

typedef struct
{
    uint32_t ICG_ICG5_0;
    uint32_t ICG_ICG5_1;
    uint32_t ICG_ICG5_2;
    uint32_t ICG_ICG5_3;
    uint32_t ICG_ICG5_4;
    uint32_t ICG_ICG5_5;
    uint32_t ICG_ICG5_6;
    uint32_t ICG_ICG5_7;
    uint32_t ICG_ICG5_8;
    uint32_t ICG_ICG5_9;
    uint32_t ICG_ICG5_10;
    uint32_t ICG_ICG5_11;
    uint32_t ICG_ICG5_12;
    uint32_t ICG_ICG5_13;
    uint32_t ICG_ICG5_14;
    uint32_t ICG_ICG5_15;
    uint32_t ICG_ICG5_16;
    uint32_t ICG_ICG5_17;
    uint32_t ICG_ICG5_18;
    uint32_t ICG_ICG5_19;
    uint32_t ICG_ICG5_20;
    uint32_t ICG_ICG5_21;
    uint32_t ICG_ICG5_22;
    uint32_t ICG_ICG5_23;
    uint32_t ICG_ICG5_24;
    uint32_t ICG_ICG5_25;
    uint32_t ICG_ICG5_26;
    uint32_t ICG_ICG5_27;
    uint32_t ICG_ICG5_28;
    uint32_t ICG_ICG5_29;
    uint32_t ICG_ICG5_30;
    uint32_t ICG_ICG5_31;
} stc_icg_icg5_bit_t;

typedef struct
{
    uint32_t ICG_ICG6_0;
    uint32_t ICG_ICG6_1;
    uint32_t ICG_ICG6_2;
    uint32_t ICG_ICG6_3;
    uint32_t ICG_ICG6_4;
    uint32_t ICG_ICG6_5;
    uint32_t ICG_ICG6_6;
    uint32_t ICG_ICG6_7;
    uint32_t ICG_ICG6_8;
    uint32_t ICG_ICG6_9;
    uint32_t ICG_ICG6_10;
    uint32_t ICG_ICG6_11;
    uint32_t ICG_ICG6_12;
    uint32_t ICG_ICG6_13;
    uint32_t ICG_ICG6_14;
    uint32_t ICG_ICG6_15;
    uint32_t ICG_ICG6_16;
    uint32_t ICG_ICG6_17;
    uint32_t ICG_ICG6_18;
    uint32_t ICG_ICG6_19;
    uint32_t ICG_ICG6_20;
    uint32_t ICG_ICG6_21;
    uint32_t ICG_ICG6_22;
    uint32_t ICG_ICG6_23;
    uint32_t ICG_ICG6_24;
    uint32_t ICG_ICG6_25;
    uint32_t ICG_ICG6_26;
    uint32_t ICG_ICG6_27;
    uint32_t ICG_ICG6_28;
    uint32_t ICG_ICG6_29;
    uint32_t ICG_ICG6_30;
    uint32_t ICG_ICG6_31;
} stc_icg_icg6_bit_t;

typedef struct
{
    __IO uint32_t WDTAUTST;
    __IO uint32_t WDTITS;
    __IO uint32_t WDTPERI0;
    __IO uint32_t WDTPERI1;
    __IO uint32_t WDTCKS0;
    __IO uint32_t WDTCKS1;
    __IO uint32_t WDTCKS2;
    __IO uint32_t WDTCKS3;
    __IO uint32_t WDTWDPT0;
    __IO uint32_t WDTWDPT1;
    __IO uint32_t WDTWDPT2;
    __IO uint32_t WDTWDPT3;
    __IO uint32_t WDTSLPOFF;
    uint32_t RESERVED0[19];
} stc_icg_icg7_bit_t;

typedef struct
{
    __IO uint32_t NMITRG;
    uint32_t RESERVED0[3];
    __IO uint32_t NMIFCLK0;
    __IO uint32_t NMIFCLK1;
    uint32_t RESERVED1[1];
    __IO uint32_t NMIFEN;
    uint32_t RESERVED2[4];
    __IO uint32_t NOCSEL0;
    __IO uint32_t NOCSEL1;
    uint32_t RESERVED3[1];
    __IO uint32_t NOCEN;
    uint32_t RESERVED4[16];
} stc_intc_nmicr_bit_t;

typedef struct
{
    __IO uint32_t NMIENR;
    __IO uint32_t SWDTENR;
    __IO uint32_t PVD1ENR;
    __IO uint32_t PVD2ENR;
    uint32_t RESERVED0[1];
    __IO uint32_t XTALSTPENR;
    uint32_t RESERVED1[2];
    __IO uint32_t REPENR;
    uint32_t RESERVED2[2];
    __IO uint32_t WDTENR;
    uint32_t RESERVED3[20];
} stc_intc_nmier_bit_t;

typedef struct
{
    __IO uint32_t NMIFR;
    __IO uint32_t SWDTFR;
    __IO uint32_t PVD1FR;
    __IO uint32_t PVD2FR;
    uint32_t RESERVED0[1];
    __IO uint32_t XTALSTPFR;
    uint32_t RESERVED1[2];
    __IO uint32_t REPFR;
    uint32_t RESERVED2[2];
    __IO uint32_t WDTFR;
    uint32_t RESERVED3[20];
} stc_intc_nmifr_bit_t;

typedef struct
{
    __IO uint32_t NMICFR;
    __IO uint32_t SWDTCFR;
    __IO uint32_t PVD1CFR;
    __IO uint32_t PVD2CFR;
    uint32_t RESERVED0[1];
    __IO uint32_t XTALSTPCFR;
    uint32_t RESERVED1[2];
    __IO uint32_t REPCFR;
    uint32_t RESERVED2[2];
    __IO uint32_t WDTCFR;
    uint32_t RESERVED3[20];
} stc_intc_nmicfr_bit_t;

typedef struct
{
    __IO uint32_t EIRQTRG0;
    __IO uint32_t EIRQTRG1;
    uint32_t RESERVED0[2];
    __IO uint32_t EISMPCLK0;
    __IO uint32_t EISMPCLK1;
    uint32_t RESERVED1[1];
    __IO uint32_t EFEN;
    uint32_t RESERVED2[7];
    __IO uint32_t NOCEN;
    uint32_t RESERVED3[16];
} stc_intc_eirqcr_bit_t;

typedef struct
{
    __IO uint32_t EIRQWUEN0;
    __IO uint32_t EIRQWUEN1;
    __IO uint32_t EIRQWUEN2;
    __IO uint32_t EIRQWUEN3;
    __IO uint32_t EIRQWUEN4;
    __IO uint32_t EIRQWUEN5;
    __IO uint32_t EIRQWUEN6;
    __IO uint32_t EIRQWUEN7;
    uint32_t RESERVED0[8];
    __IO uint32_t SWDTWUEN;
    __IO uint32_t PVD1WUEN;
    __IO uint32_t PVD2WUEN;
    __IO uint32_t CMPI0WUEN;
    uint32_t RESERVED1[3];
    __IO uint32_t TMR0WUEN;
    uint32_t RESERVED2[1];
    __IO uint32_t RXWUEN;
    uint32_t RESERVED3[6];
} stc_intc_wupen_bit_t;

typedef struct
{
    __IO uint32_t EIRQFR0;
    __IO uint32_t EIRQFR1;
    __IO uint32_t EIRQFR2;
    __IO uint32_t EIRQFR3;
    __IO uint32_t EIRQFR4;
    __IO uint32_t EIRQFR5;
    __IO uint32_t EIRQFR6;
    __IO uint32_t EIRQFR7;
    uint32_t RESERVED0[24];
} stc_intc_eirqfr_bit_t;

typedef struct
{
    __IO uint32_t EIRQCFR0;
    __IO uint32_t EIRQCFR1;
    __IO uint32_t EIRQCFR2;
    __IO uint32_t EIRQCFR3;
    __IO uint32_t EIRQCFR4;
    __IO uint32_t EIRQCFR5;
    __IO uint32_t EIRQCFR6;
    __IO uint32_t EIRQCFR7;
    uint32_t RESERVED0[24];
} stc_intc_eirqcfr_bit_t;

typedef struct
{
    __IO uint32_t ISEL0;
    __IO uint32_t ISEL1;
    __IO uint32_t ISEL2;
    __IO uint32_t ISEL3;
    __IO uint32_t ISEL4;
    __IO uint32_t ISEL5;
    __IO uint32_t ISEL6;
    __IO uint32_t ISEL7;
    __IO uint32_t ISEL8;
    uint32_t RESERVED0[23];
} stc_intc_sel_bit_t;

typedef struct
{
    __IO uint32_t SWIE0;
    __IO uint32_t SWIE1;
    __IO uint32_t SWIE2;
    __IO uint32_t SWIE3;
    __IO uint32_t SWIE4;
    __IO uint32_t SWIE5;
    __IO uint32_t SWIE6;
    __IO uint32_t SWIE7;
    __IO uint32_t SWIE8;
    __IO uint32_t SWIE9;
    __IO uint32_t SWIE10;
    __IO uint32_t SWIE11;
    __IO uint32_t SWIE12;
    __IO uint32_t SWIE13;
    __IO uint32_t SWIE14;
    __IO uint32_t SWIE15;
    uint32_t RESERVED0[16];
} stc_intc_swier_bit_t;

typedef struct
{
    __IO uint32_t EVTE0;
    __IO uint32_t EVTE1;
    __IO uint32_t EVTE2;
    __IO uint32_t EVTE3;
    __IO uint32_t EVTE4;
    __IO uint32_t EVTE5;
    __IO uint32_t EVTE6;
    __IO uint32_t EVTE7;
    __IO uint32_t EVTE8;
    __IO uint32_t EVTE9;
    __IO uint32_t EVTE10;
    __IO uint32_t EVTE11;
    __IO uint32_t EVTE12;
    __IO uint32_t EVTE13;
    __IO uint32_t EVTE14;
    __IO uint32_t EVTE15;
    uint32_t RESERVED0[16];
} stc_intc_evter_bit_t;

typedef struct
{
    __IO uint32_t IER0;
    __IO uint32_t IER1;
    __IO uint32_t IER2;
    __IO uint32_t IER3;
    __IO uint32_t IER4;
    __IO uint32_t IER5;
    __IO uint32_t IER6;
    __IO uint32_t IER7;
    __IO uint32_t IER8;
    __IO uint32_t IER9;
    __IO uint32_t IER10;
    __IO uint32_t IER11;
    __IO uint32_t IER12;
    __IO uint32_t IER13;
    __IO uint32_t IER14;
    __IO uint32_t IER15;
    uint32_t RESERVED0[16];
} stc_intc_ier_bit_t;

typedef struct
{
    __IO uint32_t FLNWT;
    __IO uint32_t CKSMRC;
    uint32_t RESERVED0[1];
    __IO uint32_t HAPORDIS;
    uint32_t RESERVED1[2];
    __IO uint32_t STPDAS;
    __IO uint32_t STOP;
} stc_pwc_stpmcr_bit_t;

typedef struct
{
    __IO uint32_t PWDRV0;
    __IO uint32_t PWDRV1;
    __IO uint32_t PWDRV2;
    __IO uint32_t PWDRV3;
    __IO uint32_t PWDRV4;
    __IO uint32_t PWDRV5;
    __IO uint32_t ACTV;
    __IO uint32_t DVS;
    __IO uint32_t VHRCE;
    __IO uint32_t VPLLE;
    __IO uint32_t HCHDTDIS;
    __IO uint32_t PLHDTDIS;
    __IO uint32_t HDTDIS;
    __IO uint32_t HRCPWRDY;
    __IO uint32_t PLLPWRDY;
    uint32_t RESERVED0[1];
} stc_pwc_pwrc_bit_t;

typedef struct
{
    __IO uint32_t PWMONSEL;
    __IO uint32_t PWMONE;
    uint32_t RESERVED0[6];
} stc_pwc_pwrmonr_bit_t;

typedef struct
{
    uint32_t RESERVED0[4];
    __IO uint32_t RPERDIS;
    __IO uint32_t SRPEF;
    __IO uint32_t HRPEF;
    __IO uint32_t CRPEF;
} stc_pwc_ramcr_bit_t;

typedef struct
{
    uint32_t RESERVED0[2];
    __IO uint32_t L1IEGS0;
    __IO uint32_t L1IEGS1;
    __IO uint32_t L1LVL0;
    __IO uint32_t L1LVL1;
    __IO uint32_t L1LVL2;
    __IO uint32_t L1LVL3;
    __IO uint32_t L1NFS0;
    __IO uint32_t L1NFS1;
    __IO uint32_t L1NFDIS;
    __IO uint32_t L1NMIS;
    __IO uint32_t L1IRS;
    __IO uint32_t L1IRE;
    __IO uint32_t L1CMPOE;
    __IO uint32_t L1EN;
    __IO uint32_t EXVCCINEN;
    uint32_t RESERVED1[1];
    __IO uint32_t L2IEGS0;
    __IO uint32_t L2IEGS1;
    __IO uint32_t L2LVL0;
    __IO uint32_t L2LVL1;
    __IO uint32_t L2LVL2;
    __IO uint32_t L2LVL3;
    __IO uint32_t L2NFS0;
    __IO uint32_t L2NFS1;
    __IO uint32_t L2NFDIS;
    __IO uint32_t L2NMIS;
    __IO uint32_t L2IRS;
    __IO uint32_t L2IRE;
    __IO uint32_t L2CMPOE;
    __IO uint32_t L2EN;
} stc_pwc_lvdcr0_bit_t;

typedef struct
{
    __IO uint32_t L1MON;
    __IO uint32_t L2MON;
    __IO uint32_t L1DETF;
    __IO uint32_t L2DETF;
    __IO uint32_t L0MON;
    uint32_t RESERVED0[2];
    __IO uint32_t L0CMPOE;
} stc_pwc_lvdcsr1_bit_t;

typedef struct
{
    __IO uint32_t CKRWE;
    __IO uint32_t PWRWE;
    __IO uint32_t FPRCB2;
    __IO uint32_t LVRWE;
    __IO uint32_t FPRCB4;
    __IO uint32_t FPRCB5;
    __IO uint32_t FPRCB6;
    __IO uint32_t FPRCB7;
    __IO uint32_t FPRCWE0;
    __IO uint32_t FPRCWE1;
    __IO uint32_t FPRCWE2;
    __IO uint32_t FPRCWE3;
    __IO uint32_t FPRCWE4;
    __IO uint32_t FPRCWE5;
    __IO uint32_t FPRCWE6;
    __IO uint32_t FPRCWE7;
} stc_pwc_fprc_bit_t;

typedef struct
{
    __IO uint32_t DBGEN;
    uint32_t RESERVED0[14];
    __IO uint32_t TRSTF;
} stc_pwc_dbgc_bit_t;

typedef struct
{
    __IO uint32_t PORF;
    __IO uint32_t PINRF;
    __IO uint32_t LV0RF;
    __IO uint32_t LV1RF;
    __IO uint32_t LV2RF;
    __IO uint32_t SWDRF;
    __IO uint32_t WDRF;
    __IO uint32_t CKFERF;
    __IO uint32_t SWRF;
    uint32_t RESERVED0[1];
    __IO uint32_t RAMPERF;
    uint32_t RESERVED1[1];
    __IO uint32_t CPULKUPRF;
    __IO uint32_t XTALERF;
    __IO uint32_t MULTIRF;
    __IO uint32_t CLRF;
} stc_pwc_rstf0_bit_t;

typedef struct
{
    __IO uint32_t PORF;
    __IO uint32_t PINRF;
    __IO uint32_t LV0RF;
    __IO uint32_t LV1RF;
    __IO uint32_t LV2RF;
    __IO uint32_t SWDRF;
    __IO uint32_t WDRF;
    __IO uint32_t CKFERF;
    __IO uint32_t SWRF;
    uint32_t RESERVED0[1];
    __IO uint32_t RAMPERF;
    uint32_t RESERVED1[1];
    __IO uint32_t CPULKUPRF;
    __IO uint32_t XTALERF;
    __IO uint32_t MULTIRF;
    __IO uint32_t CLRF;
} stc_rmu_rstf0_bit_t;

typedef struct
{
    __IO uint32_t SPD0;
    __IO uint32_t SPD1;
    __IO uint32_t SPD2;
    __IO uint32_t SPD3;
    __IO uint32_t SPD4;
    __IO uint32_t SPD5;
    __IO uint32_t SPD6;
    __IO uint32_t SPD7;
    __IO uint32_t SPD8;
    __IO uint32_t SPD9;
    __IO uint32_t SPD10;
    __IO uint32_t SPD11;
    __IO uint32_t SPD12;
    __IO uint32_t SPD13;
    __IO uint32_t SPD14;
    __IO uint32_t SPD15;
    uint32_t RESERVED0[16];
} stc_spi_dr_bit_t;

typedef struct
{
    __IO uint32_t SPIMDS;
    __IO uint32_t TXMDS;
    uint32_t RESERVED0[1];
    __IO uint32_t MSTR;
    __IO uint32_t SPLPBK;
    __IO uint32_t SPLPBK2;
    __IO uint32_t SPE;
    uint32_t RESERVED1[1];
    __IO uint32_t EIE;
    __IO uint32_t TXIE;
    __IO uint32_t RXIE;
    __IO uint32_t IDIE;
    __IO uint32_t MODFE;
    __IO uint32_t PATE;
    __IO uint32_t PAOE;
    __IO uint32_t PAE;
    uint32_t RESERVED2[16];
} stc_spi_cr1_bit_t;

typedef struct
{
    uint32_t RESERVED0[8];
    __IO uint32_t SS0PV;
    uint32_t RESERVED1[23];
} stc_spi_cfg1_bit_t;

typedef struct
{
    __IO uint32_t OVRERF;
    __IO uint32_t IDLNF;
    __IO uint32_t MODFERF;
    __IO uint32_t PERF;
    __IO uint32_t UDRERF;
    __IO uint32_t TDEF;
    uint32_t RESERVED0[1];
    __IO uint32_t RDFF;
    uint32_t RESERVED1[24];
} stc_spi_sr_bit_t;

typedef struct
{
    __IO uint32_t CPHA;
    __IO uint32_t CPOL;
    __IO uint32_t MBR0;
    __IO uint32_t MBR1;
    __IO uint32_t MBR2;
    uint32_t RESERVED0[3];
    __IO uint32_t DSIZE;
    uint32_t RESERVED1[3];
    __IO uint32_t LSBF;
    uint32_t RESERVED2[19];
} stc_spi_cfg2_bit_t;

typedef struct
{
    __IO uint32_t CNT0;
    __IO uint32_t CNT1;
    __IO uint32_t CNT2;
    __IO uint32_t CNT3;
    __IO uint32_t CNT4;
    __IO uint32_t CNT5;
    __IO uint32_t CNT6;
    __IO uint32_t CNT7;
    __IO uint32_t CNT8;
    __IO uint32_t CNT9;
    __IO uint32_t CNT10;
    __IO uint32_t CNT11;
    __IO uint32_t CNT12;
    __IO uint32_t CNT13;
    __IO uint32_t CNT14;
    __IO uint32_t CNT15;
    __IO uint32_t UDF;
    __IO uint32_t REF;
    uint32_t RESERVED0[14];
} stc_swdt_sr_bit_t;

typedef struct
{
    __IO uint32_t RF0;
    __IO uint32_t RF1;
    __IO uint32_t RF2;
    __IO uint32_t RF3;
    __IO uint32_t RF4;
    __IO uint32_t RF5;
    __IO uint32_t RF6;
    __IO uint32_t RF7;
    __IO uint32_t RF8;
    __IO uint32_t RF9;
    __IO uint32_t RF10;
    __IO uint32_t RF11;
    __IO uint32_t RF12;
    __IO uint32_t RF13;
    __IO uint32_t RF14;
    __IO uint32_t RF15;
    uint32_t RESERVED0[16];
} stc_swdt_rr_bit_t;

typedef struct
{
    __IO uint32_t CNTA0;
    __IO uint32_t CNTA1;
    __IO uint32_t CNTA2;
    __IO uint32_t CNTA3;
    __IO uint32_t CNTA4;
    __IO uint32_t CNTA5;
    __IO uint32_t CNTA6;
    __IO uint32_t CNTA7;
    __IO uint32_t CNTA8;
    __IO uint32_t CNTA9;
    __IO uint32_t CNTA10;
    __IO uint32_t CNTA11;
    __IO uint32_t CNTA12;
    __IO uint32_t CNTA13;
    __IO uint32_t CNTA14;
    __IO uint32_t CNTA15;
    uint32_t RESERVED0[16];
} stc_tmr0_cntar_bit_t;

typedef struct
{
    __IO uint32_t CNTB0;
    __IO uint32_t CNTB1;
    __IO uint32_t CNTB2;
    __IO uint32_t CNTB3;
    __IO uint32_t CNTB4;
    __IO uint32_t CNTB5;
    __IO uint32_t CNTB6;
    __IO uint32_t CNTB7;
    __IO uint32_t CNTB8;
    __IO uint32_t CNTB9;
    __IO uint32_t CNTB10;
    __IO uint32_t CNTB11;
    __IO uint32_t CNTB12;
    __IO uint32_t CNTB13;
    __IO uint32_t CNTB14;
    __IO uint32_t CNTB15;
    uint32_t RESERVED0[16];
} stc_tmr0_cntbr_bit_t;

typedef struct
{
    __IO uint32_t CMPA0;
    __IO uint32_t CMPA1;
    __IO uint32_t CMPA2;
    __IO uint32_t CMPA3;
    __IO uint32_t CMPA4;
    __IO uint32_t CMPA5;
    __IO uint32_t CMPA6;
    __IO uint32_t CMPA7;
    __IO uint32_t CMPA8;
    __IO uint32_t CMPA9;
    __IO uint32_t CMPA10;
    __IO uint32_t CMPA11;
    __IO uint32_t CMPA12;
    __IO uint32_t CMPA13;
    __IO uint32_t CMPA14;
    __IO uint32_t CMPA15;
    uint32_t RESERVED0[16];
} stc_tmr0_cmpar_bit_t;

typedef struct
{
    __IO uint32_t CMPB0;
    __IO uint32_t CMPB1;
    __IO uint32_t CMPB2;
    __IO uint32_t CMPB3;
    __IO uint32_t CMPB4;
    __IO uint32_t CMPB5;
    __IO uint32_t CMPB6;
    __IO uint32_t CMPB7;
    __IO uint32_t CMPB8;
    __IO uint32_t CMPB9;
    __IO uint32_t CMPB10;
    __IO uint32_t CMPB11;
    __IO uint32_t CMPB12;
    __IO uint32_t CMPB13;
    __IO uint32_t CMPB14;
    __IO uint32_t CMPB15;
    uint32_t RESERVED0[16];
} stc_tmr0_cmpbr_bit_t;

typedef struct
{
    __IO uint32_t CSTA;
    __IO uint32_t CAPMDA;
    __IO uint32_t INTENA;
    uint32_t RESERVED0[1];
    __IO uint32_t CKDIVA0;
    __IO uint32_t CKDIVA1;
    __IO uint32_t CKDIVA2;
    __IO uint32_t CKDIVA3;
    __IO uint32_t SYNSA;
    __IO uint32_t SYNCLKA;
    __IO uint32_t ASYNCLKA;
    uint32_t RESERVED1[1];
    __IO uint32_t HSTAA;
    __IO uint32_t HSTPA;
    __IO uint32_t HCLEA;
    __IO uint32_t HICPA;
    __IO uint32_t CSTB;
    __IO uint32_t CAPMDB;
    __IO uint32_t INTENB;
    uint32_t RESERVED2[1];
    __IO uint32_t CKDIVB0;
    __IO uint32_t CKDIVB1;
    __IO uint32_t CKDIVB2;
    __IO uint32_t CKDIVB3;
    __IO uint32_t SYNSB;
    __IO uint32_t SYNCLKB;
    __IO uint32_t ASYNCLKB;
    uint32_t RESERVED3[1];
    __IO uint32_t HSTAB;
    __IO uint32_t HSTPB;
    __IO uint32_t HCLEB;
    __IO uint32_t HICPB;
} stc_tmr0_bconr_bit_t;

typedef struct
{
    __IO uint32_t CMFA;
    uint32_t RESERVED0[15];
    __IO uint32_t CMFB;
    uint32_t RESERVED1[15];
} stc_tmr0_stflr_bit_t;

typedef struct
{
    uint32_t TMR4_OCCRUH_0;
    uint32_t TMR4_OCCRUH_1;
    uint32_t TMR4_OCCRUH_2;
    uint32_t TMR4_OCCRUH_3;
    uint32_t TMR4_OCCRUH_4;
    uint32_t TMR4_OCCRUH_5;
    uint32_t TMR4_OCCRUH_6;
    uint32_t TMR4_OCCRUH_7;
    uint32_t TMR4_OCCRUH_8;
    uint32_t TMR4_OCCRUH_9;
    uint32_t TMR4_OCCRUH_10;
    uint32_t TMR4_OCCRUH_11;
    uint32_t TMR4_OCCRUH_12;
    uint32_t TMR4_OCCRUH_13;
    uint32_t TMR4_OCCRUH_14;
    uint32_t TMR4_OCCRUH_15;
} stc_tmr4_occruh_bit_t;

typedef struct
{
    uint32_t TMR4_OCCRUL_0;
    uint32_t TMR4_OCCRUL_1;
    uint32_t TMR4_OCCRUL_2;
    uint32_t TMR4_OCCRUL_3;
    uint32_t TMR4_OCCRUL_4;
    uint32_t TMR4_OCCRUL_5;
    uint32_t TMR4_OCCRUL_6;
    uint32_t TMR4_OCCRUL_7;
    uint32_t TMR4_OCCRUL_8;
    uint32_t TMR4_OCCRUL_9;
    uint32_t TMR4_OCCRUL_10;
    uint32_t TMR4_OCCRUL_11;
    uint32_t TMR4_OCCRUL_12;
    uint32_t TMR4_OCCRUL_13;
    uint32_t TMR4_OCCRUL_14;
    uint32_t TMR4_OCCRUL_15;
} stc_tmr4_occrul_bit_t;

typedef struct
{
    uint32_t TMR4_OCCRVH_0;
    uint32_t TMR4_OCCRVH_1;
    uint32_t TMR4_OCCRVH_2;
    uint32_t TMR4_OCCRVH_3;
    uint32_t TMR4_OCCRVH_4;
    uint32_t TMR4_OCCRVH_5;
    uint32_t TMR4_OCCRVH_6;
    uint32_t TMR4_OCCRVH_7;
    uint32_t TMR4_OCCRVH_8;
    uint32_t TMR4_OCCRVH_9;
    uint32_t TMR4_OCCRVH_10;
    uint32_t TMR4_OCCRVH_11;
    uint32_t TMR4_OCCRVH_12;
    uint32_t TMR4_OCCRVH_13;
    uint32_t TMR4_OCCRVH_14;
    uint32_t TMR4_OCCRVH_15;
} stc_tmr4_occrvh_bit_t;

typedef struct
{
    uint32_t TMR4_OCCRVL_0;
    uint32_t TMR4_OCCRVL_1;
    uint32_t TMR4_OCCRVL_2;
    uint32_t TMR4_OCCRVL_3;
    uint32_t TMR4_OCCRVL_4;
    uint32_t TMR4_OCCRVL_5;
    uint32_t TMR4_OCCRVL_6;
    uint32_t TMR4_OCCRVL_7;
    uint32_t TMR4_OCCRVL_8;
    uint32_t TMR4_OCCRVL_9;
    uint32_t TMR4_OCCRVL_10;
    uint32_t TMR4_OCCRVL_11;
    uint32_t TMR4_OCCRVL_12;
    uint32_t TMR4_OCCRVL_13;
    uint32_t TMR4_OCCRVL_14;
    uint32_t TMR4_OCCRVL_15;
} stc_tmr4_occrvl_bit_t;

typedef struct
{
    uint32_t TMR4_OCCRWH_0;
    uint32_t TMR4_OCCRWH_1;
    uint32_t TMR4_OCCRWH_2;
    uint32_t TMR4_OCCRWH_3;
    uint32_t TMR4_OCCRWH_4;
    uint32_t TMR4_OCCRWH_5;
    uint32_t TMR4_OCCRWH_6;
    uint32_t TMR4_OCCRWH_7;
    uint32_t TMR4_OCCRWH_8;
    uint32_t TMR4_OCCRWH_9;
    uint32_t TMR4_OCCRWH_10;
    uint32_t TMR4_OCCRWH_11;
    uint32_t TMR4_OCCRWH_12;
    uint32_t TMR4_OCCRWH_13;
    uint32_t TMR4_OCCRWH_14;
    uint32_t TMR4_OCCRWH_15;
} stc_tmr4_occrwh_bit_t;

typedef struct
{
    uint32_t TMR4_OCCRWL_0;
    uint32_t TMR4_OCCRWL_1;
    uint32_t TMR4_OCCRWL_2;
    uint32_t TMR4_OCCRWL_3;
    uint32_t TMR4_OCCRWL_4;
    uint32_t TMR4_OCCRWL_5;
    uint32_t TMR4_OCCRWL_6;
    uint32_t TMR4_OCCRWL_7;
    uint32_t TMR4_OCCRWL_8;
    uint32_t TMR4_OCCRWL_9;
    uint32_t TMR4_OCCRWL_10;
    uint32_t TMR4_OCCRWL_11;
    uint32_t TMR4_OCCRWL_12;
    uint32_t TMR4_OCCRWL_13;
    uint32_t TMR4_OCCRWL_14;
    uint32_t TMR4_OCCRWL_15;
} stc_tmr4_occrwl_bit_t;

typedef struct
{
    __IO uint32_t OCEH;
    __IO uint32_t OCEL;
    __IO uint32_t OCPH;
    __IO uint32_t OCPL;
    __IO uint32_t OCIEH;
    __IO uint32_t OCIEL;
    __IO uint32_t OCFH;
    __IO uint32_t OCFL;
    uint32_t RESERVED0[8];
} stc_tmr4_ocsr_bit_t;

typedef struct
{
    __IO uint32_t CHBUFEN0;
    __IO uint32_t CHBUFEN1;
    __IO uint32_t CLBUFEN0;
    __IO uint32_t CLBUFEN1;
    __IO uint32_t MHBUFEN0;
    __IO uint32_t MHBUFEN1;
    __IO uint32_t MLBUFEN0;
    __IO uint32_t MLBUFEN1;
    __IO uint32_t LMCH;
    __IO uint32_t LMCL;
    __IO uint32_t LMMH;
    __IO uint32_t LMML;
    __IO uint32_t MCECH;
    __IO uint32_t MCECL;
    uint32_t RESERVED0[2];
} stc_tmr4_ocer_bit_t;

typedef struct
{
    __IO uint32_t OCFDCH;
    __IO uint32_t OCFPKH;
    __IO uint32_t OCFUCH;
    __IO uint32_t OCFZRH;
    __IO uint32_t OPDCH0;
    __IO uint32_t OPDCH1;
    __IO uint32_t OPPKH0;
    __IO uint32_t OPPKH1;
    __IO uint32_t OPUCH0;
    __IO uint32_t OPUCH1;
    __IO uint32_t OPZRH0;
    __IO uint32_t OPZRH1;
    __IO uint32_t OPNPKH0;
    __IO uint32_t OPNPKH1;
    __IO uint32_t OPNZRH0;
    __IO uint32_t OPNZRH1;
} stc_tmr4_ocmrh_bit_t;

typedef struct
{
    __IO uint32_t OCFDCL;
    __IO uint32_t OCFPKL;
    __IO uint32_t OCFUCL;
    __IO uint32_t OCFZRL;
    __IO uint32_t OPDCL0;
    __IO uint32_t OPDCL1;
    __IO uint32_t OPPKL0;
    __IO uint32_t OPPKL1;
    __IO uint32_t OPUCL0;
    __IO uint32_t OPUCL1;
    __IO uint32_t OPZRL0;
    __IO uint32_t OPZRL1;
    __IO uint32_t OPNPKL0;
    __IO uint32_t OPNPKL1;
    __IO uint32_t OPNZRL0;
    __IO uint32_t OPNZRL1;
    __IO uint32_t EOPNDCL0;
    __IO uint32_t EOPNDCL1;
    __IO uint32_t EOPNUCL0;
    __IO uint32_t EOPNUCL1;
    __IO uint32_t EOPDCL0;
    __IO uint32_t EOPDCL1;
    __IO uint32_t EOPPKL0;
    __IO uint32_t EOPPKL1;
    __IO uint32_t EOPUCL0;
    __IO uint32_t EOPUCL1;
    __IO uint32_t EOPZRL0;
    __IO uint32_t EOPZRL1;
    __IO uint32_t EOPNPKL0;
    __IO uint32_t EOPNPKL1;
    __IO uint32_t EOPNZRL0;
    __IO uint32_t EOPNZRL1;
} stc_tmr4_ocmrl_bit_t;

typedef struct
{
    uint32_t TMR4_CPSR_0;
    uint32_t TMR4_CPSR_1;
    uint32_t TMR4_CPSR_2;
    uint32_t TMR4_CPSR_3;
    uint32_t TMR4_CPSR_4;
    uint32_t TMR4_CPSR_5;
    uint32_t TMR4_CPSR_6;
    uint32_t TMR4_CPSR_7;
    uint32_t TMR4_CPSR_8;
    uint32_t TMR4_CPSR_9;
    uint32_t TMR4_CPSR_10;
    uint32_t TMR4_CPSR_11;
    uint32_t TMR4_CPSR_12;
    uint32_t TMR4_CPSR_13;
    uint32_t TMR4_CPSR_14;
    uint32_t TMR4_CPSR_15;
} stc_tmr4_cpsr_bit_t;

typedef struct
{
    uint32_t TMR4_CNTR_0;
    uint32_t TMR4_CNTR_1;
    uint32_t TMR4_CNTR_2;
    uint32_t TMR4_CNTR_3;
    uint32_t TMR4_CNTR_4;
    uint32_t TMR4_CNTR_5;
    uint32_t TMR4_CNTR_6;
    uint32_t TMR4_CNTR_7;
    uint32_t TMR4_CNTR_8;
    uint32_t TMR4_CNTR_9;
    uint32_t TMR4_CNTR_10;
    uint32_t TMR4_CNTR_11;
    uint32_t TMR4_CNTR_12;
    uint32_t TMR4_CNTR_13;
    uint32_t TMR4_CNTR_14;
    uint32_t TMR4_CNTR_15;
} stc_tmr4_cntr_bit_t;

typedef struct
{
    __IO uint32_t CKDIV0;
    __IO uint32_t CKDIV1;
    __IO uint32_t CKDIV2;
    __IO uint32_t CKDIV3;
    __IO uint32_t CLEAR;
    __IO uint32_t MODE;
    __IO uint32_t STOP;
    __IO uint32_t BUFEN;
    __IO uint32_t IRQPEN;
    __IO uint32_t IRQPF;
    uint32_t RESERVED0[3];
    __IO uint32_t IRQZEN;
    __IO uint32_t IRQZF;
    __IO uint32_t ECKEN;
} stc_tmr4_ccsr_bit_t;

typedef struct
{
    __IO uint32_t ZIM0;
    __IO uint32_t ZIM1;
    __IO uint32_t ZIM2;
    __IO uint32_t ZIM3;
    __IO uint32_t PIM0;
    __IO uint32_t PIM1;
    __IO uint32_t PIM2;
    __IO uint32_t PIM3;
    __IO uint32_t ZIC0;
    __IO uint32_t ZIC1;
    __IO uint32_t ZIC2;
    __IO uint32_t ZIC3;
    __IO uint32_t PIC0;
    __IO uint32_t PIC1;
    __IO uint32_t PIC2;
    __IO uint32_t PIC3;
} stc_tmr4_cvpr_bit_t;

typedef struct
{
    uint32_t TMR4_PFSRU_0;
    uint32_t TMR4_PFSRU_1;
    uint32_t TMR4_PFSRU_2;
    uint32_t TMR4_PFSRU_3;
    uint32_t TMR4_PFSRU_4;
    uint32_t TMR4_PFSRU_5;
    uint32_t TMR4_PFSRU_6;
    uint32_t TMR4_PFSRU_7;
    uint32_t TMR4_PFSRU_8;
    uint32_t TMR4_PFSRU_9;
    uint32_t TMR4_PFSRU_10;
    uint32_t TMR4_PFSRU_11;
    uint32_t TMR4_PFSRU_12;
    uint32_t TMR4_PFSRU_13;
    uint32_t TMR4_PFSRU_14;
    uint32_t TMR4_PFSRU_15;
} stc_tmr4_pfsru_bit_t;

typedef struct
{
    uint32_t TMR4_PDARU_0;
    uint32_t TMR4_PDARU_1;
    uint32_t TMR4_PDARU_2;
    uint32_t TMR4_PDARU_3;
    uint32_t TMR4_PDARU_4;
    uint32_t TMR4_PDARU_5;
    uint32_t TMR4_PDARU_6;
    uint32_t TMR4_PDARU_7;
    uint32_t TMR4_PDARU_8;
    uint32_t TMR4_PDARU_9;
    uint32_t TMR4_PDARU_10;
    uint32_t TMR4_PDARU_11;
    uint32_t TMR4_PDARU_12;
    uint32_t TMR4_PDARU_13;
    uint32_t TMR4_PDARU_14;
    uint32_t TMR4_PDARU_15;
} stc_tmr4_pdaru_bit_t;

typedef struct
{
    uint32_t TMR4_PDBRU_0;
    uint32_t TMR4_PDBRU_1;
    uint32_t TMR4_PDBRU_2;
    uint32_t TMR4_PDBRU_3;
    uint32_t TMR4_PDBRU_4;
    uint32_t TMR4_PDBRU_5;
    uint32_t TMR4_PDBRU_6;
    uint32_t TMR4_PDBRU_7;
    uint32_t TMR4_PDBRU_8;
    uint32_t TMR4_PDBRU_9;
    uint32_t TMR4_PDBRU_10;
    uint32_t TMR4_PDBRU_11;
    uint32_t TMR4_PDBRU_12;
    uint32_t TMR4_PDBRU_13;
    uint32_t TMR4_PDBRU_14;
    uint32_t TMR4_PDBRU_15;
} stc_tmr4_pdbru_bit_t;

typedef struct
{
    uint32_t TMR4_PFSRV_0;
    uint32_t TMR4_PFSRV_1;
    uint32_t TMR4_PFSRV_2;
    uint32_t TMR4_PFSRV_3;
    uint32_t TMR4_PFSRV_4;
    uint32_t TMR4_PFSRV_5;
    uint32_t TMR4_PFSRV_6;
    uint32_t TMR4_PFSRV_7;
    uint32_t TMR4_PFSRV_8;
    uint32_t TMR4_PFSRV_9;
    uint32_t TMR4_PFSRV_10;
    uint32_t TMR4_PFSRV_11;
    uint32_t TMR4_PFSRV_12;
    uint32_t TMR4_PFSRV_13;
    uint32_t TMR4_PFSRV_14;
    uint32_t TMR4_PFSRV_15;
} stc_tmr4_pfsrv_bit_t;

typedef struct
{
    uint32_t TMR4_PDARV_0;
    uint32_t TMR4_PDARV_1;
    uint32_t TMR4_PDARV_2;
    uint32_t TMR4_PDARV_3;
    uint32_t TMR4_PDARV_4;
    uint32_t TMR4_PDARV_5;
    uint32_t TMR4_PDARV_6;
    uint32_t TMR4_PDARV_7;
    uint32_t TMR4_PDARV_8;
    uint32_t TMR4_PDARV_9;
    uint32_t TMR4_PDARV_10;
    uint32_t TMR4_PDARV_11;
    uint32_t TMR4_PDARV_12;
    uint32_t TMR4_PDARV_13;
    uint32_t TMR4_PDARV_14;
    uint32_t TMR4_PDARV_15;
} stc_tmr4_pdarv_bit_t;

typedef struct
{
    uint32_t TMR4_PDBRV_0;
    uint32_t TMR4_PDBRV_1;
    uint32_t TMR4_PDBRV_2;
    uint32_t TMR4_PDBRV_3;
    uint32_t TMR4_PDBRV_4;
    uint32_t TMR4_PDBRV_5;
    uint32_t TMR4_PDBRV_6;
    uint32_t TMR4_PDBRV_7;
    uint32_t TMR4_PDBRV_8;
    uint32_t TMR4_PDBRV_9;
    uint32_t TMR4_PDBRV_10;
    uint32_t TMR4_PDBRV_11;
    uint32_t TMR4_PDBRV_12;
    uint32_t TMR4_PDBRV_13;
    uint32_t TMR4_PDBRV_14;
    uint32_t TMR4_PDBRV_15;
} stc_tmr4_pdbrv_bit_t;

typedef struct
{
    uint32_t TMR4_PFSRW_0;
    uint32_t TMR4_PFSRW_1;
    uint32_t TMR4_PFSRW_2;
    uint32_t TMR4_PFSRW_3;
    uint32_t TMR4_PFSRW_4;
    uint32_t TMR4_PFSRW_5;
    uint32_t TMR4_PFSRW_6;
    uint32_t TMR4_PFSRW_7;
    uint32_t TMR4_PFSRW_8;
    uint32_t TMR4_PFSRW_9;
    uint32_t TMR4_PFSRW_10;
    uint32_t TMR4_PFSRW_11;
    uint32_t TMR4_PFSRW_12;
    uint32_t TMR4_PFSRW_13;
    uint32_t TMR4_PFSRW_14;
    uint32_t TMR4_PFSRW_15;
} stc_tmr4_pfsrw_bit_t;

typedef struct
{
    uint32_t TMR4_PDARW_0;
    uint32_t TMR4_PDARW_1;
    uint32_t TMR4_PDARW_2;
    uint32_t TMR4_PDARW_3;
    uint32_t TMR4_PDARW_4;
    uint32_t TMR4_PDARW_5;
    uint32_t TMR4_PDARW_6;
    uint32_t TMR4_PDARW_7;
    uint32_t TMR4_PDARW_8;
    uint32_t TMR4_PDARW_9;
    uint32_t TMR4_PDARW_10;
    uint32_t TMR4_PDARW_11;
    uint32_t TMR4_PDARW_12;
    uint32_t TMR4_PDARW_13;
    uint32_t TMR4_PDARW_14;
    uint32_t TMR4_PDARW_15;
} stc_tmr4_pdarw_bit_t;

typedef struct
{
    uint32_t TMR4_PDBRW_0;
    uint32_t TMR4_PDBRW_1;
    uint32_t TMR4_PDBRW_2;
    uint32_t TMR4_PDBRW_3;
    uint32_t TMR4_PDBRW_4;
    uint32_t TMR4_PDBRW_5;
    uint32_t TMR4_PDBRW_6;
    uint32_t TMR4_PDBRW_7;
    uint32_t TMR4_PDBRW_8;
    uint32_t TMR4_PDBRW_9;
    uint32_t TMR4_PDBRW_10;
    uint32_t TMR4_PDBRW_11;
    uint32_t TMR4_PDBRW_12;
    uint32_t TMR4_PDBRW_13;
    uint32_t TMR4_PDBRW_14;
    uint32_t TMR4_PDBRW_15;
} stc_tmr4_pdbrw_bit_t;

typedef struct
{
    __IO uint32_t DIVCK0;
    __IO uint32_t DIVCK1;
    __IO uint32_t DIVCK2;
    uint32_t RESERVED0[1];
    __IO uint32_t PWMMD0;
    __IO uint32_t PWMMD1;
    __IO uint32_t LVLS0;
    __IO uint32_t LVLS1;
    uint32_t RESERVED1[8];
} stc_tmr4_pocr_bit_t;

typedef struct
{
    __IO uint32_t RTIDU;
    __IO uint32_t RTIDV;
    __IO uint32_t RTIDW;
    uint32_t RESERVED0[1];
    __IO uint32_t RTIFU;
    __IO uint32_t RTICU;
    __IO uint32_t RTEU;
    __IO uint32_t RTSU;
    __IO uint32_t RTIFV;
    __IO uint32_t RTICV;
    __IO uint32_t RTEV;
    __IO uint32_t RTSV;
    __IO uint32_t RTIFW;
    __IO uint32_t RTICW;
    __IO uint32_t RTEW;
    __IO uint32_t RTSW;
} stc_tmr4_rcsr_bit_t;

typedef struct
{
    uint32_t TMR4_SCCRUH_0;
    uint32_t TMR4_SCCRUH_1;
    uint32_t TMR4_SCCRUH_2;
    uint32_t TMR4_SCCRUH_3;
    uint32_t TMR4_SCCRUH_4;
    uint32_t TMR4_SCCRUH_5;
    uint32_t TMR4_SCCRUH_6;
    uint32_t TMR4_SCCRUH_7;
    uint32_t TMR4_SCCRUH_8;
    uint32_t TMR4_SCCRUH_9;
    uint32_t TMR4_SCCRUH_10;
    uint32_t TMR4_SCCRUH_11;
    uint32_t TMR4_SCCRUH_12;
    uint32_t TMR4_SCCRUH_13;
    uint32_t TMR4_SCCRUH_14;
    uint32_t TMR4_SCCRUH_15;
} stc_tmr4_sccruh_bit_t;

typedef struct
{
    uint32_t TMR4_SCCRUL_0;
    uint32_t TMR4_SCCRUL_1;
    uint32_t TMR4_SCCRUL_2;
    uint32_t TMR4_SCCRUL_3;
    uint32_t TMR4_SCCRUL_4;
    uint32_t TMR4_SCCRUL_5;
    uint32_t TMR4_SCCRUL_6;
    uint32_t TMR4_SCCRUL_7;
    uint32_t TMR4_SCCRUL_8;
    uint32_t TMR4_SCCRUL_9;
    uint32_t TMR4_SCCRUL_10;
    uint32_t TMR4_SCCRUL_11;
    uint32_t TMR4_SCCRUL_12;
    uint32_t TMR4_SCCRUL_13;
    uint32_t TMR4_SCCRUL_14;
    uint32_t TMR4_SCCRUL_15;
} stc_tmr4_sccrul_bit_t;

typedef struct
{
    uint32_t TMR4_SCCRVH_0;
    uint32_t TMR4_SCCRVH_1;
    uint32_t TMR4_SCCRVH_2;
    uint32_t TMR4_SCCRVH_3;
    uint32_t TMR4_SCCRVH_4;
    uint32_t TMR4_SCCRVH_5;
    uint32_t TMR4_SCCRVH_6;
    uint32_t TMR4_SCCRVH_7;
    uint32_t TMR4_SCCRVH_8;
    uint32_t TMR4_SCCRVH_9;
    uint32_t TMR4_SCCRVH_10;
    uint32_t TMR4_SCCRVH_11;
    uint32_t TMR4_SCCRVH_12;
    uint32_t TMR4_SCCRVH_13;
    uint32_t TMR4_SCCRVH_14;
    uint32_t TMR4_SCCRVH_15;
} stc_tmr4_sccrvh_bit_t;

typedef struct
{
    uint32_t TMR4_SCCRVL_0;
    uint32_t TMR4_SCCRVL_1;
    uint32_t TMR4_SCCRVL_2;
    uint32_t TMR4_SCCRVL_3;
    uint32_t TMR4_SCCRVL_4;
    uint32_t TMR4_SCCRVL_5;
    uint32_t TMR4_SCCRVL_6;
    uint32_t TMR4_SCCRVL_7;
    uint32_t TMR4_SCCRVL_8;
    uint32_t TMR4_SCCRVL_9;
    uint32_t TMR4_SCCRVL_10;
    uint32_t TMR4_SCCRVL_11;
    uint32_t TMR4_SCCRVL_12;
    uint32_t TMR4_SCCRVL_13;
    uint32_t TMR4_SCCRVL_14;
    uint32_t TMR4_SCCRVL_15;
} stc_tmr4_sccrvl_bit_t;

typedef struct
{
    uint32_t TMR4_SCCRWH_0;
    uint32_t TMR4_SCCRWH_1;
    uint32_t TMR4_SCCRWH_2;
    uint32_t TMR4_SCCRWH_3;
    uint32_t TMR4_SCCRWH_4;
    uint32_t TMR4_SCCRWH_5;
    uint32_t TMR4_SCCRWH_6;
    uint32_t TMR4_SCCRWH_7;
    uint32_t TMR4_SCCRWH_8;
    uint32_t TMR4_SCCRWH_9;
    uint32_t TMR4_SCCRWH_10;
    uint32_t TMR4_SCCRWH_11;
    uint32_t TMR4_SCCRWH_12;
    uint32_t TMR4_SCCRWH_13;
    uint32_t TMR4_SCCRWH_14;
    uint32_t TMR4_SCCRWH_15;
} stc_tmr4_sccrwh_bit_t;

typedef struct
{
    uint32_t TMR4_SCCRWL_0;
    uint32_t TMR4_SCCRWL_1;
    uint32_t TMR4_SCCRWL_2;
    uint32_t TMR4_SCCRWL_3;
    uint32_t TMR4_SCCRWL_4;
    uint32_t TMR4_SCCRWL_5;
    uint32_t TMR4_SCCRWL_6;
    uint32_t TMR4_SCCRWL_7;
    uint32_t TMR4_SCCRWL_8;
    uint32_t TMR4_SCCRWL_9;
    uint32_t TMR4_SCCRWL_10;
    uint32_t TMR4_SCCRWL_11;
    uint32_t TMR4_SCCRWL_12;
    uint32_t TMR4_SCCRWL_13;
    uint32_t TMR4_SCCRWL_14;
    uint32_t TMR4_SCCRWL_15;
} stc_tmr4_sccrwl_bit_t;

typedef struct
{
    __IO uint32_t BUFEN0;
    __IO uint32_t BUFEN1;
    __IO uint32_t EVTOS0;
    __IO uint32_t EVTOS1;
    __IO uint32_t EVTOS2;
    __IO uint32_t LMC;
    uint32_t RESERVED0[2];
    __IO uint32_t EVTMS;
    __IO uint32_t EVTDS;
    uint32_t RESERVED1[2];
    __IO uint32_t DEN;
    __IO uint32_t PEN;
    __IO uint32_t UEN;
    __IO uint32_t ZEN;
} stc_tmr4_scsr_bit_t;

typedef struct
{
    __IO uint32_t AMC0;
    __IO uint32_t AMC1;
    __IO uint32_t AMC2;
    __IO uint32_t AMC3;
    uint32_t RESERVED0[2];
    __IO uint32_t MZCE;
    __IO uint32_t MPCE;
    uint32_t RESERVED1[8];
} stc_tmr4_scmr_bit_t;

typedef struct
{
    __IO uint32_t OEUH;
    __IO uint32_t OEUL;
    __IO uint32_t OEVH;
    __IO uint32_t OEVL;
    __IO uint32_t OEWH;
    __IO uint32_t OEWL;
    __IO uint32_t ODT0;
    __IO uint32_t ODT1;
    __IO uint32_t MOE;
    __IO uint32_t AOE;
    uint32_t RESERVED0[6];
    __IO uint32_t OSUH0;
    __IO uint32_t OSUH1;
    __IO uint32_t OSUL0;
    __IO uint32_t OSUL1;
    __IO uint32_t OSVH0;
    __IO uint32_t OSVH1;
    __IO uint32_t OSVL0;
    __IO uint32_t OSVL1;
    __IO uint32_t OSWH0;
    __IO uint32_t OSWH1;
    __IO uint32_t OSWL0;
    __IO uint32_t OSWL1;
    uint32_t RESERVED1[4];
} stc_tmr4_pscr_bit_t;

typedef struct
{
    __IO uint32_t EVTRS0;
    __IO uint32_t EVTRS1;
    __IO uint32_t EVTRS2;
    __IO uint32_t PCTS;
    uint32_t RESERVED0[12];
} stc_tmr4_scer_bit_t;

typedef struct
{
    __IO uint32_t CNT0;
    __IO uint32_t CNT1;
    __IO uint32_t CNT2;
    __IO uint32_t CNT3;
    __IO uint32_t CNT4;
    __IO uint32_t CNT5;
    __IO uint32_t CNT6;
    __IO uint32_t CNT7;
    __IO uint32_t CNT8;
    __IO uint32_t CNT9;
    __IO uint32_t CNT10;
    __IO uint32_t CNT11;
    __IO uint32_t CNT12;
    __IO uint32_t CNT13;
    __IO uint32_t CNT14;
    __IO uint32_t CNT15;
} stc_tmra_cnter_bit_t;

typedef struct
{
    __IO uint32_t PER0;
    __IO uint32_t PER1;
    __IO uint32_t PER2;
    __IO uint32_t PER3;
    __IO uint32_t PER4;
    __IO uint32_t PER5;
    __IO uint32_t PER6;
    __IO uint32_t PER7;
    __IO uint32_t PER8;
    __IO uint32_t PER9;
    __IO uint32_t PER10;
    __IO uint32_t PER11;
    __IO uint32_t PER12;
    __IO uint32_t PER13;
    __IO uint32_t PER14;
    __IO uint32_t PER15;
} stc_tmra_perar_bit_t;

typedef struct
{
    __IO uint32_t CMP0;
    __IO uint32_t CMP1;
    __IO uint32_t CMP2;
    __IO uint32_t CMP3;
    __IO uint32_t CMP4;
    __IO uint32_t CMP5;
    __IO uint32_t CMP6;
    __IO uint32_t CMP7;
    __IO uint32_t CMP8;
    __IO uint32_t CMP9;
    __IO uint32_t CMP10;
    __IO uint32_t CMP11;
    __IO uint32_t CMP12;
    __IO uint32_t CMP13;
    __IO uint32_t CMP14;
    __IO uint32_t CMP15;
} stc_tmra_cmpar_bit_t;

typedef struct
{
    __IO uint32_t START;
    __IO uint32_t DIR;
    __IO uint32_t MODE;
    __IO uint32_t SYNST;
    __IO uint32_t CKDIV0;
    __IO uint32_t CKDIV1;
    __IO uint32_t CKDIV2;
    __IO uint32_t CKDIV3;
    __IO uint32_t OVSTP;
    uint32_t RESERVED0[3];
    __IO uint32_t INENOVF;
    __IO uint32_t INENUDF;
    __IO uint32_t OVFF;
    __IO uint32_t UDFF;
} stc_tmra_bcstr_bit_t;

typedef struct
{
    __IO uint32_t HSTA0;
    __IO uint32_t HSTA1;
    __IO uint32_t HSTA2;
    uint32_t RESERVED0[1];
    __IO uint32_t HSTP0;
    __IO uint32_t HSTP1;
    __IO uint32_t HSTP2;
    uint32_t RESERVED1[1];
    __IO uint32_t HCLE0;
    __IO uint32_t HCLE1;
    __IO uint32_t HCLE2;
    uint32_t RESERVED2[1];
    __IO uint32_t HCLE3;
    __IO uint32_t HCLE4;
    uint32_t RESERVED3[2];
} stc_tmra_hconr_bit_t;

typedef struct
{
    __IO uint32_t HCUP0;
    __IO uint32_t HCUP1;
    __IO uint32_t HCUP2;
    __IO uint32_t HCUP3;
    __IO uint32_t HCUP4;
    __IO uint32_t HCUP5;
    __IO uint32_t HCUP6;
    __IO uint32_t HCUP7;
    __IO uint32_t HCUP8;
    __IO uint32_t HCUP9;
    __IO uint32_t HCUP10;
    __IO uint32_t HCUP11;
    __IO uint32_t HCUP12;
    uint32_t RESERVED0[3];
} stc_tmra_hcupr_bit_t;

typedef struct
{
    __IO uint32_t HCDO0;
    __IO uint32_t HCDO1;
    __IO uint32_t HCDO2;
    __IO uint32_t HCDO3;
    __IO uint32_t HCDO4;
    __IO uint32_t HCDO5;
    __IO uint32_t HCDO6;
    __IO uint32_t HCDO7;
    __IO uint32_t HCDO8;
    __IO uint32_t HCDO9;
    __IO uint32_t HCDO10;
    __IO uint32_t HCDO11;
    __IO uint32_t HCDO12;
    uint32_t RESERVED0[3];
} stc_tmra_hcdor_bit_t;

typedef struct
{
    __IO uint32_t ITEN1;
    __IO uint32_t ITEN2;
    uint32_t RESERVED0[14];
} stc_tmra_iconr_bit_t;

typedef struct
{
    __IO uint32_t ETEN1;
    __IO uint32_t ETEN2;
    uint32_t RESERVED0[14];
} stc_tmra_econr_bit_t;

typedef struct
{
    __IO uint32_t NOFIENTG;
    __IO uint32_t NOFICKTG0;
    __IO uint32_t NOFICKTG1;
    uint32_t RESERVED0[5];
    __IO uint32_t NOFIENCA;
    __IO uint32_t NOFICKCA0;
    __IO uint32_t NOFICKCA1;
    uint32_t RESERVED1[1];
    __IO uint32_t NOFIENCB;
    __IO uint32_t NOFICKCB0;
    __IO uint32_t NOFICKCB1;
    uint32_t RESERVED2[1];
} stc_tmra_fconr_bit_t;

typedef struct
{
    __IO uint32_t CMPF1;
    __IO uint32_t CMPF2;
    uint32_t RESERVED0[14];
} stc_tmra_stflr_bit_t;

typedef struct
{
    __IO uint32_t BEN;
    __IO uint32_t BSE0;
    __IO uint32_t BSE1;
    uint32_t RESERVED0[13];
} stc_tmra_bconr_bit_t;

typedef struct
{
    __IO uint32_t CAPMD;
    uint32_t RESERVED0[3];
    __IO uint32_t HICP0;
    __IO uint32_t HICP1;
    __IO uint32_t HICP2;
    uint32_t RESERVED1[5];
    __IO uint32_t NOFIENCP;
    __IO uint32_t NOFICKCP0;
    __IO uint32_t NOFICKCP1;
    uint32_t RESERVED2[1];
} stc_tmra_cconr_bit_t;

typedef struct
{
    __IO uint32_t STAC0;
    __IO uint32_t STAC1;
    __IO uint32_t STPC0;
    __IO uint32_t STPC1;
    __IO uint32_t CMPC0;
    __IO uint32_t CMPC1;
    __IO uint32_t PERC0;
    __IO uint32_t PERC1;
    __IO uint32_t FORC0;
    __IO uint32_t FORC1;
    uint32_t RESERVED0[2];
    __IO uint32_t OUTEN;
    uint32_t RESERVED1[3];
} stc_tmra_pconr_bit_t;

typedef struct
{
    __IO uint32_t CNT0;
    __IO uint32_t CNT1;
    __IO uint32_t CNT2;
    __IO uint32_t CNT3;
    __IO uint32_t CNT4;
    __IO uint32_t CNT5;
    __IO uint32_t CNT6;
    __IO uint32_t CNT7;
    __IO uint32_t CNT8;
    __IO uint32_t CNT9;
    __IO uint32_t CNT10;
    __IO uint32_t CNT11;
    __IO uint32_t CNT12;
    __IO uint32_t CNT13;
    __IO uint32_t CNT14;
    __IO uint32_t CNT15;
} stc_tmrb_cnter_bit_t;

typedef struct
{
    __IO uint32_t PER0;
    __IO uint32_t PER1;
    __IO uint32_t PER2;
    __IO uint32_t PER3;
    __IO uint32_t PER4;
    __IO uint32_t PER5;
    __IO uint32_t PER6;
    __IO uint32_t PER7;
    __IO uint32_t PER8;
    __IO uint32_t PER9;
    __IO uint32_t PER10;
    __IO uint32_t PER11;
    __IO uint32_t PER12;
    __IO uint32_t PER13;
    __IO uint32_t PER14;
    __IO uint32_t PER15;
} stc_tmrb_perar_bit_t;

typedef struct
{
    __IO uint32_t CMP0;
    __IO uint32_t CMP1;
    __IO uint32_t CMP2;
    __IO uint32_t CMP3;
    __IO uint32_t CMP4;
    __IO uint32_t CMP5;
    __IO uint32_t CMP6;
    __IO uint32_t CMP7;
    __IO uint32_t CMP8;
    __IO uint32_t CMP9;
    __IO uint32_t CMP10;
    __IO uint32_t CMP11;
    __IO uint32_t CMP12;
    __IO uint32_t CMP13;
    __IO uint32_t CMP14;
    __IO uint32_t CMP15;
} stc_tmrb_cmpar_bit_t;

typedef struct
{
    __IO uint32_t START;
    __IO uint32_t DIR;
    __IO uint32_t MODE;
    uint32_t RESERVED0[1];
    __IO uint32_t CKDIV0;
    __IO uint32_t CKDIV1;
    __IO uint32_t CKDIV2;
    __IO uint32_t CKDIV3;
    __IO uint32_t OVSTP;
    uint32_t RESERVED1[3];
    __IO uint32_t INENOVF;
    __IO uint32_t INENUDF;
    __IO uint32_t OVFF;
    __IO uint32_t UDFF;
} stc_tmrb_bcstr_bit_t;

typedef struct
{
    __IO uint32_t HSTA0;
    __IO uint32_t HSTA1;
    __IO uint32_t HSTA2;
    uint32_t RESERVED0[1];
    __IO uint32_t HSTP0;
    __IO uint32_t HSTP1;
    __IO uint32_t HSTP2;
    uint32_t RESERVED1[1];
    __IO uint32_t HCLE0;
    __IO uint32_t HCLE1;
    __IO uint32_t HCLE2;
    uint32_t RESERVED2[3];
    __IO uint32_t HCLE5;
    __IO uint32_t HCLE6;
} stc_tmrb_hconr_bit_t;

typedef struct
{
    uint32_t RESERVED0[8];
    __IO uint32_t HCUP8;
    __IO uint32_t HCUP9;
    __IO uint32_t HCUP10;
    uint32_t RESERVED1[5];
} stc_tmrb_hcupr_bit_t;

typedef struct
{
    uint32_t RESERVED0[8];
    __IO uint32_t HCDO8;
    __IO uint32_t HCDO9;
    __IO uint32_t HCDO10;
    uint32_t RESERVED1[5];
} stc_tmrb_hcdor_bit_t;

typedef struct
{
    __IO uint32_t ITEN1;
    __IO uint32_t ITEN2;
    __IO uint32_t ITEN3;
    __IO uint32_t ITEN4;
    __IO uint32_t ITEN5;
    __IO uint32_t ITEN6;
    uint32_t RESERVED0[10];
} stc_tmrb_iconr_bit_t;

typedef struct
{
    __IO uint32_t ETEN1;
    __IO uint32_t ETEN2;
    __IO uint32_t ETEN3;
    __IO uint32_t ETEN4;
    __IO uint32_t ETEN5;
    __IO uint32_t ETEN6;
    uint32_t RESERVED0[10];
} stc_tmrb_econr_bit_t;

typedef struct
{
    __IO uint32_t CMPF1;
    __IO uint32_t CMPF2;
    __IO uint32_t CMPF3;
    __IO uint32_t CMPF4;
    __IO uint32_t CMPF5;
    __IO uint32_t CMPF6;
    uint32_t RESERVED0[10];
} stc_tmrb_stflr_bit_t;

typedef struct
{
    __IO uint32_t BEN;
    __IO uint32_t BSE0;
    __IO uint32_t BSE1;
    uint32_t RESERVED0[13];
} stc_tmrb_bconr_bit_t;

typedef struct
{
    __IO uint32_t CAPMDA;
    uint32_t RESERVED0[3];
    __IO uint32_t HICP0;
    __IO uint32_t HICP1;
    __IO uint32_t HICP2;
    uint32_t RESERVED1[5];
    __IO uint32_t NOFIENCP;
    __IO uint32_t NOFICKCP0;
    __IO uint32_t NOFICKCP1;
    uint32_t RESERVED2[1];
} stc_tmrb_cconr_bit_t;

typedef struct
{
    __IO uint32_t STAC0;
    __IO uint32_t STAC1;
    __IO uint32_t STPC0;
    __IO uint32_t STPC1;
    __IO uint32_t CMPC0;
    __IO uint32_t CMPC1;
    __IO uint32_t PERC0;
    __IO uint32_t PERC1;
    __IO uint32_t FORC0;
    __IO uint32_t FORC1;
    uint32_t RESERVED0[2];
    __IO uint32_t OUTEN;
    uint32_t RESERVED1[3];
} stc_tmrb_pconr_bit_t;

typedef struct
{
    __IO uint32_t PE;
    __IO uint32_t FE;
    uint32_t RESERVED0[1];
    __IO uint32_t ORE;
    uint32_t RESERVED1[1];
    __IO uint32_t RXNE;
    __IO uint32_t TC;
    __IO uint32_t TXE;
    uint32_t RESERVED2[8];
    __IO uint32_t MPB;
    uint32_t RESERVED3[15];
} stc_usart_sr_bit_t;

typedef struct
{
    __IO uint32_t TDR0;
    __IO uint32_t TDR1;
    __IO uint32_t TDR2;
    __IO uint32_t TDR3;
    __IO uint32_t TDR4;
    __IO uint32_t TDR5;
    __IO uint32_t TDR6;
    __IO uint32_t TDR7;
    __IO uint32_t TDR8;
    __IO uint32_t MPID;
    uint32_t RESERVED0[6];
    __IO uint32_t RDR0;
    __IO uint32_t RDR1;
    __IO uint32_t RDR2;
    __IO uint32_t RDR3;
    __IO uint32_t RDR4;
    __IO uint32_t RDR5;
    __IO uint32_t RDR6;
    __IO uint32_t RDR7;
    __IO uint32_t RDR8;
    uint32_t RESERVED1[7];
} stc_usart_dr_bit_t;

typedef struct
{
    uint32_t RESERVED0[8];
    __IO uint32_t DIV_INTEGER0;
    __IO uint32_t DIV_INTEGER1;
    __IO uint32_t DIV_INTEGER2;
    __IO uint32_t DIV_INTEGER3;
    __IO uint32_t DIV_INTEGER4;
    __IO uint32_t DIV_INTEGER5;
    __IO uint32_t DIV_INTEGER6;
    __IO uint32_t DIV_INTEGER7;
    uint32_t RESERVED1[16];
} stc_usart_brr_bit_t;

typedef struct
{
    uint32_t RESERVED0[2];
    __IO uint32_t RE;
    __IO uint32_t TE;
    __IO uint32_t SLME;
    __IO uint32_t RIE;
    __IO uint32_t TCIE;
    __IO uint32_t TXEIE;
    uint32_t RESERVED1[1];
    __IO uint32_t PS;
    __IO uint32_t PCE;
    uint32_t RESERVED2[1];
    __IO uint32_t M;
    uint32_t RESERVED3[2];
    __IO uint32_t OVER8;
    __IO uint32_t CPE;
    __IO uint32_t CFE;
    uint32_t RESERVED4[1];
    __IO uint32_t CORE;
    uint32_t RESERVED5[4];
    __IO uint32_t MS;
    uint32_t RESERVED6[3];
    __IO uint32_t ML;
    uint32_t RESERVED7[1];
    __IO uint32_t NFE;
    __IO uint32_t SBS;
} stc_usart_cr1_bit_t;

typedef struct
{
    __IO uint32_t MPE;
    uint32_t RESERVED0[10];
    __IO uint32_t CLKC0;
    __IO uint32_t CLKC1;
    __IO uint32_t STOP;
    uint32_t RESERVED1[18];
} stc_usart_cr2_bit_t;

typedef struct
{
    uint32_t RESERVED0[3];
    __IO uint32_t HDSEL;
    uint32_t RESERVED1[5];
    __IO uint32_t CTSE;
    uint32_t RESERVED2[22];
} stc_usart_cr3_bit_t;

typedef struct
{
    __IO uint32_t PSC0;
    __IO uint32_t PSC1;
    uint32_t RESERVED0[30];
} stc_usart_pr_bit_t;

typedef struct
{
    __IO uint32_t PERI0;
    __IO uint32_t PERI1;
    uint32_t RESERVED0[2];
    __IO uint32_t CKS0;
    __IO uint32_t CKS1;
    __IO uint32_t CKS2;
    __IO uint32_t CKS3;
    __IO uint32_t WDPT0;
    __IO uint32_t WDPT1;
    __IO uint32_t WDPT2;
    __IO uint32_t WDPT3;
    uint32_t RESERVED1[4];
    __IO uint32_t SLPOFF;
    uint32_t RESERVED2[14];
    __IO uint32_t ITS;
} stc_wdt_cr_bit_t;

typedef struct
{
    __IO uint32_t CNT0;
    __IO uint32_t CNT1;
    __IO uint32_t CNT2;
    __IO uint32_t CNT3;
    __IO uint32_t CNT4;
    __IO uint32_t CNT5;
    __IO uint32_t CNT6;
    __IO uint32_t CNT7;
    __IO uint32_t CNT8;
    __IO uint32_t CNT9;
    __IO uint32_t CNT10;
    __IO uint32_t CNT11;
    __IO uint32_t CNT12;
    __IO uint32_t CNT13;
    __IO uint32_t CNT14;
    __IO uint32_t CNT15;
    __IO uint32_t UDF;
    __IO uint32_t REF;
    uint32_t RESERVED0[14];
} stc_wdt_sr_bit_t;

typedef struct
{
    __IO uint32_t RF0;
    __IO uint32_t RF1;
    __IO uint32_t RF2;
    __IO uint32_t RF3;
    __IO uint32_t RF4;
    __IO uint32_t RF5;
    __IO uint32_t RF6;
    __IO uint32_t RF7;
    __IO uint32_t RF8;
    __IO uint32_t RF9;
    __IO uint32_t RF10;
    __IO uint32_t RF11;
    __IO uint32_t RF12;
    __IO uint32_t RF13;
    __IO uint32_t RF14;
    __IO uint32_t RF15;
    uint32_t RESERVED0[16];
} stc_wdt_rr_bit_t;


typedef struct
{
    stc_adc_str_bit_t                        STR_b;
    uint32_t                                 RESERVED0[8];
    stc_adc_cr0_bit_t                        CR0_b;
    stc_adc_cr1_bit_t                        CR1_b;
    uint32_t                                 RESERVED1[32];
    stc_adc_trgsr_bit_t                      TRGSR_b;
    stc_adc_chselra0_bit_t                   CHSELRA0_b;
    uint32_t                                 RESERVED2[16];
    stc_adc_chselrb0_bit_t                   CHSELRB0_b;
    uint32_t                                 RESERVED3[16];
    stc_adc_avchselr0_bit_t                  AVCHSELR0_b;
    uint32_t                                 RESERVED4[16];
    stc_adc_exchselr_bit_t                   EXCHSELR_b;
    uint32_t                                 RESERVED5[8];
    stc_adc_shcr_bit_t                       SHCR_b;
    uint32_t                                 RESERVED6[32];
    stc_adc_sstr0_bit_t                      SSTR0_b;
    stc_adc_sstr1_bit_t                      SSTR1_b;
    stc_adc_sstr2_bit_t                      SSTR2_b;
    stc_adc_sstr3_bit_t                      SSTR3_b;
    stc_adc_sstr4_bit_t                      SSTR4_b;
    stc_adc_sstr5_bit_t                      SSTR5_b;
    stc_adc_sstr6_bit_t                      SSTR6_b;
    stc_adc_sstr7_bit_t                      SSTR7_b;
    stc_adc_sstr8_bit_t                      SSTR8_b;
    stc_adc_sstr9_bit_t                      SSTR9_b;
    uint32_t                                 RESERVED7[208];
    stc_adc_isr_bit_t                        ISR_b;
    stc_adc_icr_bit_t                        ICR_b;
    stc_adc_isclrr_bit_t                     ISCLRR_b;
    uint32_t                                 RESERVED8[72];
    stc_adc_dr0_bit_t                        DR0_b;
    stc_adc_dr1_bit_t                        DR1_b;
    stc_adc_dr2_bit_t                        DR2_b;
    stc_adc_dr3_bit_t                        DR3_b;
    stc_adc_dr4_bit_t                        DR4_b;
    stc_adc_dr5_bit_t                        DR5_b;
    stc_adc_dr6_bit_t                        DR6_b;
    stc_adc_dr7_bit_t                        DR7_b;
    stc_adc_dr8_bit_t                        DR8_b;
    stc_adc_dr9_bit_t                        DR9_b;
} bM4_ADC_TypeDef;

typedef struct
{
    stc_aos_intc_strgcr_bit_t                INTC_STRGCR_b;
    uint32_t                                 RESERVED0[224];
    stc_aos_tmr00_htssr_bit_t                TMR00_HTSSR_b;
    stc_aos_tmr01_htssr_bit_t                TMR01_HTSSR_b;
    uint32_t                                 RESERVED1[192];
    stc_aos_tmra0_htssr_bit_t                TMRA0_HTSSR_b;
    stc_aos_tmra1_htssr_bit_t                TMRA1_HTSSR_b;
    uint32_t                                 RESERVED2[64];
    stc_aos_tmrb_htssr_bit_t                 TMRB_HTSSR_b;
    uint32_t                                 RESERVED3[96];
    stc_aos_adc_itrgselr0_bit_t              ADC_ITRGSELR0_b;
    stc_aos_adc_itrgselr1_bit_t              ADC_ITRGSELR1_b;
    uint32_t                                 RESERVED4[192];
    stc_aos_dma0_trgsel_bit_t                DMA0_TRGSEL_b;
    stc_aos_dma1_trgsel_bit_t                DMA1_TRGSEL_b;
    stc_aos_dma2_trgsel_bit_t                DMA2_TRGSEL_b;
    stc_aos_dma3_trgsel_bit_t                DMA3_TRGSEL_b;
    stc_aos_dcu_trgsel_bit_t                 DCU_TRGSEL_b;
} bM4_AOS_TypeDef;

typedef struct
{
    stc_cmp_mdr_bit_t                        MDR_b;
    stc_cmp_fir_bit_t                        FIR_b;
    stc_cmp_ocr_bit_t                        OCR_b;
    stc_cmp_vsr_bit_t                        VSR_b;
    stc_cmp_twr1_bit_t                       TWR1_b;
    stc_cmp_twr2_bit_t                       TWR2_b;
} bM4_CMP_TypeDef;

typedef struct
{
    stc_cmu_adcksel_bit_t                    ADCKSEL_b;
    uint32_t                                 RESERVED0[24];
    stc_cmu_xtalstdsr_bit_t                  XTALSTDSR_b;
    uint32_t                                 RESERVED1[24];
    stc_cmu_scfgr_bit_t                      SCFGR_b;
    stc_cmu_ckswr_bit_t                      CKSWR_b;
    uint32_t                                 RESERVED2[24];
    stc_cmu_xtalcr_bit_t                     XTALCR_b;
    uint32_t                                 RESERVED3[24];
    stc_cmu_xtalcfgr_bit_t                   XTALCFGR_b;
    stc_cmu_xtalstbcr_bit_t                  XTALSTBCR_b;
    uint32_t                                 RESERVED4[16];
    stc_cmu_hrccr_bit_t                      HRCCR_b;
    uint32_t                                 RESERVED5[24];
    stc_cmu_hrccfgr_bit_t                    HRCCFGR_b;
    uint32_t                                 RESERVED6[24];
    stc_cmu_oscstbsr_bit_t                   OSCSTBSR_b;
    uint32_t                                 RESERVED7[24];
    stc_cmu_mcocfgr_bit_t                    MCOCFGR_b;
    uint32_t                                 RESERVED8[24];
    stc_cmu_xtalstdcr_bit_t                  XTALSTDCR_b;
    uint32_t                                 RESERVED9[56];
    stc_cmu_fcg_bit_t                        FCG_b;
    uint32_t                                 RESERVED10[64];
    stc_cmu_lrccr_bit_t                      LRCCR_b;
    uint32_t                                 RESERVED11[24];
    stc_cmu_mrccr_bit_t                      MRCCR_b;
    uint32_t                                 RESERVED12[24];
    stc_cmu_pllcfgr_bit_t                    PLLCFGR_b;
    stc_cmu_pllcr_bit_t                      PLLCR_b;
    uint32_t                                 RESERVED13[24];
    stc_cmu_tpiuckcfgr_bit_t                 TPIUCKCFGR_b;
} bM4_CMU_TypeDef;

typedef struct
{
    stc_crc_cr_bit_t                         CR_b;
    stc_crc_reslt_bit_t                      RESLT_b;
    uint32_t                                 RESERVED0[960];
    stc_crc_dat0_bit_t                       DAT0_b;
    stc_crc_dat1_bit_t                       DAT1_b;
    stc_crc_dat2_bit_t                       DAT2_b;
    stc_crc_dat3_bit_t                       DAT3_b;
    stc_crc_dat4_bit_t                       DAT4_b;
    stc_crc_dat5_bit_t                       DAT5_b;
    stc_crc_dat6_bit_t                       DAT6_b;
    stc_crc_dat7_bit_t                       DAT7_b;
    stc_crc_dat8_bit_t                       DAT8_b;
    stc_crc_dat9_bit_t                       DAT9_b;
    stc_crc_dat10_bit_t                      DAT10_b;
    stc_crc_dat11_bit_t                      DAT11_b;
    stc_crc_dat12_bit_t                      DAT12_b;
    stc_crc_dat13_bit_t                      DAT13_b;
    stc_crc_dat14_bit_t                      DAT14_b;
    stc_crc_dat15_bit_t                      DAT15_b;
    stc_crc_dat16_bit_t                      DAT16_b;
    stc_crc_dat17_bit_t                      DAT17_b;
    stc_crc_dat18_bit_t                      DAT18_b;
    stc_crc_dat19_bit_t                      DAT19_b;
    stc_crc_dat20_bit_t                      DAT20_b;
    stc_crc_dat21_bit_t                      DAT21_b;
    stc_crc_dat22_bit_t                      DAT22_b;
    stc_crc_dat23_bit_t                      DAT23_b;
    stc_crc_dat24_bit_t                      DAT24_b;
    stc_crc_dat25_bit_t                      DAT25_b;
    stc_crc_dat26_bit_t                      DAT26_b;
    stc_crc_dat27_bit_t                      DAT27_b;
    stc_crc_dat28_bit_t                      DAT28_b;
    stc_crc_dat29_bit_t                      DAT29_b;
    stc_crc_dat30_bit_t                      DAT30_b;
    stc_crc_dat31_bit_t                      DAT31_b;
} bM4_CRC_TypeDef;

typedef struct
{
    stc_ctc_cr1_bit_t                        CR1_b;
    stc_ctc_cr2_bit_t                        CR2_b;
    stc_ctc_str_bit_t                        STR_b;
} bM4_CTC_TypeDef;

typedef struct
{
    stc_cmp_dadr1_bit_t                      DADR1_b;
    uint32_t                                 RESERVED0[48];
    stc_cmp_dacr1_bit_t                      DACR1_b;
    uint32_t                                 RESERVED1[16];
    stc_cmp_dadc1_bit_t                      DADC1_b;
} bM4_DAC_TypeDef;

typedef struct
{
    stc_dbg_authid0_bit_t                    AUTHID0_b;
    stc_dbg_authid1_bit_t                    AUTHID1_b;
    stc_dbg_authid2_bit_t                    AUTHID2_b;
    stc_dbg_resv0_bit_t                      RESV0_b;
    stc_dbg_mcustat_bit_t                    MCUSTAT_b;
    stc_dbg_mcuctl_bit_t                     MCUCTL_b;
    stc_dbg_fmcctl_bit_t                     FMCCTL_b;
} bM4_DBGC_TypeDef;

typedef struct
{
    stc_dcu_ctl_bit_t                        CTL_b;
    stc_dcu_flag_bit_t                       FLAG_b;
    stc_dcu_data0_bit_t                      DATA0_b;
    stc_dcu_data1_bit_t                      DATA1_b;
    stc_dcu_data2_bit_t                      DATA2_b;
    stc_dcu_flagclr_bit_t                    FLAGCLR_b;
    stc_dcu_intsel_bit_t                     INTSEL_b;
} bM4_DCU_TypeDef;

typedef struct
{
    stc_dma_en_bit_t                         EN_b;
    stc_dma_intstat0_bit_t                   INTSTAT0_b;
    stc_dma_intstat1_bit_t                   INTSTAT1_b;
    stc_dma_intmask0_bit_t                   INTMASK0_b;
    stc_dma_intmask1_bit_t                   INTMASK1_b;
    stc_dma_intclr0_bit_t                    INTCLR0_b;
    stc_dma_intclr1_bit_t                    INTCLR1_b;
    stc_dma_chen_bit_t                       CHEN_b;
    uint32_t                                 RESERVED0[32];
    stc_dma_chstat_bit_t                     CHSTAT_b;
    uint32_t                                 RESERVED1[64];
    stc_dma_ram_llp_bit_t                    RAM_LLP_b;
    stc_dma_rom_llp_bit_t                    ROM_LLP_b;
    stc_dma_chenclr_bit_t                    CHENCLR_b;
    uint32_t                                 RESERVED2[32];
    stc_dma_sar0_bit_t                       SAR0_b;
    stc_dma_dar0_bit_t                       DAR0_b;
    stc_dma_ch0ctl0_bit_t                    CH0CTL0_b;
    stc_dma_ch0ctl1_bit_t                    CH0CTL1_b;
    uint32_t                                 RESERVED3[384];
    stc_dma_sar1_bit_t                       SAR1_b;
    stc_dma_dar1_bit_t                       DAR1_b;
    stc_dma_ch1ctl0_bit_t                    CH1CTL0_b;
    stc_dma_ch1ctl1_bit_t                    CH1CTL1_b;
    uint32_t                                 RESERVED4[384];
    stc_dma_sar2_bit_t                       SAR2_b;
    stc_dma_dar2_bit_t                       DAR2_b;
    stc_dma_ch2ctl0_bit_t                    CH2CTL0_b;
    stc_dma_ch2ctl1_bit_t                    CH2CTL1_b;
    uint32_t                                 RESERVED5[384];
    stc_dma_sar3_bit_t                       SAR3_b;
    stc_dma_dar3_bit_t                       DAR3_b;
    stc_dma_ch3ctl0_bit_t                    CH3CTL0_b;
    stc_dma_ch3ctl1_bit_t                    CH3CTL1_b;
} bM4_DMA_TypeDef;

typedef struct
{
    stc_efm_faprt_bit_t                      FAPRT_b;
    stc_efm_fstp_bit_t                       FSTP_b;
    stc_efm_frmc_bit_t                       FRMC_b;
    stc_efm_fwmc_bit_t                       FWMC_b;
    stc_efm_fsr_bit_t                        FSR_b;
    stc_efm_fsclr_bit_t                      FSCLR_b;
    stc_efm_fite_bit_t                       FITE_b;
    uint32_t                                 RESERVED0[32];
    stc_efm_fpmtsw_bit_t                     FPMTSW_b;
    stc_efm_fpmtew_bit_t                     FPMTEW_b;
    uint32_t                                 RESERVED1[320];
    stc_efm_uqid0_bit_t                      UQID0_b;
    stc_efm_uqid1_bit_t                      UQID1_b;
    stc_efm_uqid2_bit_t                      UQID2_b;
    stc_efm_uqid3_bit_t                      UQID3_b;
    uint32_t                                 RESERVED2[4368];
    stc_efm_hrccfgr_bit_t                    HRCCFGR_b;
} bM4_EFM_TypeDef;

typedef struct
{
    stc_emb_ctl0_bit_t                       CTL0_b;
    stc_emb_pwmlv0_bit_t                     PWMLV0_b;
    stc_emb_soe0_bit_t                       SOE0_b;
    stc_emb_stat0_bit_t                      STAT0_b;
    stc_emb_statclr0_bit_t                   STATCLR0_b;
    stc_emb_inten0_bit_t                     INTEN0_b;
    uint32_t                                 RESERVED0[64];
    stc_emb_ctl1_bit_t                       CTL1_b;
    uint32_t                                 RESERVED1[32];
    stc_emb_soe1_bit_t                       SOE1_b;
    stc_emb_stat1_bit_t                      STAT1_b;
    stc_emb_statclr1_bit_t                   STATCLR1_b;
    stc_emb_inten1_bit_t                     INTEN1_b;
    stc_emb_ecsr_bit_t                       ECSR_b;
} bM4_EMB_TypeDef;

typedef struct
{
    stc_fcm_lvr_bit_t                        LVR_b;
    stc_fcm_uvr_bit_t                        UVR_b;
    stc_fcm_cntr_bit_t                       CNTR_b;
    stc_fcm_str_bit_t                        STR_b;
    stc_fcm_mccr_bit_t                       MCCR_b;
    stc_fcm_rccr_bit_t                       RCCR_b;
    stc_fcm_rier_bit_t                       RIER_b;
    stc_fcm_sr_bit_t                         SR_b;
    stc_fcm_clr_bit_t                        CLR_b;
} bM4_FCM_TypeDef;

typedef struct
{
    stc_gpio_pidr_bit_t                      PIDR0_b;
    stc_gpio_pidr_bit_t                      PIDR1_b;
    stc_gpio_pidr_bit_t                      PIDR2_b;
    stc_gpio_pidr_bit_t                      PIDR3_b;
    stc_gpio_pidr_bit_t                      PIDR4_b;
    stc_gpio_pidr_bit_t                      PIDR5_b;
    uint32_t                                 RESERVED0[8];
    stc_gpio_pidr_bit_t                      PIDR7_b;
    uint32_t                                 RESERVED1[8];
    stc_gpio_pidr_bit_t                      PIDR9_b;
    stc_gpio_pidr_bit_t                      PIDRA_b;
    stc_gpio_pidr_bit_t                      PIDRB_b;
    uint32_t                                 RESERVED2[8];
    stc_gpio_pidr_bit_t                      PIDRD_b;
    stc_gpio_pidr_bit_t                      PIDRE_b;
    uint32_t                                 RESERVED3[8];
    stc_gpio_podr_bit_t                      PODR0_b;
    stc_gpio_podr_bit_t                      PODR1_b;
    stc_gpio_podr_bit_t                      PODR2_b;
    stc_gpio_podr_bit_t                      PODR3_b;
    stc_gpio_podr_bit_t                      PODR4_b;
    stc_gpio_podr_bit_t                      PODR5_b;
    uint32_t                                 RESERVED4[8];
    stc_gpio_podr_bit_t                      PODR7_b;
    uint32_t                                 RESERVED5[8];
    stc_gpio_podr_bit_t                      PODR9_b;
    stc_gpio_podr_bit_t                      PODRA_b;
    stc_gpio_podr_bit_t                      PODRB_b;
    uint32_t                                 RESERVED6[8];
    stc_gpio_podr_bit_t                      PODRD_b;
    stc_gpio_podr_bit_t                      PODRE_b;
    uint32_t                                 RESERVED7[8];
    stc_gpio_poer_bit_t                      POER0_b;
    stc_gpio_poer_bit_t                      POER1_b;
    stc_gpio_poer_bit_t                      POER2_b;
    stc_gpio_poer_bit_t                      POER3_b;
    stc_gpio_poer_bit_t                      POER4_b;
    stc_gpio_poer_bit_t                      POER5_b;
    uint32_t                                 RESERVED8[8];
    stc_gpio_poer_bit_t                      POER7_b;
    uint32_t                                 RESERVED9[8];
    stc_gpio_poer_bit_t                      POER9_b;
    stc_gpio_poer_bit_t                      POERA_b;
    stc_gpio_poer_bit_t                      POERB_b;
    uint32_t                                 RESERVED10[8];
    stc_gpio_poer_bit_t                      POERD_b;
    stc_gpio_poer_bit_t                      POERE_b;
    uint32_t                                 RESERVED11[8];
    stc_gpio_posr_bit_t                      POSR0_b;
    stc_gpio_posr_bit_t                      POSR1_b;
    stc_gpio_posr_bit_t                      POSR2_b;
    stc_gpio_posr_bit_t                      POSR3_b;
    stc_gpio_posr_bit_t                      POSR4_b;
    stc_gpio_posr_bit_t                      POSR5_b;
    uint32_t                                 RESERVED12[8];
    stc_gpio_posr_bit_t                      POSR7_b;
    uint32_t                                 RESERVED13[8];
    stc_gpio_posr_bit_t                      POSR9_b;
    stc_gpio_posr_bit_t                      POSRA_b;
    stc_gpio_posr_bit_t                      POSRB_b;
    uint32_t                                 RESERVED14[8];
    stc_gpio_posr_bit_t                      POSRD_b;
    stc_gpio_posr_bit_t                      POSRE_b;
    uint32_t                                 RESERVED15[8];
    stc_gpio_porr_bit_t                      PORR0_b;
    stc_gpio_porr_bit_t                      PORR1_b;
    stc_gpio_porr_bit_t                      PORR2_b;
    stc_gpio_porr_bit_t                      PORR3_b;
    stc_gpio_porr_bit_t                      PORR4_b;
    stc_gpio_porr_bit_t                      PORR5_b;
    uint32_t                                 RESERVED16[8];
    stc_gpio_porr_bit_t                      PORR7_b;
    uint32_t                                 RESERVED17[8];
    stc_gpio_porr_bit_t                      PORR9_b;
    stc_gpio_porr_bit_t                      PORRA_b;
    stc_gpio_porr_bit_t                      PORRB_b;
    uint32_t                                 RESERVED18[8];
    stc_gpio_porr_bit_t                      PORRD_b;
    stc_gpio_porr_bit_t                      PORRE_b;
    uint32_t                                 RESERVED19[8];
    stc_gpio_potr_bit_t                      POTR0_b;
    stc_gpio_potr_bit_t                      POTR1_b;
    stc_gpio_potr_bit_t                      POTR2_b;
    stc_gpio_potr_bit_t                      POTR3_b;
    stc_gpio_potr_bit_t                      POTR4_b;
    stc_gpio_potr_bit_t                      POTR5_b;
    uint32_t                                 RESERVED20[8];
    stc_gpio_potr_bit_t                      POTR7_b;
    uint32_t                                 RESERVED21[8];
    stc_gpio_potr_bit_t                      POTR9_b;
    stc_gpio_potr_bit_t                      POTRA_b;
    stc_gpio_potr_bit_t                      POTRB_b;
    uint32_t                                 RESERVED22[8];
    stc_gpio_potr_bit_t                      POTRD_b;
    stc_gpio_potr_bit_t                      POTRE_b;
    uint32_t                                 RESERVED23[5384];
    stc_gpio_pspcr_bit_t                     PSPCR_b;
    uint32_t                                 RESERVED24[16];
    stc_gpio_pccr_bit_t                      PCCR_b;
    stc_gpio_pinaer_bit_t                    PINAER_b;
    stc_gpio_pwpr_bit_t                      PWPR_b;
    uint32_t                                 RESERVED25[1968];
    stc_gpio_pcr_bit_t                       PCR00_b;
    stc_gpio_pfsr_bit_t                      PFSR00_b;
    stc_gpio_pcr_bit_t                       PCR01_b;
    stc_gpio_pfsr_bit_t                      PFSR01_b;
    stc_gpio_pcr_bit_t                       PCR02_b;
    stc_gpio_pfsr_bit_t                      PFSR02_b;
    uint32_t                                 RESERVED26[160];
    stc_gpio_pcr_bit_t                       PCR10_b;
    stc_gpio_pfsr_bit_t                      PFSR10_b;
    stc_gpio_pcr_bit_t                       PCR11_b;
    stc_gpio_pfsr_bit_t                      PFSR11_b;
    uint32_t                                 RESERVED27[256];
    stc_gpio_pcr_bit_t                       PCR22_b;
    stc_gpio_pfsr_bit_t                      PFSR22_b;
    stc_gpio_pcr_bit_t                       PCR23_b;
    stc_gpio_pfsr_bit_t                      PFSR23_b;
    stc_gpio_pcr_bit_t                       PCR24_b;
    stc_gpio_pfsr_bit_t                      PFSR24_b;
    uint32_t                                 RESERVED28[96];
    stc_gpio_pcr_bit_t                       PCR30_b;
    stc_gpio_pfsr_bit_t                      PFSR30_b;
    stc_gpio_pcr_bit_t                       PCR31_b;
    stc_gpio_pfsr_bit_t                      PFSR31_b;
    stc_gpio_pcr_bit_t                       PCR32_b;
    stc_gpio_pfsr_bit_t                      PFSR32_b;
    stc_gpio_pcr_bit_t                       PCR33_b;
    stc_gpio_pfsr_bit_t                      PFSR33_b;
    uint32_t                                 RESERVED29[64];
    stc_gpio_pcr_bit_t                       PCR36_b;
    stc_gpio_pfsr_bit_t                      PFSR36_b;
    stc_gpio_pcr_bit_t                       PCR37_b;
    stc_gpio_pfsr_bit_t                      PFSR37_b;
    stc_gpio_pcr_bit_t                       PCR40_b;
    stc_gpio_pfsr_bit_t                      PFSR40_b;
    stc_gpio_pcr_bit_t                       PCR41_b;
    stc_gpio_pfsr_bit_t                      PFSR41_b;
    stc_gpio_pcr_bit_t                       PCR42_b;
    stc_gpio_pfsr_bit_t                      PFSR42_b;
    stc_gpio_pcr_bit_t                       PCR43_b;
    stc_gpio_pfsr_bit_t                      PFSR43_b;
    stc_gpio_pcr_bit_t                       PCR44_b;
    stc_gpio_pfsr_bit_t                      PFSR44_b;
    stc_gpio_pcr_bit_t                       PCR45_b;
    stc_gpio_pfsr_bit_t                      PFSR45_b;
    stc_gpio_pcr_bit_t                       PCR46_b;
    stc_gpio_pfsr_bit_t                      PFSR46_b;
    stc_gpio_pcr_bit_t                       PCR47_b;
    stc_gpio_pfsr_bit_t                      PFSR47_b;
    stc_gpio_pcr_bit_t                       PCR50_b;
    stc_gpio_pfsr_bit_t                      PFSR50_b;
    uint32_t                                 RESERVED30[480];
    stc_gpio_pcr_bit_t                       PCR70_b;
    stc_gpio_pfsr_bit_t                      PFSR70_b;
    stc_gpio_pcr_bit_t                       PCR71_b;
    stc_gpio_pfsr_bit_t                      PFSR71_b;
    stc_gpio_pcr_bit_t                       PCR72_b;
    stc_gpio_pfsr_bit_t                      PFSR72_b;
    stc_gpio_pcr_bit_t                       PCR73_b;
    stc_gpio_pfsr_bit_t                      PFSR73_b;
    stc_gpio_pcr_bit_t                       PCR74_b;
    stc_gpio_pfsr_bit_t                      PFSR74_b;
    stc_gpio_pcr_bit_t                       PCR75_b;
    stc_gpio_pfsr_bit_t                      PFSR75_b;
    stc_gpio_pcr_bit_t                       PCR76_b;
    stc_gpio_pfsr_bit_t                      PFSR76_b;
    uint32_t                                 RESERVED31[320];
    stc_gpio_pcr_bit_t                       PCR91_b;
    stc_gpio_pfsr_bit_t                      PFSR91_b;
    stc_gpio_pcr_bit_t                       PCR92_b;
    stc_gpio_pfsr_bit_t                      PFSR92_b;
    stc_gpio_pcr_bit_t                       PCR93_b;
    stc_gpio_pfsr_bit_t                      PFSR93_b;
    stc_gpio_pcr_bit_t                       PCR94_b;
    stc_gpio_pfsr_bit_t                      PFSR94_b;
    uint32_t                                 RESERVED32[160];
    stc_gpio_pcr_bit_t                       PCRA2_b;
    stc_gpio_pfsr_bit_t                      PFSRA2_b;
    stc_gpio_pcr_bit_t                       PCRA3_b;
    stc_gpio_pfsr_bit_t                      PFSRA3_b;
    stc_gpio_pcr_bit_t                       PCRA4_b;
    stc_gpio_pfsr_bit_t                      PFSRA4_b;
    stc_gpio_pcr_bit_t                       PCRA5_b;
    stc_gpio_pfsr_bit_t                      PFSRA5_b;
    uint32_t                                 RESERVED33[64];
    stc_gpio_pcr_bit_t                       PCRB0_b;
    stc_gpio_pfsr_bit_t                      PFSRB0_b;
    stc_gpio_pcr_bit_t                       PCRB1_b;
    stc_gpio_pfsr_bit_t                      PFSRB1_b;
    stc_gpio_pcr_bit_t                       PCRB2_b;
    stc_gpio_pfsr_bit_t                      PFSRB2_b;
    stc_gpio_pcr_bit_t                       PCRB3_b;
    stc_gpio_pfsr_bit_t                      PFSRB3_b;
    stc_gpio_pcr_bit_t                       PCRB4_b;
    stc_gpio_pfsr_bit_t                      PFSRB4_b;
    stc_gpio_pcr_bit_t                       PCRB5_b;
    stc_gpio_pfsr_bit_t                      PFSRB5_b;
    stc_gpio_pcr_bit_t                       PCRB6_b;
    stc_gpio_pfsr_bit_t                      PFSRB6_b;
    stc_gpio_pcr_bit_t                       PCRB7_b;
    stc_gpio_pfsr_bit_t                      PFSRB7_b;
    uint32_t                                 RESERVED34[352];
    stc_gpio_pcr_bit_t                       PCRD3_b;
    stc_gpio_pfsr_bit_t                      PFSRD3_b;
    stc_gpio_pcr_bit_t                       PCRD4_b;
    stc_gpio_pfsr_bit_t                      PFSRD4_b;
    stc_gpio_pcr_bit_t                       PCRD5_b;
    stc_gpio_pfsr_bit_t                      PFSRD5_b;
    stc_gpio_pcr_bit_t                       PCRD6_b;
    stc_gpio_pfsr_bit_t                      PFSRD6_b;
    stc_gpio_pcr_bit_t                       PCRD7_b;
    stc_gpio_pfsr_bit_t                      PFSRD7_b;
    uint32_t                                 RESERVED35[64];
    stc_gpio_pcr_bit_t                       PCRE2_b;
    stc_gpio_pfsr_bit_t                      PFSRE2_b;
} bM4_GPIO_TypeDef;

typedef struct
{
    stc_i2c_cr1_bit_t                        CR1_b;
    stc_i2c_cr2_bit_t                        CR2_b;
    uint32_t                                 RESERVED0[64];
    stc_i2c_slr0_bit_t                       SLR0_b;
    stc_i2c_slr1_bit_t                       SLR1_b;
    uint32_t                                 RESERVED1[32];
    stc_i2c_sr_bit_t                         SR_b;
    stc_i2c_clr_bit_t                        CLR_b;
    stc_i2c_dtr_bit_t                        DTR_b;
    stc_i2c_drr_bit_t                        DRR_b;
    stc_i2c_ccr_bit_t                        CCR_b;
    stc_i2c_fltr_bit_t                       FLTR_b;
} bM4_I2C_TypeDef;

typedef struct
{
    stc_icg_icg0_bit_t                       ICG0_b;
    stc_icg_icg1_bit_t                       ICG1_b;
    stc_icg_icg2_bit_t                       ICG2_b;
    stc_icg_icg3_bit_t                       ICG3_b;
    stc_icg_icg4_bit_t                       ICG4_b;
    stc_icg_icg5_bit_t                       ICG5_b;
    stc_icg_icg6_bit_t                       ICG6_b;
    stc_icg_icg7_bit_t                       ICG7_b;
} bM4_ICG_TypeDef;

typedef struct
{
    stc_intc_nmicr_bit_t                     NMICR_b;
    stc_intc_nmier_bit_t                     NMIER_b;
    stc_intc_nmifr_bit_t                     NMIFR_b;
    stc_intc_nmicfr_bit_t                    NMICFR_b;
    stc_intc_eirqcr_bit_t                    EIRQCR0_b;
    stc_intc_eirqcr_bit_t                    EIRQCR1_b;
    stc_intc_eirqcr_bit_t                    EIRQCR2_b;
    stc_intc_eirqcr_bit_t                    EIRQCR3_b;
    stc_intc_eirqcr_bit_t                    EIRQCR4_b;
    stc_intc_eirqcr_bit_t                    EIRQCR5_b;
    stc_intc_eirqcr_bit_t                    EIRQCR6_b;
    stc_intc_eirqcr_bit_t                    EIRQCR7_b;
    uint32_t                                 RESERVED0[256];
    stc_intc_wupen_bit_t                     WUPEN_b;
    stc_intc_eirqfr_bit_t                    EIRQFR_b;
    stc_intc_eirqcfr_bit_t                   EIRQCFR_b;
    stc_intc_sel_bit_t                       SEL0_b;
    stc_intc_sel_bit_t                       SEL1_b;
    stc_intc_sel_bit_t                       SEL2_b;
    stc_intc_sel_bit_t                       SEL3_b;
    stc_intc_sel_bit_t                       SEL4_b;
    stc_intc_sel_bit_t                       SEL5_b;
    stc_intc_sel_bit_t                       SEL6_b;
    stc_intc_sel_bit_t                       SEL7_b;
    stc_intc_sel_bit_t                       SEL8_b;
    stc_intc_sel_bit_t                       SEL9_b;
    stc_intc_sel_bit_t                       SEL10_b;
    stc_intc_sel_bit_t                       SEL11_b;
    stc_intc_sel_bit_t                       SEL12_b;
    stc_intc_sel_bit_t                       SEL13_b;
    stc_intc_sel_bit_t                       SEL14_b;
    stc_intc_sel_bit_t                       SEL15_b;
    stc_intc_sel_bit_t                       SEL16_b;
    stc_intc_sel_bit_t                       SEL17_b;
    stc_intc_sel_bit_t                       SEL18_b;
    stc_intc_sel_bit_t                       SEL19_b;
    stc_intc_sel_bit_t                       SEL20_b;
    stc_intc_sel_bit_t                       SEL21_b;
    stc_intc_sel_bit_t                       SEL22_b;
    stc_intc_sel_bit_t                       SEL23_b;
    stc_intc_sel_bit_t                       SEL24_b;
    stc_intc_sel_bit_t                       SEL25_b;
    stc_intc_sel_bit_t                       SEL26_b;
    stc_intc_sel_bit_t                       SEL27_b;
    stc_intc_sel_bit_t                       SEL28_b;
    stc_intc_sel_bit_t                       SEL29_b;
    stc_intc_sel_bit_t                       SEL30_b;
    stc_intc_sel_bit_t                       SEL31_b;
    stc_intc_sel_bit_t                       SEL32_b;
    stc_intc_sel_bit_t                       SEL33_b;
    stc_intc_sel_bit_t                       SEL34_b;
    stc_intc_sel_bit_t                       SEL35_b;
    stc_intc_sel_bit_t                       SEL36_b;
    stc_intc_sel_bit_t                       SEL37_b;
    stc_intc_sel_bit_t                       SEL38_b;
    stc_intc_sel_bit_t                       SEL39_b;
    stc_intc_sel_bit_t                       SEL40_b;
    stc_intc_sel_bit_t                       SEL41_b;
    stc_intc_sel_bit_t                       SEL42_b;
    stc_intc_sel_bit_t                       SEL43_b;
    stc_intc_sel_bit_t                       SEL44_b;
    stc_intc_sel_bit_t                       SEL45_b;
    stc_intc_sel_bit_t                       SEL46_b;
    stc_intc_sel_bit_t                       SEL47_b;
    stc_intc_sel_bit_t                       SEL48_b;
    stc_intc_sel_bit_t                       SEL49_b;
    stc_intc_sel_bit_t                       SEL50_b;
    stc_intc_sel_bit_t                       SEL51_b;
    stc_intc_sel_bit_t                       SEL52_b;
    stc_intc_sel_bit_t                       SEL53_b;
    stc_intc_sel_bit_t                       SEL54_b;
    stc_intc_sel_bit_t                       SEL55_b;
    stc_intc_sel_bit_t                       SEL56_b;
    stc_intc_sel_bit_t                       SEL57_b;
    stc_intc_sel_bit_t                       SEL58_b;
    stc_intc_sel_bit_t                       SEL59_b;
    stc_intc_sel_bit_t                       SEL60_b;
    stc_intc_sel_bit_t                       SEL61_b;
    stc_intc_sel_bit_t                       SEL62_b;
    stc_intc_sel_bit_t                       SEL63_b;
    stc_intc_sel_bit_t                       SEL64_b;
    stc_intc_sel_bit_t                       SEL65_b;
    stc_intc_sel_bit_t                       SEL66_b;
    stc_intc_sel_bit_t                       SEL67_b;
    stc_intc_sel_bit_t                       SEL68_b;
    stc_intc_sel_bit_t                       SEL69_b;
    stc_intc_sel_bit_t                       SEL70_b;
    stc_intc_sel_bit_t                       SEL71_b;
    stc_intc_sel_bit_t                       SEL72_b;
    stc_intc_sel_bit_t                       SEL73_b;
    stc_intc_sel_bit_t                       SEL74_b;
    stc_intc_sel_bit_t                       SEL75_b;
    stc_intc_sel_bit_t                       SEL76_b;
    stc_intc_sel_bit_t                       SEL77_b;
    stc_intc_sel_bit_t                       SEL78_b;
    stc_intc_sel_bit_t                       SEL79_b;
    stc_intc_sel_bit_t                       SEL80_b;
    stc_intc_sel_bit_t                       SEL81_b;
    stc_intc_sel_bit_t                       SEL82_b;
    stc_intc_sel_bit_t                       SEL83_b;
    stc_intc_sel_bit_t                       SEL84_b;
    stc_intc_sel_bit_t                       SEL85_b;
    stc_intc_sel_bit_t                       SEL86_b;
    stc_intc_sel_bit_t                       SEL87_b;
    stc_intc_sel_bit_t                       SEL88_b;
    stc_intc_sel_bit_t                       SEL89_b;
    stc_intc_sel_bit_t                       SEL90_b;
    stc_intc_sel_bit_t                       SEL91_b;
    stc_intc_sel_bit_t                       SEL92_b;
    stc_intc_sel_bit_t                       SEL93_b;
    stc_intc_sel_bit_t                       SEL94_b;
    stc_intc_sel_bit_t                       SEL95_b;
    stc_intc_sel_bit_t                       SEL96_b;
    stc_intc_sel_bit_t                       SEL97_b;
    stc_intc_sel_bit_t                       SEL98_b;
    stc_intc_sel_bit_t                       SEL99_b;
    stc_intc_sel_bit_t                       SEL100_b;
    uint32_t                                 RESERVED1[1376];
    stc_intc_swier_bit_t                     SWIER_b;
    stc_intc_evter_bit_t                     EVTER_b;
    stc_intc_ier_bit_t                       IER_b;
} bM4_INTC_TypeDef;

typedef struct
{
    stc_pwc_stpmcr_bit_t                     STPMCR_b;
    uint32_t                                 RESERVED0[24];
    stc_pwc_pwrc_bit_t                       PWRC_b;
    uint32_t                                 RESERVED1[16];
    stc_pwc_pwrmonr_bit_t                    PWRMONR_b;
    uint32_t                                 RESERVED2[24];
    stc_pwc_ramcr_bit_t                      RAMCR_b;
    uint32_t                                 RESERVED3[24];
    stc_pwc_lvdcr0_bit_t                     LVDCR0_b;
    stc_pwc_lvdcsr1_bit_t                    LVDCSR1_b;
    uint32_t                                 RESERVED4[88];
    stc_pwc_fprc_bit_t                       FPRC_b;
    uint32_t                                 RESERVED5[240];
    stc_pwc_dbgc_bit_t                       DBGC_b;
    uint32_t                                 RESERVED6[1520];
    stc_pwc_rstf0_bit_t                      RSTF0_b;
} bM4_PWC_TypeDef;

typedef struct
{
    stc_rmu_rstf0_bit_t                      RSTF0_b;
} bM4_RMU_TypeDef;

typedef struct
{
    stc_spi_dr_bit_t                         DR_b;
    stc_spi_cr1_bit_t                        CR1_b;
    uint32_t                                 RESERVED0[32];
    stc_spi_cfg1_bit_t                       CFG1_b;
    uint32_t                                 RESERVED1[32];
    stc_spi_sr_bit_t                         SR_b;
    stc_spi_cfg2_bit_t                       CFG2_b;
} bM4_SPI_TypeDef;

typedef struct
{
    uint32_t                                 RESERVED0[32];
    stc_swdt_sr_bit_t                        SR_b;
    stc_swdt_rr_bit_t                        RR_b;
} bM4_SWDT_TypeDef;

typedef struct
{
    stc_tmr0_cntar_bit_t                     CNTAR_b;
    stc_tmr0_cntbr_bit_t                     CNTBR_b;
    stc_tmr0_cmpar_bit_t                     CMPAR_b;
    stc_tmr0_cmpbr_bit_t                     CMPBR_b;
    stc_tmr0_bconr_bit_t                     BCONR_b;
    stc_tmr0_stflr_bit_t                     STFLR_b;
} bM4_TMR0_TypeDef;

typedef struct
{
    uint32_t                                 RESERVED0[16];
    stc_tmr4_occruh_bit_t                    OCCRUH_b;
    uint32_t                                 RESERVED1[16];
    stc_tmr4_occrul_bit_t                    OCCRUL_b;
    uint32_t                                 RESERVED2[16];
    stc_tmr4_occrvh_bit_t                    OCCRVH_b;
    uint32_t                                 RESERVED3[16];
    stc_tmr4_occrvl_bit_t                    OCCRVL_b;
    uint32_t                                 RESERVED4[16];
    stc_tmr4_occrwh_bit_t                    OCCRWH_b;
    uint32_t                                 RESERVED5[16];
    stc_tmr4_occrwl_bit_t                    OCCRWL_b;
    stc_tmr4_ocsr_bit_t                      OCSRU_b;
    stc_tmr4_ocer_bit_t                      OCERU_b;
    stc_tmr4_ocsr_bit_t                      OCSRV_b;
    stc_tmr4_ocer_bit_t                      OCERV_b;
    stc_tmr4_ocsr_bit_t                      OCSRW_b;
    stc_tmr4_ocer_bit_t                      OCERW_b;
    stc_tmr4_ocmrh_bit_t                     OCMRHUH_b;
    uint32_t                                 RESERVED6[16];
    stc_tmr4_ocmrl_bit_t                     OCMRLUL_b;
    stc_tmr4_ocmrh_bit_t                     OCMRHVH_b;
    uint32_t                                 RESERVED7[16];
    stc_tmr4_ocmrl_bit_t                     OCMRLVL_b;
    stc_tmr4_ocmrh_bit_t                     OCMRHWH_b;
    uint32_t                                 RESERVED8[16];
    stc_tmr4_ocmrl_bit_t                     OCMRLWL_b;
    uint32_t                                 RESERVED9[48];
    stc_tmr4_cpsr_bit_t                      CPSR_b;
    uint32_t                                 RESERVED10[16];
    stc_tmr4_cntr_bit_t                      CNTR_b;
    stc_tmr4_ccsr_bit_t                      CCSR_b;
    stc_tmr4_cvpr_bit_t                      CVPR_b;
    uint32_t                                 RESERVED11[432];
    stc_tmr4_pfsru_bit_t                     PFSRU_b;
    stc_tmr4_pdaru_bit_t                     PDARU_b;
    stc_tmr4_pdbru_bit_t                     PDBRU_b;
    uint32_t                                 RESERVED12[16];
    stc_tmr4_pfsrv_bit_t                     PFSRV_b;
    stc_tmr4_pdarv_bit_t                     PDARV_b;
    stc_tmr4_pdbrv_bit_t                     PDBRV_b;
    uint32_t                                 RESERVED13[16];
    stc_tmr4_pfsrw_bit_t                     PFSRW_b;
    stc_tmr4_pdarw_bit_t                     PDARW_b;
    stc_tmr4_pdbrw_bit_t                     PDBRW_b;
    stc_tmr4_pocr_bit_t                      POCRU_b;
    uint32_t                                 RESERVED14[16];
    stc_tmr4_pocr_bit_t                      POCRV_b;
    uint32_t                                 RESERVED15[16];
    stc_tmr4_pocr_bit_t                      POCRW_b;
    uint32_t                                 RESERVED16[16];
    stc_tmr4_rcsr_bit_t                      RCSR_b;
    uint32_t                                 RESERVED17[96];
    stc_tmr4_sccruh_bit_t                    SCCRUH_b;
    uint32_t                                 RESERVED18[16];
    stc_tmr4_sccrul_bit_t                    SCCRUL_b;
    uint32_t                                 RESERVED19[16];
    stc_tmr4_sccrvh_bit_t                    SCCRVH_b;
    uint32_t                                 RESERVED20[16];
    stc_tmr4_sccrvl_bit_t                    SCCRVL_b;
    uint32_t                                 RESERVED21[16];
    stc_tmr4_sccrwh_bit_t                    SCCRWH_b;
    uint32_t                                 RESERVED22[16];
    stc_tmr4_sccrwl_bit_t                    SCCRWL_b;
    stc_tmr4_scsr_bit_t                      SCSRUH_b;
    stc_tmr4_scmr_bit_t                      SCMRUH_b;
    stc_tmr4_scsr_bit_t                      SCSRUL_b;
    stc_tmr4_scmr_bit_t                      SCMRUL_b;
    stc_tmr4_scsr_bit_t                      SCSRVH_b;
    stc_tmr4_scmr_bit_t                      SCMRVH_b;
    stc_tmr4_scsr_bit_t                      SCSRVL_b;
    stc_tmr4_scmr_bit_t                      SCMRVL_b;
    stc_tmr4_scsr_bit_t                      SCSRWH_b;
    stc_tmr4_scmr_bit_t                      SCMRWH_b;
    stc_tmr4_scsr_bit_t                      SCSRWL_b;
    stc_tmr4_scmr_bit_t                      SCMRWL_b;
    stc_tmr4_pscr_bit_t                      PSCR_b;
    stc_tmr4_scer_bit_t                      SCER_b;
} bM4_TMR4_TypeDef;

typedef struct
{
    stc_tmra_cnter_bit_t                     CNTER_b;
    uint32_t                                 RESERVED0[16];
    stc_tmra_perar_bit_t                     PERAR_b;
    uint32_t                                 RESERVED1[464];
    stc_tmra_cmpar_bit_t                     CMPAR1_b;
    uint32_t                                 RESERVED2[16];
    stc_tmra_cmpar_bit_t                     CMPAR2_b;
    uint32_t                                 RESERVED3[464];
    stc_tmra_bcstr_bit_t                     BCSTR_b;
    uint32_t                                 RESERVED4[16];
    stc_tmra_hconr_bit_t                     HCONR_b;
    uint32_t                                 RESERVED5[16];
    stc_tmra_hcupr_bit_t                     HCUPR_b;
    uint32_t                                 RESERVED6[16];
    stc_tmra_hcdor_bit_t                     HCDOR_b;
    uint32_t                                 RESERVED7[16];
    stc_tmra_iconr_bit_t                     ICONR_b;
    uint32_t                                 RESERVED8[16];
    stc_tmra_econr_bit_t                     ECONR_b;
    uint32_t                                 RESERVED9[16];
    stc_tmra_fconr_bit_t                     FCONR_b;
    uint32_t                                 RESERVED10[16];
    stc_tmra_stflr_bit_t                     STFLR_b;
    uint32_t                                 RESERVED11[272];
    stc_tmra_bconr_bit_t                     BCONR_b;
    uint32_t                                 RESERVED12[496];
    stc_tmra_cconr_bit_t                     CCONR1_b;
    uint32_t                                 RESERVED13[16];
    stc_tmra_cconr_bit_t                     CCONR2_b;
    uint32_t                                 RESERVED14[464];
    stc_tmra_pconr_bit_t                     PCONR1_b;
    uint32_t                                 RESERVED15[16];
    stc_tmra_pconr_bit_t                     PCONR2_b;
} bM4_TMRA_TypeDef;

typedef struct
{
    stc_tmrb_cnter_bit_t                     CNTER_b;
    uint32_t                                 RESERVED0[16];
    stc_tmrb_perar_bit_t                     PERAR_b;
    uint32_t                                 RESERVED1[464];
    stc_tmrb_cmpar_bit_t                     CMPAR1_b;
    uint32_t                                 RESERVED2[16];
    stc_tmrb_cmpar_bit_t                     CMPAR2_b;
    uint32_t                                 RESERVED3[16];
    stc_tmrb_cmpar_bit_t                     CMPAR3_b;
    uint32_t                                 RESERVED4[16];
    stc_tmrb_cmpar_bit_t                     CMPAR4_b;
    uint32_t                                 RESERVED5[16];
    stc_tmrb_cmpar_bit_t                     CMPAR5_b;
    uint32_t                                 RESERVED6[16];
    stc_tmrb_cmpar_bit_t                     CMPAR6_b;
    uint32_t                                 RESERVED7[336];
    stc_tmrb_bcstr_bit_t                     BCSTR_b;
    uint32_t                                 RESERVED8[16];
    stc_tmrb_hconr_bit_t                     HCONR_b;
    uint32_t                                 RESERVED9[16];
    stc_tmrb_hcupr_bit_t                     HCUPR_b;
    uint32_t                                 RESERVED10[16];
    stc_tmrb_hcdor_bit_t                     HCDOR_b;
    uint32_t                                 RESERVED11[16];
    stc_tmrb_iconr_bit_t                     ICONR_b;
    uint32_t                                 RESERVED12[16];
    stc_tmrb_econr_bit_t                     ECONR_b;
    uint32_t                                 RESERVED13[48];
    stc_tmrb_stflr_bit_t                     STFLR_b;
    uint32_t                                 RESERVED14[272];
    stc_tmrb_bconr_bit_t                     BCONR1_b;
    uint32_t                                 RESERVED15[48];
    stc_tmrb_bconr_bit_t                     BCONR2_b;
    uint32_t                                 RESERVED16[48];
    stc_tmrb_bconr_bit_t                     BCONR3_b;
    uint32_t                                 RESERVED17[368];
    stc_tmrb_cconr_bit_t                     CCONR1_b;
    uint32_t                                 RESERVED18[16];
    stc_tmrb_cconr_bit_t                     CCONR2_b;
    uint32_t                                 RESERVED19[16];
    stc_tmrb_cconr_bit_t                     CCONR3_b;
    uint32_t                                 RESERVED20[16];
    stc_tmrb_cconr_bit_t                     CCONR4_b;
    uint32_t                                 RESERVED21[400];
    stc_tmrb_pconr_bit_t                     PCONR1_b;
    uint32_t                                 RESERVED22[16];
    stc_tmrb_pconr_bit_t                     PCONR2_b;
    uint32_t                                 RESERVED23[16];
    stc_tmrb_pconr_bit_t                     PCONR3_b;
    uint32_t                                 RESERVED24[16];
    stc_tmrb_pconr_bit_t                     PCONR4_b;
} bM4_TMRB_TypeDef;

typedef struct
{
    stc_usart_sr_bit_t                       SR_b;
    stc_usart_dr_bit_t                       DR_b;
    stc_usart_brr_bit_t                      BRR_b;
    stc_usart_cr1_bit_t                      CR1_b;
    stc_usart_cr2_bit_t                      CR2_b;
    stc_usart_cr3_bit_t                      CR3_b;
    stc_usart_pr_bit_t                       PR_b;
} bM4_USART_TypeDef;

typedef struct
{
    stc_wdt_cr_bit_t                         CR_b;
    stc_wdt_sr_bit_t                         SR_b;
    stc_wdt_rr_bit_t                         RR_b;
} bM4_WDT_TypeDef;



/******************************************************************************/
/*      Device Specific Peripheral bit_band declaration & memory map          */
/******************************************************************************/

#define bM4_ADC                              ((bM4_ADC_TypeDef *)0x42600000UL)
#define bM4_AOS                              ((bM4_AOS_TypeDef *)0x42210000UL)
#define bM4_CMP1                             ((bM4_CMP_TypeDef *)0x42940000UL)
#define bM4_CMP2                             ((bM4_CMP_TypeDef *)0x42940200UL)
#define bM4_CMP3                             ((bM4_CMP_TypeDef *)0x42940400UL)
#define bM4_CMU                              ((bM4_CMU_TypeDef *)0x42A88000UL)
#define bM4_CRC                              ((bM4_CRC_TypeDef *)0x42A08000UL)
#define bM4_CTC                              ((bM4_CTC_TypeDef *)0x42200000UL)
#define bM4_DAC                              ((bM4_DAC_TypeDef *)0x42942000UL)
#define bM4_DCU                              ((bM4_DCU_TypeDef *)0x42A40000UL)
#define bM4_DMA                              ((bM4_DMA_TypeDef *)0x42A60000UL)
#define bM4_EFM                              ((bM4_EFM_TypeDef *)0x42208000UL)
#define bM4_EMB                              ((bM4_EMB_TypeDef *)0x422F8000UL)
#define bM4_FCM                              ((bM4_FCM_TypeDef *)0x42908000UL)
#define bM4_GPIO                             ((bM4_GPIO_TypeDef *)0x42A70000UL)
#define bM4_I2C                              ((bM4_I2C_TypeDef *)0x429C0000UL)
#define bM4_INTC                             ((bM4_INTC_TypeDef *)0x42A20000UL)
#define bM4_PWC                              ((bM4_PWC_TypeDef *)0x42A80000UL)
#define bM4_RMU                              ((bM4_RMU_TypeDef *)0x42A82000UL)
#define bM4_SPI                              ((bM4_SPI_TypeDef *)0x42380000UL)
#define bM4_SWDT                             ((bM4_SWDT_TypeDef *)0x42928000UL)
#define bM4_TMR01                            ((bM4_TMR0_TypeDef *)0x42480000UL)
#define bM4_TMR02                            ((bM4_TMR0_TypeDef *)0x42488000UL)
#define bM4_TMR4                             ((bM4_TMR4_TypeDef *)0x422E0000UL)
#define bM4_TMRA1                            ((bM4_TMRA_TypeDef *)0x422A0000UL)
#define bM4_TMRA2                            ((bM4_TMRA_TypeDef *)0x422A8000UL)
#define bM4_TMRA3                            ((bM4_TMRA_TypeDef *)0x422B0000UL)
#define bM4_TMRA4                            ((bM4_TMRA_TypeDef *)0x422B8000UL)
#define bM4_TMRB                             ((bM4_TMRB_TypeDef *)0x424A0000UL)
#define bM4_USART1                           ((bM4_USART_TypeDef *)0x423A0000UL)
#define bM4_USART2                           ((bM4_USART_TypeDef *)0x423A8000UL)
#define bM4_USART3                           ((bM4_USART_TypeDef *)0x42420000UL)
#define bM4_USART4                           ((bM4_USART_TypeDef *)0x42428000UL)
#define bM4_WDT                              ((bM4_WDT_TypeDef *)0x42920000UL)


#ifdef __cplusplus
}
#endif

#endif /* __HC32M423_H__ */

