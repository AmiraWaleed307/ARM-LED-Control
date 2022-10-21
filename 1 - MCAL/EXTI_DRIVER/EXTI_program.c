#include "../../0 - LIB/STD_TYPES.h"
#include "../../0 - LIB/BIT_MATH.h"
#include "../PORT_DRIVER/PORT_interface.h"
#include "../PORT_DRIVER/PORT_config.h"
#include "EXTI_private.h"
#include "EXTI_interface.h"
#include "EXTI_config.h"


/*
Steps:
1- enable GPIOIM
2- set Interrupt sense
3- set GPIOIBE
4- set GPIOIEV
*/
void void_EXTI_init(Port_ConfigType* configs)
{
    for (u8 i=0; i<config_pins; i++)
    {
        switch (configs->pins[i].port_number)
        {
            case port_A:
                /* code */
                if (configs->pins[i].portPinMode == EXTI)
                {
                    GPIO_portA_GPIOIM|=(1<<configs->pins[i].pinNumber);
                    if (interrupt_sense == edge_sensitive)
                        CLR_BIT(GPIO_portA_GPIOIS, configs->pins[i].pinNumber);
                    else
                        SET_BIT(GPIO_portA_GPIOIS, configs->pins[i].pinNumber);

                    if (interrupt_edges == disable_both_edges)
                        CLR_BIT(GPIO_portA_GPIOIBE, configs->pins[i].pinNumber);
                    else
                        SET_BIT(GPIO_portA_GPIOIBE, configs->pins[i].pinNumber);
                        
                    if (InterruptDetection == LowLevel_FallingEdge_detect)
                        CLR_BIT(GPIO_portA_GPIOIEV, configs->pins[i].pinNumber);
                    else
                        SET_BIT(GPIO_portA_GPIOIEV, configs->pins[i].pinNumber);
                }
                break;


        case port_B:
                /* code */
                if (configs->pins[i].portPinMode == EXTI)
                {
                    GPIO_portB_GPIOIM|=(1<<configs->pins[i].pinNumber);
                    if (interrupt_sense == edge_sensitive)
                        CLR_BIT(GPIO_portB_GPIOIS, configs->pins[i].pinNumber);
                    else
                        SET_BIT(GPIO_portB_GPIOIS, configs->pins[i].pinNumber);

                    if (interrupt_edges == disable_both_edges)
                        CLR_BIT(GPIO_portB_GPIOIBE, configs->pins[i].pinNumber);
                    else
                        SET_BIT(GPIO_portB_GPIOIBE, configs->pins[i].pinNumber);
                        
                    if (InterruptDetection == LowLevel_FallingEdge_detect)
                        CLR_BIT(GPIO_portB_GPIOIEV, configs->pins[i].pinNumber);
                    else
                        SET_BIT(GPIO_portB_GPIOIEV, configs->pins[i].pinNumber);
                }
                break;

        case port_C:
                /* code */
                if (configs->pins[i].portPinMode == EXTI)
                {
                    GPIO_portC_GPIOIM|=(1<<configs->pins[i].pinNumber);
                    if (interrupt_sense == edge_sensitive)
                        CLR_BIT(GPIO_portC_GPIOIS, configs->pins[i].pinNumber);
                    else
                        SET_BIT(GPIO_portC_GPIOIS, configs->pins[i].pinNumber);

                    if (interrupt_edges == disable_both_edges)
                        CLR_BIT(GPIO_portC_GPIOIBE, configs->pins[i].pinNumber);
                    else
                        SET_BIT(GPIO_portC_GPIOIBE, configs->pins[i].pinNumber);
                        
                    if (InterruptDetection == LowLevel_FallingEdge_detect)
                        CLR_BIT(GPIO_portC_GPIOIEV, configs->pins[i].pinNumber);
                    else
                        SET_BIT(GPIO_portC_GPIOIEV, configs->pins[i].pinNumber);
                }
                break;

        case port_D:
                /* code */
                if (configs->pins[i].portPinMode == EXTI)
                {
                    GPIO_portD_GPIOIM|=(1<<configs->pins[i].pinNumber);
                    if (interrupt_sense == edge_sensitive)
                        CLR_BIT(GPIO_portD_GPIOIS, configs->pins[i].pinNumber);
                    else
                        SET_BIT(GPIO_portD_GPIOIS, configs->pins[i].pinNumber);

                    if (interrupt_edges == disable_both_edges)
                        CLR_BIT(GPIO_portD_GPIOIBE, configs->pins[i].pinNumber);
                    else
                        SET_BIT(GPIO_portD_GPIOIBE, configs->pins[i].pinNumber);
                        
                    if (InterruptDetection == LowLevel_FallingEdge_detect)
                        CLR_BIT(GPIO_portD_GPIOIEV, configs->pins[i].pinNumber);
                    else
                        SET_BIT(GPIO_portD_GPIOIEV, configs->pins[i].pinNumber);
                }
                break;

        case port_E:
                /* code */
                if (configs->pins[i].portPinMode == EXTI)
                {
                    GPIO_portE_GPIOIM|=(1<<configs->pins[i].pinNumber);
                    if (interrupt_sense == edge_sensitive)
                        CLR_BIT(GPIO_portE_GPIOIS, configs->pins[i].pinNumber);
                    else
                        SET_BIT(GPIO_portE_GPIOIS, configs->pins[i].pinNumber);

                    if (interrupt_edges == disable_both_edges)
                        CLR_BIT(GPIO_portE_GPIOIBE, configs->pins[i].pinNumber);
                    else
                        SET_BIT(GPIO_portE_GPIOIBE, configs->pins[i].pinNumber);
                        
                    if (InterruptDetection == LowLevel_FallingEdge_detect)
                        CLR_BIT(GPIO_portE_GPIOIEV, configs->pins[i].pinNumber);
                    else
                        SET_BIT(GPIO_portE_GPIOIEV, configs->pins[i].pinNumber);
                }
                break;
        case port_F:
                /* code */
                if (configs->pins[i].portPinMode == EXTI)
                {
                    GPIO_portF_GPIOIM|=(1<<configs->pins[i].pinNumber);
                    if (interrupt_sense == edge_sensitive)
                        CLR_BIT(GPIO_portF_GPIOIS, configs->pins[i].pinNumber);
                    else
                        SET_BIT(GPIO_portF_GPIOIS, configs->pins[i].pinNumber);

                    if (interrupt_edges == disable_both_edges)
                        CLR_BIT(GPIO_portF_GPIOIBE, configs->pins[i].pinNumber);
                    else
                        SET_BIT(GPIO_portF_GPIOIBE, configs->pins[i].pinNumber);
                        
                    if (InterruptDetection == LowLevel_FallingEdge_detect)
                        CLR_BIT(GPIO_portF_GPIOIEV, configs->pins[i].pinNumber);
                    else
                        SET_BIT(GPIO_portF_GPIOIEV, configs->pins[i].pinNumber);
                }
                break;
        }
    }    
}
