#include "../../0 - LIB/STD_TYPES.h"
#include "../../0 - LIB/BIT_MATH.h"
#include "SYSTICK_private.h"
#include "SYSTICK_interface.h"
#include "SYSTICK_config.h"
#include "../../2 - HAL/LED_DRIVER/LED_interface.h"
#include "../../2 - HAL/LED_DRIVER/LED_config.h"

void void_MSYSTICK_init(void)
{
    STCTRL|=(counter_status)|(interrupt_generation_status<<1)|(1<<2);
    u32 rel = (time_for_interrupt/(1/sys_clck)) - 1;
    STRELOAD = rel;
}




