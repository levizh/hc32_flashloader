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
#if defined (__HC32F460_FL__)
    #include "hc32f460_drv.h"
#elif defined (__HC32F4A0_FL__)
    #include "hc32f4a0_drv.h"
#elif defined (__HC32M423_FL__)
    #include "hc32m423_drv.h"
#endif

#include "flashloader_drv.h"
//
//#include "flash_loader.h"       // The flash loader framework API declarations.
//#include "flash_loader_extra.h"

// Flash-specific definitions
// These encompass all the commands and status checks the program makes.
#define MULT                0x0001

/*
** definition
*/
#ifndef TRUE
  /** Value is true (boolean_t type) */
  #define TRUE        ((unsigned char) 1)
#endif

#ifndef FALSE
  /** Value is false (boolean_t type) */
  #define FALSE       ((unsigned char) 0)
#endif

#if USE_ARGC_ARGV
#endif

//typedef uint32_t flashunit;

/** default settings **/

/** external functions **/

/** external data **/

/** internal functions **/

#if USE_ARGC_ARGV
#endif

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

/** static functions **/
static FL_Drv_Typedef *fl_driver;

#pragma location=".flash_init"
/*************************************************************************
 * Function Name: FlashInit
 * Parameters: Flash Base Address
 *
 * Return:  0 - Init Successful
 *          1 - Init Fail
 * Description: Init flash and build layout.
 *
 *************************************************************************/
#if USE_ARGC_ARGV
#else
uint32_t FlashInit(void *base_of_flash, uint32_t image_size,
                   uint32_t link_address, uint32_t flags)
#endif /* USE_ARGC_ARGV */
{

    fl_drv.Init         = &_FlashPrepare;
    fl_drv.DeInit       = &_FlashCleanup;
    fl_drv.Write        = &_FlashWrite;
    fl_drv.EraseSector  = &_FlashEraseSector;

    fl_driver = &fl_drv;
//    fl_driver = &fl_drv;
    flashBase = (uint32_t)base_of_flash;
    SET_BUFSIZE_OVERRIDE(0x1000);       // New buffer size
    /* Init flash */
    fl_driver->Init();
#if USE_ARGC_ARGV
#endif
    return (RESULT_OK);
}

/*************************************************************************
 * Function Name: FlashWrite
 * Parameters: block base address, offet in block, data size, ram buffer
 *             pointer
 * Return:  0 - Write Successful
 *          1 - Write Fail
 * Description. Writes data in to NOR
 *************************************************************************/
uint32_t FlashWrite(void *block_start,
                    uint32_t offset_into_block,
                    uint32_t count,
                    char const *buffer)
{
    return fl_driver->Write(block_start, offset_into_block, count, buffer);
}

/*************************************************************************
 * Function Name: FlashErase
 * Parameters:  Block Address, Block Size
 *
 * Return: 0
 *
 * Description: Erase block
 *************************************************************************/
uint32_t FlashErase(void *block_start, uint32_t block_size)
{
    return fl_driver->EraseSector((uint32_t)block_start);
}

OPTIONAL_SIGNOFF
uint32_t FlashSignoff(void)
{
uint32_t ret = RESULT_OK;
#if USE_ARGC_ARGV
#endif
    fl_driver->DeInit();
    return ret;
}

int main(void)
{
    char const buf[0x10] = {0};
    __attribute__((unused)) uint32_t ret;
    uint32_t addr;
    addr=0x200;
    while(1)
    {
        FlashErase((void*)addr,1);
        ret = FlashWrite((void*)addr,0,sizeof(buf),&buf[0]);
    }
//    return 0;
}

#if USE_ARGC_ARGV
#endif // USE_ARGC_ARGV
