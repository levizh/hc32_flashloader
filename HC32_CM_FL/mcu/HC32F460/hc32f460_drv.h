/*************************************************************************
 *
 *   Used with ICCARM and AARM.
 *
 *    File name   : hc32f460_drv.h
 *    Description : FlashLoader HC32F460 driver
 *
 *    History :
 *    1. Date        : May, 2020
 *       Author      : Levi Zhang
 *       Description : Initial revision
 *
 *
 *
 **************************************************************************/
#ifndef __HC32F460_DRV_H__
#define __HC32F460_DRV_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "hc32f460_reg.h"
#include "flashloader_drv.h"

#include "flash_loader.h"       // The flash loader framework API declarations.
#include "flash_loader_extra.h"

typedef uint32_t flashunit;

uint32_t _FlashPrepare(void);
uint32_t _FlashEraseSector(uint32_t SectorAddr);
uint32_t _FlashWriteUnit(uint32_t LoadAddr, flashunit Data);
uint32_t _FlashWrite(void *block_start,
             uint32_t offset_into_block,
             uint32_t count,
             char const *buffer);
void _FlashCleanup(void);
void WDT_Process(void);
void swdt_judge(void);
void wdt_judge(void);
void SWDT_Feed(void);
void WDT_Feed(void);
void CLK_PLLInit(void);
void CLK_HRCInit(void);

extern FL_Drv_Typedef fl_drv;

#endif//__HC32F460_DRV_H__
