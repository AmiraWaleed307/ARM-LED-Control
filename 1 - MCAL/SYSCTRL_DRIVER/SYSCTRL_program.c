#include "../../0 - LIB/STD_TYPES.h"
#include "../../0 - LIB/BIT_MATH.h"
#include "SYSCTRL_private.h"
#include "SYSCTRL_interface.h"
#include "SYSCTRL_config.h"

void Vid_SysCtrl_Init(void)
{
    
    SYSCTRL_RCC |= RCC_ResetValue | (pll_gate<<13) | (pwm_clock_divisor<<17)|(pwm_clock_divider<<20)|(clock_divider<<22)|(SYSCTL_SYSDIV<<23)|(auto_clock_gating<<27);
    if(gpio_bus == gpio_bus_ahb)
        SYSCTRL_GPIOHBCTL|=(0x3F);
    else
        SYSCTRL_GPIOHBCTL|=GPIOHBCTL_ResetValue|(0x00);
    SYSCTRL_RCGCWD|=(watchdog_0)|(watchdog_1<<1);
    SYSCTRL_RCGCTIMER|=(timer32bit0)|(timer32bit1<<1)|(timer32bit2<<2)|(timer32bit3<<3)|(timer32bit4<<4)|(timer32bit5<<5);
    SYSCTRL_RCGCGPIO|=(gpioA)|(gpioB<<1)|(gpioC<<2)|(gpioD<<3)|(gpioE<<4)|(gpioF<<5);
    SYSCTRL_RCGCPWM|=(pwm0)|(pwm1<<1);
    SYSCTRL_RCGCWTIMER|=(timer64bit0)|(timer64bit0<<1)|(timer64bit0<<2)|(timer64bit0<<3)|(timer64bit0<<4)|(timer64bit0<<5);
}
