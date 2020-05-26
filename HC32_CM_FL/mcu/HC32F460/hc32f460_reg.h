#ifndef __FLASH_REG_H__
#define __FLASH_REG_H__

/*******************************************************************************
* Configuration of the Cortex-M0P Processor and Core Peripherals
******************************************************************************/
#define __MPU_PRESENT           0 /* No MPU                                       */
#define __NVIC_PRIO_BITS        4 /* M4 uses 4 Bits for the Priority Levels      */
#define __Vendor_SysTickConfig  0 /* Set to 1 if different SysTick Config is used */

typedef enum IRQn
{
    NMI_IRQn            = -14, /*  2 Non Maskable                            */
    HardFault_IRQn      = -13, /*  3 Hard Fault                              */
    SVC_IRQn            = -5,  /* 11 SV Call                                 */
    PendSV_IRQn         = -2,  /* 14 Pend SV                                 */
    SysTick_IRQn        = -1,  /* 15 System Tick                             */

} IRQn_Type;


#include <core_cm4.h>
#include <stdint.h>

/* bit field */
/* FAPRT 0000H */
typedef struct
{
    __IO uint32_t FAPRT                     :16;
} stc_fmc_faprt_field_t;

/* FSTP 0004H */
typedef struct
{
    __IO uint32_t FSLEEP                    : 1;
} stc_fmc_fstp_field_t;

/* FRMC 0008H */
typedef struct
{
    __IO uint32_t SLPMD                     : 1;
    uint32_t RESERVED0                      : 3;
    __IO uint32_t FLWT                      : 4;
    __IO uint32_t LVRM                      : 1;
    uint32_t RESERVED1                      : 7;
    __IO uint32_t CACHE                     : 1;
    uint32_t RESERVED2                      : 7;
    __IO uint32_t CRST                      : 1;
} stc_fmc_frmc_field_t;

/* FWMC 000CH */
typedef struct
{
    __IO uint32_t PEMODE                    : 1;
    uint32_t RESERVED0                      : 3;
    __IO uint32_t PEMOD                     : 3;
    uint32_t RESERVED1                      : 1;
    __IO uint32_t BUSHLDCTL                 : 1;
} stc_fmc_fwmc_field_t;

/* FSR 0010H */
typedef struct
{
    __IO uint32_t PEWER                     : 1;
    __IO uint32_t PEPRTERR                  : 1;
    __IO uint32_t PGSZERR                   : 1;
    __IO uint32_t PGRDMISMTCH               : 1;
    __IO uint32_t OPTEND                    : 1;
    __IO uint32_t RDCOLERR                  : 1;
    uint32_t RESERVED6                      : 2;
    __IO uint32_t RDY                       : 1;
} stc_fmc_fsr_field_t;

/* FSCLR 0014H */
typedef struct
{
    __IO uint32_t PEWERRCLR                 : 1;
    __IO uint32_t PEPRTERRCLR               : 1;
    __IO uint32_t PGSZERRCLR                : 1;
    __IO uint32_t PGRDMISMTCHCLR            : 1;
    __IO uint32_t OPTENDCLR                 : 1;
    __IO uint32_t RDCOLCLR                  : 1;
} stc_fmc_fsclr_field_t;

/* FITE 0018H */
typedef struct
{
    __IO uint32_t PEERRITE                  : 1;
    __IO uint32_t OPTENDITE                 : 1;
    __IO uint32_t RDCOLERRITE               : 1;
} stc_fmc_fite_field_t;

/* FSWP 001CH */
typedef struct
{
    __IO uint32_t FSWP                      : 1;
} stc_fmc_fswp_field_t;

/* FPMTSW 0020H */
typedef struct
{
    __IO uint32_t FPMTSW                    :20;
} stc_fmc_fpmtsw_field_t;

/* FPMTEW 0024H */
typedef struct
{
    __IO uint32_t FPMTEW                    :20;
} stc_fmc_fpmtew_field_t;

typedef struct
{
    __IO uint32_t PCLK0S                    : 3;
    uint32_t RESERVED3                      : 1;
    __IO uint32_t PCLK1S                    : 3;
    uint32_t RESERVED7                      : 1;
    __IO uint32_t PCLK2S                    : 3;
    uint32_t RESERVED11                     : 1;
    __IO uint32_t PCLK3S                    : 3;
    uint32_t RESERVED15                     : 1;
    __IO uint32_t PCLK4S                    : 3;
    uint32_t RESERVED19                     : 1;
    __IO uint32_t EXCKS                     : 3;
    uint32_t RESERVED23                     : 1;
    __IO uint32_t HCLKS                     : 3;
} stc_sysreg_cmu_scfgr_field_t;

typedef struct
{
    __IO uint8_t CKSW                       : 3;
} stc_sysreg_cmu_ckswr_field_t;

typedef struct
{
    __IO uint8_t MPLLOFF                    : 1;
} stc_sysreg_cmu_pllcr_field_t;

typedef struct
{
    __IO uint8_t HRCSTP                     : 1;
} stc_sysreg_cmu_hrccr_field_t;

typedef struct
{
    __IO uint32_t MPLLM                     : 5;
    uint32_t RESERVED5                      : 2;
    __IO uint32_t PLLSRC                    : 1;
    __IO uint32_t MPLLN                     : 9;
    uint32_t RESERVED17                     : 3;
    __IO uint32_t MPLLR                     : 4;
    __IO uint32_t MPLLQ                     : 4;
    __IO uint32_t MPLLP                     : 4;
} stc_sysreg_cmu_pllcfgr_field_t;

