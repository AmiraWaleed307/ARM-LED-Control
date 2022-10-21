#include "../0 - LIB/STD_TYPES.h"
#include "../0 - LIB/BIT_MATH.h"
#include "../1 - MCAL/NVIC_DRIVER/NVIC_interface.h"
#include "../1 - MCAL/SCB_DRIVER/SCB_interface.h"
#include "../1 - MCAL/SCB_DRIVER/SCB_config.h"
#include "../1 - MCAL/SYSCTRL_DRIVER/SYSCTRL_interface.h"
#include "../1 - MCAL/DIO_DRIVER/DIO_interface.h"
#include "../1 - MCAL/SYSTICK_DRIVER/SYSTICK_interface.h"
#include "../1 - MCAL/SYSTICK_DRIVER/SYSTICK_config.h"
#include "../1 - MCAL/PORT_DRIVER/PORT_interface.h"
#include "../1 - MCAL/PORT_DRIVER/PORT_config.h"
#include "../2 - HAL/LED_DRIVER/LED_interface.h"
#include "../2 - HAL/LED_DRIVER/LED_config.h"

int main()
{
    void_NVIC_INIT();
	SetSystemHandlerControl();
	Vid_SysCtrl_Init();
	void_PORT_init(pins);
	void_MSYSTICK_init();
	while (1)
	{}
}

void SysTick_Handler()
{
	HLED_CONTROL();
}
