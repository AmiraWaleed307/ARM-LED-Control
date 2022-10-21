#include "../../0 - LIB/STD_TYPES.h"
#include "../../0 - LIB/BIT_MATH.h"
#include "../../1 - MCAL/SYSTICK_DRIVER/SYSTICK_interface.h"
#include "../../1 - MCAL/SYSTICK_DRIVER/SYSTICK_config.h"
#include "../../1 - MCAL/DIO_DRIVER/DIO_private.h"
#include "../../1 - MCAL/DIO_DRIVER/DIO_interface.h"
#include "LED_interface.h"
#include "LED_config.h"

static f32 count_time = 0;
static f32 match_on  = ON_TIME/time_for_interrupt;
static f32 match_off = OFF_TIME/time_for_interrupt;
void HLED_CONTROL (void)
{   
    if (count_time < match_on)
    {
        Dio_WriteChannel(LED_Port, LED_Pin, 1);
    }
    else if (count_time  >= match_on && count_time < (match_off+match_on))
    {
        Dio_WriteChannel(LED_Port, LED_Pin, 0);
    }
    else if (count_time  == (match_off+match_on))
    {
        count_time = 0;
        Dio_WriteChannel(LED_Port, LED_Pin, 1);
    }
    count_time++;
}