typedef struct
{
    __IO uint16_t FPRCB0                    : 1;
    __IO uint16_t FPRCB1                    : 1;
    __IO uint16_t FPRCB2                    : 1;
    __IO uint16_t FPRCB3                    : 1;
    uint16_t RESERVED4                      : 4;
    __IO uint16_t FPRCWE                    : 8;
} stc_sysreg_pwr_fprc_field_t;

typedef struct
{
    __IO uint32_t CNT                       :16;
    __IO uint32_t UDF                       : 1;
    __IO uint32_t REF                       : 1;
} stc_wdt_sr_field_t;

typedef struct
{
    __IO uint32_t RR                        :16;
} stc_wdt_rr_field_t;

typedef struct
{
    __IO uint32_t SWDTAUTS                  : 1;
    __IO uint32_t SWDTITS                   : 1;
    __IO uint32_t SWDTPERI                  : 2;
    __IO uint32_t SWDTCKS                   : 4;
    __IO uint32_t SWDTWDPT                  : 4;
    __IO uint32_t SWDTSLPOFF                : 1;
    uint32_t RESERVED13                     : 3;
    __IO uint32_t WDTAUTS                   : 1;
    __IO uint32_t WDTITS                    : 1;
    __IO uint32_t WDTPERI                   : 2;
    __IO uint32_t WDTCKS                    : 4;
    __IO uint32_t WDTWDPT                   : 4;
    __IO uint32_t WDTSLPOFF                 : 1;
} stc_icg_icg0_field_t;

/* register */
typedef struct
{
    union
    {
        __IO uint32_t FAPRT;
        stc_fmc_faprt_field_t FAPRT_f;
    };
    union
    {
        __IO uint32_t FSTP;
        stc_fmc_fstp_field_t FSTP_f;
    };
    union
    {
        __IO uint32_t FRMC;
        stc_fmc_frmc_field_t FRMC_f;
    };
    union
    {
        __IO uint32_t FWMC;
        stc_fmc_fwmc_field_t FWMC_f;
    };
    union
    {
        __IO uint32_t FSR;
        stc_fmc_fsr_field_t FSR_f;
    };
    union
    {
        __IO uint32_t FSCLRP;
        stc_fmc_fsclr_field_t FSCLR_f;
    };
    union
    {
        __IO uint32_t FITE;
        stc_fmc_fite_field_t FITE_f;
    };
    union
    {
        __IO uint32_t FSWP;
        stc_fmc_fswp_field_t FSWP_f;
    };
    union
    {
        __IO uint32_t FPMTSW;
        stc_fmc_fpmtsw_field_t FTMTSW_f;
    };
    union
    {
        __IO uint32_t FPMTEW;
        stc_fmc_fpmtew_field_t FPMTEW_f;
    };
}M4_EFM_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t CMU_SCFGR;
        stc_sysreg_cmu_scfgr_field_t CMU_SCFGR_f;
    };
    uint8_t RESERVED8[2];
    union
    {
        __IO uint8_t CMU_CKSWR;
        stc_sysreg_cmu_ckswr_field_t CMU_CKSWR_f;
    };
    uint8_t RESERVED9[3];
    union
    {
        __IO uint8_t CMU_PLLCR;
        stc_sysreg_cmu_pllcr_field_t CMU_PLLCR_f;
    };
    uint8_t RESERVED10[11];
    union
    {
        __IO uint8_t CMU_HRCCR;
        stc_sysreg_cmu_hrccr_field_t CMU_HRCCR_f;
    };
    uint8_t RESERVED11[213];
    union
    {
        __IO uint32_t CMU_PLLCFGR;
        stc_sysreg_cmu_pllcfgr_field_t CMU_PLLCFGR_f;
    };
    uint8_t RESERVED12[765];
    union
    {
        __IO uint16_t PWR_FPRC;
        stc_sysreg_pwr_fprc_field_t PWR_FPRC_f;
    };
}M4_SYSREG_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t SR;
        stc_wdt_sr_field_t SR_f;
    };
    union
    {
        __IO uint32_t RR;
        stc_wdt_rr_field_t RR_f;
    };
}M4_WDT_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t SR;
        stc_wdt_sr_field_t SR_f;
    };
    union
    {
        __IO uint32_t RR;
        stc_wdt_rr_field_t RR_f;
    };
}M4_SWDT_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t ICG0;
        stc_icg_icg0_field_t ICG0_f;
    };
}M4_ICG_TypeDef;

#define M4_EFM_BASE         0x40010400UL
#define M4_SYSREG_BASE      0x40054020UL
#define M4_WDT_BASE         0x40049004UL
#define M4_SWDT_BASE        0x40049404UL
#define M4_ICG_BASE         0x40010680UL

#define M4_EFM              ((M4_EFM_TypeDef*)M4_EFM_BASE)
#define M4_SYSREG           ((M4_SYSREG_TypeDef *)M4_SYSREG_BASE)
#define M4_WDT              ((M4_WDT_TypeDef *)M4_WDT_BASE)
#define M4_SWDT             ((M4_SWDT_TypeDef *)M4_SWDT_BASE)
#define M4_ICG              ((M4_ICG_TypeDef *)M4_ICG_BASE)

#endif