#include "../../0 - LIB/STD_TYPES.h"
#include "../../0 - LIB/BIT_MATH.h"
#include "PORT_private.h"
#include "PORT_interface.h"

/*
steps:
1- loop over the array of configured pins
2- check the functionality of the pin:
    - if dio, set AFSEL to 0, set GPIODEN to 1, set GPIOAMSEL to 0
    - if dio but with an alternate function as default, set GPIOLOCK, set GPIO commit, set AFSEL to 0, set GPIODEN to 1, set GPIOAMSEL to 0
    - if alternate, set AFSEL to 1, set GPIODEN to 0, set GPIOAMSEL to 0, set GPIOPCTL
   set direction, set mA drive, set open-drain, set pull-up-down
*/
u8 pins_alt[11] ={

    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};

void void_PORT_init(port_interface* configs)
{
    for (u8 i=0; i<config_pins; i++)
    {
        switch (configs[i].port_number)
        {
        case port_A:
            /* code */
            if (configs[i].portPinMode == DIO)
            {
										GPIO_portA_GPIOLOCK= 0;       
										SET_BIT(GPIO_portA_GPIOCR, configs[i].pinNumber);
                    GPIO_portA_GPIOAFSEL&=(0<<configs[i].pinNumber);       //AFSEL
                    GPIO_portA_GPIODEN|=(1<<configs[i].pinNumber);
                    GPIO_portA_GPIOAMSEL&=(0<<configs[i].pinNumber);

            }
            else if (configs[i].portPinMode == AlternateFunction)
            {
                GPIO_portA_GPIOAFSEL|=(1<<configs[i].pinNumber);       //AFSEL
                GPIO_portA_GPIODEN&=(0<<configs[i].pinNumber);
                GPIO_portA_GPIOAMSEL&=(0<<configs[i].pinNumber); 
                GPIO_portA_GPIOPCTL&=pins_alt[((configs[i].port_number)*(configs[i].pinNumber))]<<((configs[i].pinNumber)*4);               
            }
            if (configs[i].portPinDirection == GPIO_output)
                GPIO_portA_GPIODIR|=(1<<configs[i].pinNumber);
            else
                GPIO_portA_GPIODIR&=(0<<configs[i].pinNumber);
						if (configs[i].portPinLevelValue == GPIO_high)
								SET_BIT(GPIODATA_A, configs[i].pinNumber);
            else
								CLR_BIT(GPIODATA_A, configs[i].pinNumber);
            if (configs[i].portPinOutputCurrent == disable_2mA_4mA_8mA)
                GPIO_portA_GPIODR2R|=(0xFF)&(0<<configs[i].pinNumber);
            else if (configs[i].portPinOutputCurrent == enable_2mA)
            {
                GPIO_portA_GPIODR2R|=(0xFF)|(1<<configs[i].pinNumber);
                GPIO_portA_GPIODR4R&=(0<<configs[i].pinNumber);
                GPIO_portA_GPIODR8R&=(0<<configs[i].pinNumber);
            }
            else if (configs[i].portPinOutputCurrent == enable_4mA)
            {
                GPIO_portA_GPIODR2R|=(0xFF)&(0<<configs[i].pinNumber);
                GPIO_portA_GPIODR4R|=(1<<configs[i].pinNumber);
                GPIO_portA_GPIODR8R&=(0<<configs[i].pinNumber);
            }
            else
            {
                GPIO_portA_GPIODR2R|=(0xFF)&(0<<configs[i].pinNumber);
                GPIO_portA_GPIODR4R&=(0<<configs[i].pinNumber);
                GPIO_portA_GPIODR8R|=(1<<configs[i].pinNumber);
            }

            if (configs[i].portPinPullUp_Down==disable_pullup_pulldown)
            {
                GPIO_portA_GPIOPUR&=(0<<configs[i].pinNumber);
                GPIO_portA_GPIOPDR&=(0<<configs[i].pinNumber);
            }
            else if (configs[i].portPinPullUp_Down==pulldown)
            {
                GPIO_portA_GPIOPUR&=(0<<configs[i].pinNumber);
                GPIO_portA_GPIOPDR|=(1<<configs[i].pinNumber);
            }
            else
            {
                GPIO_portA_GPIOPUR|=(1<<configs[i].pinNumber);
                GPIO_portA_GPIOPDR&=(0<<configs[i].pinNumber);
            }

            if (configs[i].portPinInternalAttach==disable_open_drain_circuit)
            {
                GPIO_portA_GPIOODR&=(0<<configs[i].pinNumber);
            }
            else
            {
                GPIO_portA_GPIOODR|=(1<<configs[i].pinNumber);
            }
            break;


        case port_B:
            /* code */
            if (configs[i].portPinMode == DIO)
            {
  
                    GPIO_portB_GPIOLOCK= 0;       
										SET_BIT(GPIO_portB_GPIOCR, configs[i].pinNumber);
                    GPIO_portB_GPIOAFSEL&=(0<<configs[i].pinNumber);       //AFSEL
                    GPIO_portB_GPIODEN|=(1<<configs[i].pinNumber);
                    GPIO_portB_GPIOAMSEL&=(0<<configs[i].pinNumber);

            }
            else if (configs[i].portPinMode == AlternateFunction)
            {
                GPIO_portB_GPIOAFSEL|=(1<<configs[i].pinNumber);       //AFSEL
                GPIO_portB_GPIODEN&=(0<<configs[i].pinNumber);
                GPIO_portB_GPIOAMSEL&=(0<<configs[i].pinNumber); 
                GPIO_portB_GPIOPCTL&=pins_alt[((configs[i].port_number)*(configs[i].pinNumber))]<<((configs[i].pinNumber)*4);               

            }
            if (configs[i].portPinDirection == GPIO_output)
                GPIO_portB_GPIODIR|=(1<<configs[i].pinNumber);
            else
                GPIO_portB_GPIODIR&=(0<<configs[i].pinNumber);
						if (configs[i].portPinLevelValue == GPIO_high)
								SET_BIT(GPIODATA_B, configs[i].pinNumber);
            else
								CLR_BIT(GPIODATA_B, configs[i].pinNumber);
						if (configs[i].portPinOutputCurrent == disable_2mA_4mA_8mA)
                GPIO_portB_GPIODR2R|=(0xFF)&(0<<configs[i].pinNumber);
            else if (configs[i].portPinOutputCurrent == enable_2mA)
            {
                GPIO_portB_GPIODR2R|=(0xFF)|(1<<configs[i].pinNumber);
                GPIO_portB_GPIODR4R&=(0<<configs[i].pinNumber);
                GPIO_portB_GPIODR8R&=(0<<configs[i].pinNumber);
            }
            else if (configs[i].portPinOutputCurrent == enable_4mA)
            {
                GPIO_portB_GPIODR2R|=(0xFF)&(0<<configs[i].pinNumber);
                GPIO_portB_GPIODR4R|=(1<<configs[i].pinNumber);
                GPIO_portB_GPIODR8R&=(0<<configs[i].pinNumber);
            }
            else
            {
                GPIO_portB_GPIODR2R|=(0xFF)&(0<<configs[i].pinNumber);
                GPIO_portB_GPIODR4R&=(0<<configs[i].pinNumber);
                GPIO_portB_GPIODR8R|=(1<<configs[i].pinNumber);
            }

            if (configs[i].portPinPullUp_Down==disable_pullup_pulldown)
            {
                GPIO_portB_GPIOPUR&=(0<<configs[i].pinNumber);
                GPIO_portB_GPIOPDR&=(0<<configs[i].pinNumber);
            }
            else if (configs[i].portPinPullUp_Down==pulldown)
            {
                GPIO_portB_GPIOPUR&=(0<<configs[i].pinNumber);
                GPIO_portB_GPIOPDR|=(1<<configs[i].pinNumber);
            }
            else 
            {
                GPIO_portB_GPIOPUR|=(1<<configs[i].pinNumber);
                GPIO_portB_GPIOPDR&=(0<<configs[i].pinNumber);
            }

            if (configs[i].portPinInternalAttach==disable_open_drain_circuit)
            {
                GPIO_portB_GPIOODR&=(0<<configs[i].pinNumber);
            }
            else
            {
                GPIO_portB_GPIOODR|=(1<<configs[i].pinNumber);
            }
            break;



        case port_C:
            /* code */
            if (configs[i].portPinMode == DIO)
            {
										GPIO_portC_GPIOLOCK= 0;       
										SET_BIT(GPIO_portC_GPIOCR, configs[i].pinNumber);
                    GPIO_portC_GPIOAFSEL&=(0<<configs[i].pinNumber);       //AFSEL
                    GPIO_portC_GPIODEN|=(1<<configs[i].pinNumber);
                    GPIO_portC_GPIOAMSEL&=(0<<configs[i].pinNumber);
            }
            else if (configs[i].portPinMode == AlternateFunction)
            {
                GPIO_portC_GPIOAFSEL|=(1<<configs[i].pinNumber);       //AFSEL
                GPIO_portC_GPIODEN&=(0<<configs[i].pinNumber);
                GPIO_portC_GPIOAMSEL&=(0<<configs[i].pinNumber);  
                GPIO_portC_GPIOPCTL&=pins_alt[((configs[i].port_number)*(configs[i].pinNumber))]<<((configs[i].pinNumber)*4);               

            }
            if (configs[i].portPinDirection == GPIO_output)
                GPIO_portC_GPIODIR|=(1<<configs[i].pinNumber);
            else
                GPIO_portC_GPIODIR&=(0<<configs[i].pinNumber);
						if (configs[i].portPinLevelValue == GPIO_high)
								SET_BIT(GPIODATA_C, configs[i].pinNumber);
            else
								CLR_BIT(GPIODATA_C, configs[i].pinNumber);
						
						if (configs[i].portPinOutputCurrent == disable_2mA_4mA_8mA)
                GPIO_portC_GPIODR2R|=(0xFF)&(0<<configs[i].pinNumber);
            else if (configs[i].portPinOutputCurrent == enable_2mA)
            {
                GPIO_portC_GPIODR2R|=(0xFF)|(1<<configs[i].pinNumber);
                GPIO_portC_GPIODR4R&=(0<<configs[i].pinNumber);
                GPIO_portC_GPIODR8R&=(0<<configs[i].pinNumber);
            }
            else if (configs[i].portPinOutputCurrent == enable_4mA)
            {
                GPIO_portC_GPIODR2R|=(0xFF)&(0<<configs[i].pinNumber);
                GPIO_portC_GPIODR4R|=(1<<configs[i].pinNumber);
                GPIO_portC_GPIODR8R&=(0<<configs[i].pinNumber);
            }
            else
            {
                GPIO_portC_GPIODR2R|=(0xFF)&(0<<configs[i].pinNumber);
                GPIO_portC_GPIODR4R&=(0<<configs[i].pinNumber);
                GPIO_portC_GPIODR8R|=(1<<configs[i].pinNumber);
            }

            if (configs[i].portPinPullUp_Down==disable_pullup_pulldown)
            {
                GPIO_portC_GPIOPUR&=(0<<configs[i].pinNumber);
                GPIO_portC_GPIOPDR&=(0<<configs[i].pinNumber);
            }
            else if (configs[i].portPinPullUp_Down==pulldown)
            {
                GPIO_portC_GPIOPUR&=(0<<configs[i].pinNumber);
                GPIO_portC_GPIOPDR|=(1<<configs[i].pinNumber);
            }
            else 
            {
                GPIO_portC_GPIOPUR|=(1<<configs[i].pinNumber);
                GPIO_portC_GPIOPDR&=(0<<configs[i].pinNumber);
            }

            if (configs[i].portPinInternalAttach==disable_open_drain_circuit)
            {
                GPIO_portC_GPIOODR&=(0<<configs[i].pinNumber);
            }
            else
            {
                GPIO_portC_GPIOODR|=(1<<configs[i].pinNumber);
            }
            break;



        case port_D:
            /* code */
            if (configs[i].portPinMode == DIO)
            {
                    GPIO_portD_GPIOLOCK= 0;       
										SET_BIT(GPIO_portD_GPIOCR, configs[i].pinNumber);
                    GPIO_portD_GPIOAFSEL&=(0<<configs[i].pinNumber);       //AFSEL
                    GPIO_portD_GPIODEN|=(1<<configs[i].pinNumber);
                    GPIO_portD_GPIOAMSEL&=(0<<configs[i].pinNumber);
            }
            else if (configs[i].portPinMode == AlternateFunction)
            {
                GPIO_portD_GPIOAFSEL|=(1<<configs[i].pinNumber);       //AFSEL
                GPIO_portD_GPIODEN&=(0<<configs[i].pinNumber);
                GPIO_portD_GPIOAMSEL&=(0<<configs[i].pinNumber);                
                GPIO_portD_GPIOPCTL&=pins_alt[((configs[i].port_number)*(configs[i].pinNumber))]<<((configs[i].pinNumber)*4);               

            }
            if (configs[i].portPinDirection == GPIO_output)
                GPIO_portD_GPIODIR|=(1<<configs[i].pinNumber);
            else
                GPIO_portD_GPIODIR&=(0<<configs[i].pinNumber);
						if (configs[i].portPinLevelValue == GPIO_high)
								SET_BIT(GPIODATA_D, configs[i].pinNumber);
            else
								CLR_BIT(GPIODATA_D, configs[i].pinNumber);
						
						if (configs[i].portPinOutputCurrent == disable_2mA_4mA_8mA)
                GPIO_portD_GPIODR2R|=(0xFF)&(0<<configs[i].pinNumber);
            else if (configs[i].portPinOutputCurrent == enable_2mA)
            {
                GPIO_portD_GPIODR2R|=(0xFF)|(1<<configs[i].pinNumber);
                GPIO_portD_GPIODR4R&=(0<<configs[i].pinNumber);
                GPIO_portD_GPIODR8R&=(0<<configs[i].pinNumber);
            }
            else if (configs[i].portPinOutputCurrent == enable_4mA)
            {
                GPIO_portD_GPIODR2R|=(0xFF)&(0<<configs[i].pinNumber);
                GPIO_portD_GPIODR4R|=(1<<configs[i].pinNumber);
                GPIO_portD_GPIODR8R&=(0<<configs[i].pinNumber);
            }
            else
            {
                GPIO_portD_GPIODR2R|=(0xFF)&(0<<configs[i].pinNumber);
                GPIO_portD_GPIODR4R&=(0<<configs[i].pinNumber);
                GPIO_portD_GPIODR8R|=(1<<configs[i].pinNumber);
            }

            if (configs[i].portPinPullUp_Down==disable_pullup_pulldown)
            {
                GPIO_portD_GPIOPUR&=(0<<configs[i].pinNumber);
                GPIO_portD_GPIOPDR&=(0<<configs[i].pinNumber);
            }
            else if (configs[i].portPinPullUp_Down==pulldown)
            {
                GPIO_portD_GPIOPUR&=(0<<configs[i].pinNumber);
                GPIO_portD_GPIOPDR|=(1<<configs[i].pinNumber);
            }
            else
            {
                GPIO_portD_GPIOPUR|=(1<<configs[i].pinNumber);
                GPIO_portD_GPIOPDR&=(0<<configs[i].pinNumber);
            }

            if (configs[i].portPinInternalAttach==disable_open_drain_circuit)
            {
                GPIO_portD_GPIOODR&=(0<<configs[i].pinNumber);
            }
            else
            {
                GPIO_portD_GPIOODR|=(1<<configs[i].pinNumber);
            }
            break;




        case port_E:
            /* code */
            if (configs[i].portPinMode == DIO)
            {
     
                GPIO_portE_GPIOLOCK= 0;       
								SET_BIT(GPIO_portE_GPIOCR, configs[i].pinNumber);
                GPIO_portE_GPIOAFSEL&=(0<<configs[i].pinNumber);       //AFSEL
                GPIO_portE_GPIODEN|=(1<<configs[i].pinNumber);
                GPIO_portE_GPIOAMSEL&=(0<<configs[i].pinNumber);

            }
            else if (configs[i].portPinMode == AlternateFunction)
            {
                GPIO_portE_GPIOAFSEL|=(1<<configs[i].pinNumber);       //AFSEL
                GPIO_portE_GPIODEN&=(0<<configs[i].pinNumber);
                GPIO_portE_GPIOAMSEL&=(0<<configs[i].pinNumber);                
                GPIO_portE_GPIOPCTL&=pins_alt[((configs[i].port_number)*(configs[i].pinNumber))]<<((configs[i].pinNumber)*4);               

            }
            if (configs[i].portPinDirection == GPIO_output)
                GPIO_portE_GPIODIR|=(1<<configs[i].pinNumber);
            else
                GPIO_portE_GPIODIR&=(0<<configs[i].pinNumber);
						if (configs[i].portPinLevelValue == GPIO_high)
								SET_BIT(GPIODATA_E, configs[i].pinNumber);
            else
								CLR_BIT(GPIODATA_E, configs[i].pinNumber);
						if (configs[i].portPinOutputCurrent == disable_2mA_4mA_8mA)
                GPIO_portE_GPIODR2R|=(0xFF)&(0<<configs[i].pinNumber);
            else if (configs[i].portPinOutputCurrent == enable_2mA)
            {
                GPIO_portE_GPIODR2R|=(0xFF)|(1<<configs[i].pinNumber);
                GPIO_portE_GPIODR4R&=(0<<configs[i].pinNumber);
                GPIO_portE_GPIODR8R&=(0<<configs[i].pinNumber);
            }
            else if (configs[i].portPinOutputCurrent == enable_4mA)
            {
                GPIO_portE_GPIODR2R|=(0xFF)&(0<<configs[i].pinNumber);
                GPIO_portE_GPIODR4R|=(1<<configs[i].pinNumber);
                GPIO_portE_GPIODR8R&=(0<<configs[i].pinNumber);
            }
            else
            {
                GPIO_portE_GPIODR2R|=(0xFF)&(0<<configs[i].pinNumber);
                GPIO_portE_GPIODR4R&=(0<<configs[i].pinNumber);
                GPIO_portE_GPIODR8R|=(1<<configs[i].pinNumber);
            }

            if (configs[i].portPinPullUp_Down==disable_pullup_pulldown)
            {
                GPIO_portE_GPIOPUR&=(0<<configs[i].pinNumber);
                GPIO_portE_GPIOPDR&=(0<<configs[i].pinNumber);
            }
            else if (configs[i].portPinPullUp_Down==pulldown)
            {
                GPIO_portE_GPIOPUR&=(0<<configs[i].pinNumber);
                GPIO_portE_GPIOPDR|=(1<<configs[i].pinNumber);
            }
            else
            {
                GPIO_portE_GPIOPUR|=(1<<configs[i].pinNumber);
                GPIO_portE_GPIOPDR&=(0<<configs[i].pinNumber);
            }

            if (configs[i].portPinInternalAttach==disable_open_drain_circuit)
            {
                GPIO_portE_GPIOODR&=(0<<configs[i].pinNumber);
            }
            else
            {
                GPIO_portE_GPIOODR|=(1<<configs[i].pinNumber);
            }
            break;






        case port_F:
            /* code */
            if (configs[i].portPinMode == DIO)
            {
  
                    GPIO_portF_GPIOLOCK= 0;       
										SET_BIT(GPIO_portF_GPIOCR, configs[i].pinNumber);
                    GPIO_portF_GPIOAFSEL&=(0<<configs[i].pinNumber);       //AFSEL
                    GPIO_portF_GPIODEN|=(1<<configs[i].pinNumber);
                    GPIO_portF_GPIOAMSEL&=(0<<configs[i].pinNumber);
            }
            else if (configs[i].portPinMode == AlternateFunction)
            {
                GPIO_portF_GPIOAFSEL|=(1<<configs[i].pinNumber);       //AFSEL
                GPIO_portF_GPIODEN&=(0<<configs[i].pinNumber);
                GPIO_portF_GPIOAMSEL&=(0<<configs[i].pinNumber);                
                GPIO_portF_GPIOPCTL&=pins_alt[((configs[i].port_number)*(configs[i].pinNumber))]<<((configs[i].pinNumber)*4);               

            }
            if (configs[i].portPinDirection == GPIO_output)
                GPIO_portF_GPIODIR|=(1<<configs[i].pinNumber);
            else
                GPIO_portF_GPIODIR&=(0<<configs[i].pinNumber);
						if (configs[i].portPinLevelValue == GPIO_high)
								SET_BIT(GPIODATA_F, configs[i].pinNumber);
            else
								CLR_BIT(GPIODATA_F, configs[i].pinNumber);
						
						if (configs[i].portPinOutputCurrent == disable_2mA_4mA_8mA)
                GPIO_portF_GPIODR2R|=(0xFF)&(0<<configs[i].pinNumber);
            else if (configs[i].portPinOutputCurrent == enable_2mA)
            {
                GPIO_portF_GPIODR2R|=(0xFF)|(1<<configs[i].pinNumber);
                GPIO_portF_GPIODR4R&=(0<<configs[i].pinNumber);
                GPIO_portF_GPIODR8R&=(0<<configs[i].pinNumber);
            }
            else if (configs[i].portPinOutputCurrent == enable_4mA)
            {
                GPIO_portF_GPIODR2R|=(0xFF)&(0<<configs[i].pinNumber);
                GPIO_portF_GPIODR4R|=(1<<configs[i].pinNumber);
                GPIO_portF_GPIODR8R&=(0<<configs[i].pinNumber);
            }
            else
            {
                GPIO_portF_GPIODR2R|=(0xFF)&(0<<configs[i].pinNumber);
                GPIO_portF_GPIODR4R&=(0<<configs[i].pinNumber);
                GPIO_portF_GPIODR8R|=(1<<configs[i].pinNumber);
            }

            if (configs[i].portPinPullUp_Down==disable_pullup_pulldown)
            {
                GPIO_portF_GPIOPUR&=(0<<configs[i].pinNumber);
                GPIO_portF_GPIOPDR&=(0<<configs[i].pinNumber);
            }
            else if (configs[i].portPinPullUp_Down==pulldown)
            {
                GPIO_portF_GPIOPUR&=(0<<configs[i].pinNumber);
                GPIO_portF_GPIOPDR|=(1<<configs[i].pinNumber);
            }
            else 
            {
                GPIO_portF_GPIOPUR|=(1<<configs[i].pinNumber);
                GPIO_portF_GPIOPDR&=(0<<configs[i].pinNumber);
            }

            if (configs[i].portPinInternalAttach==disable_open_drain_circuit)
            {
                GPIO_portF_GPIOODR&=(0<<configs[i].pinNumber);
            }
            else
            {
                GPIO_portF_GPIOODR|=(1<<configs[i].pinNumber);
            }
            break;
        }
    }
}
