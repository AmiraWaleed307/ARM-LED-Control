#include "TIMER0_private.h"
#include "TIMER0_interface.h"
#include "TIMER0_config.h"


void void_TIMER0_init(void)
{
    void_StopTimer0();
    TIMER0_GPTMCFG_32&=(0xFFF8)|TIMER0_used;
    TIMER0_GPTMTAMR_32&=0x00|(TIMER0_mode)|(TIMER0_countDIR<<4);
}
void void_StartTimer0(void)
{
    TIMER0_GPTMCTL_32&=(0x00)|(TIMER0_MODULE);
}
void void_StopTimer0(void)
{
    TIMER0_GPTMCTL_32&=(0x00);
}
void void_TIMER0Periodic(void(*CallBack)(void))
{
    Timer0_GlobalCallback=CallBack;
    TIMER0_GPTMTAILR_32|=(0xFFFFFFFF)|(0x01);
}


