#include "../0 - LIB/BIT_MATH.h"
#include "../0 - LIB/STD_TYPES.h"

#include "SCB_interface.h"
#include "SCB_private.h"

#include "SCB_config.h"

u8 isNMIexceptionPending(void)
{
    GET_BIT(SCB_SYSCTRL, 31);
}

void SetNMIexceptionToPending(void)
{
    SET_BIT(SCB_SYSCTRL, 31);
}

u8 isPendSVPending(void)
{   
    u8 x = GET_BIT(SCB_SYSCTRL, 28);
	  return x;
}

void SetPendSVToPending(void)
{
    SET_BIT(SCB_SYSCTRL, 28);
}

void ClearPendSVPending(void)
{
    SET_BIT(SCB_SYSCTRL, 27);
}

u8 isSysTickPending(void)
{
    GET_BIT(SCB_SYSCTRL, 26);
}
void SetSysTickToPending(void)
{
    SET_BIT(SCB_SYSCTRL, 26);
}
void ClearSysTickPending(void)
{
    SET_BIT(SCB_SYSCTRL, 25);
}

void ChangeVectorTableOffset(u32 offset)
{
    SCB_VTABLE=(offset<<10);
}


void SetInterruptPriorityLevels(u8 pri_level)
{
    SCB_APINT|=(APINTKEY<<16)|(pri_level<<8);
}

void SetSystemHandlerPrority(void)
{
    SCB_SYSPRI1|=(MEM_priority<<5)|(BUS_priority<<13)|(USAGE_priority<<21);
    SCB_SYSPRI2|=(SVC_priority<<29);
    SCB_SYSPRI3|=(DEBUG_priority<<5)|(PENDSV_priority<<21)|(TICK_priority<<29);
}

void SetSystemHandlerControl(void)
{
    if (Set_MEMA == enable)
        SET_BIT(SCB_SYSHNDCTRL, 0);
    else
        CLR_BIT(SCB_SYSHNDCTRL, 0);

    if (Set_BUSA == enable)
        SET_BIT(SCB_SYSHNDCTRL, 1);
    else
        CLR_BIT(SCB_SYSHNDCTRL, 1);
    
    if (Set_USGA == enable)
        SET_BIT(SCB_SYSHNDCTRL, 3);
    else
        CLR_BIT(SCB_SYSHNDCTRL, 3);

    if (Set_SVCA == enable)
        SET_BIT(SCB_SYSHNDCTRL, 7);
    else
        CLR_BIT(SCB_SYSHNDCTRL, 7);

    if (Set_MON == enable)
        SET_BIT(SCB_SYSHNDCTRL, 8);
    else
        CLR_BIT(SCB_SYSHNDCTRL, 8);

     if (Set_PNDSV == enable)
        SET_BIT(SCB_SYSHNDCTRL, 10);
    else
        CLR_BIT(SCB_SYSHNDCTRL, 10);

    if (Set_TICK == enable)
        SET_BIT(SCB_SYSHNDCTRL, 11);
    else
        CLR_BIT(SCB_SYSHNDCTRL, 11); 

    if (Set_MEM == enable)
        SET_BIT(SCB_SYSHNDCTRL, 16);
    else
        CLR_BIT(SCB_SYSHNDCTRL, 16); 
}
