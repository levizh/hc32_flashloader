#ifndef __FL_DRV_H
#define __FL_DRV_H

typedef struct
{
    uint32_t    (*Init)(void);
    void        (*DeInit)(void);
    uint32_t    (*Write)(void *,  uint32_t , uint32_t , char const *);
    uint32_t    (*EraseSector)(uint32_t);
    void        (*ClockUp)(void);
    void        (*ClockDown)(void);
    void        (*WdtProcess)(void);
}FL_Drv_Typedef;

#endif//__FL_DRV_H