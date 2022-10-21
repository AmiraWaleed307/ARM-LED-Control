#include "../0 - LIB/STD_TYPES.h"
#include "NVIC_private.h"
#include "NVIC_interface.h"
#include "NVIC_config.h"

void void_NVIC_INIT(void)
{
Enable_Registers->EN0 |= (GPIO_Port_A_State<<GPIO_Port_A%32);
Enable_Registers->EN0 |= (GPIO_Port_B_State<<GPIO_Port_B%32);
Enable_Registers->EN0 |= (GPIO_Port_C_State<<GPIO_Port_C%32);
Enable_Registers->EN0 |= (GPIO_Port_D_State<<GPIO_Port_D%32);
Enable_Registers->EN0 |= (GPIO_Port_E_State<<GPIO_Port_E%32);
Enable_Registers->EN0 |= (UART0_State<<UART0%32);
Enable_Registers->EN0 |= (UART1_State<<UART1%32);
Enable_Registers->EN0 |= (SSI0_State<<SSI0%32);
Enable_Registers->EN0 |= (I2C0_State<<I2C0%32);
Enable_Registers->EN0 |= (PWM0_Fault_State<<PWM0_Fault%32);
Enable_Registers->EN0 |= (PWM0_Generator_0_State<<PWM0_Generator_0%32);
Enable_Registers->EN0 |= (PWM0_Generator_1_State<<PWM0_Generator_1%32);
Enable_Registers->EN0 |= (PWM0_Generator_2_State<<PWM0_Generator_2%32);
Enable_Registers->EN0 |= (QEI0_State<<QEI0%32);
Enable_Registers->EN0 |= (ADC0_Sequence_0_State<<ADC0_Sequence_0%32);
Enable_Registers->EN0 |= (ADC0_Sequence_1_State<<ADC0_Sequence_1%32);
Enable_Registers->EN0 |= (ADC0_Sequence_2_State<<ADC0_Sequence_2%32);
Enable_Registers->EN0 |= (ADC0_Sequence_3_State<<ADC0_Sequence_3%32);
Enable_Registers->EN0 |= (Watchdog_Timers_0_and_1_State<<Watchdog_Timers_0_and_1%32);
Enable_Registers->EN0 |= (Bit_Timer_16_32_0A_State<<Bit_Timer_16_32_0A%32);
Enable_Registers->EN0 |= (Bit_Timer_16_32_0B_State<<Bit_Timer_16_32_0B%32);
Enable_Registers->EN0 |= (Bit_Timer_16_32_1A_State<<Bit_Timer_16_32_1A%32);
Enable_Registers->EN0 |= (Bit_Timer_16_32_1B_State<<Bit_Timer_16_32_1B%32);
Enable_Registers->EN0 |= (Bit_Timer_16_32_2A_State<<Bit_Timer_16_32_2A%32);
Enable_Registers->EN0 |= (Bit_Timer_16_32_2B_State<<Bit_Timer_16_32_2B%32);
Enable_Registers->EN0 |= (Analog_Comparator_0_State<<Analog_Comparator_0%32);
Enable_Registers->EN0 |= (Analog_Comparator_1_State<<Analog_Comparator_1%32);
Enable_Registers->EN0 |= (System_Control_State<<System_Control%32);
Enable_Registers->EN0 |= (Flash_Memory_Control_and_EEPROM_Control_State<<Flash_Memory_Control_and_EEPROM_Control%32);
Enable_Registers->EN0 |= (GPIO_Port_F_State<<GPIO_Port_F%32);

Enable_Registers->EN1 |= (UART2_State<<UART2%32);
Enable_Registers->EN1 |= (SSI1_State<<SSI1%32);
Enable_Registers->EN1 |= (Bit_Timer_16_32_3A_State<<Bit_Timer_16_32_3A%32);
Enable_Registers->EN1 |= (Bit_Timer_16_32_3B_State<<Bit_Timer_16_32_3B%32);
Enable_Registers->EN1 |= (I2C1_State<<I2C1%32);
Enable_Registers->EN1 |= (QEI1_State<<QEI1%32);
Enable_Registers->EN1 |= (CAN0_State<<CAN0%32);
Enable_Registers->EN1 |= (CAN1_State<<CAN1%32);
Enable_Registers->EN1 |= (Hibernation_Module_State<<Hibernation_Module%32);
Enable_Registers->EN1 |= (USB_State<<USB%32);
Enable_Registers->EN1 |= (PWM_Generator_3_State<<PWM_Generator_3%32);
Enable_Registers->EN1 |= (UDMA_Software_State<<UDMA_Software%32);
Enable_Registers->EN1 |= (UDMA_Error_State<<UDMA_Error%32);
Enable_Registers->EN1 |= (ADC1_Sequence_0_State<<ADC1_Sequence_0%32);
Enable_Registers->EN1 |= (ADC1_Sequence_1_State<<ADC1_Sequence_1%32);
Enable_Registers->EN1 |= (ADC1_Sequence_2_State<<ADC1_Sequence_2%32);
Enable_Registers->EN1 |= (ADC1_Sequence_3_State<<ADC1_Sequence_3%32);
Enable_Registers->EN1 |= (SSI2_State<<SSI2%32);
Enable_Registers->EN1 |= (SSI3_State<<SSI3%32);
Enable_Registers->EN1 |= (UART3_State<<UART3%32);
Enable_Registers->EN1 |= (UART4_State<<UART4%32);
Enable_Registers->EN1 |= (UART5_State<<UART5%32);
Enable_Registers->EN1 |= (UART6_State<<UART6%32);
Enable_Registers->EN1 |= (UART7_State<<UART7%32);

Enable_Registers->EN2 |= (I2C2_State<<I2C2%32);
Enable_Registers->EN2 |= (I2C3_State<<I2C3%32);
Enable_Registers->EN2 |= (Bit_Timer_16_32_4A_State<<Bit_Timer_16_32_4A%32);
Enable_Registers->EN2 |= (Bit_Timer_16_32_4B_State<<Bit_Timer_16_32_4B%32);
Enable_Registers->EN2 |= (Bit_Timer_16_32_5A_State<<Bit_Timer_16_32_5A%32);
Enable_Registers->EN2 |= (Bit_Timer_16_32_5B_State<<Bit_Timer_16_32_5B%32);
Enable_Registers->EN2 |= (Bit_Timer_32_64_0A_State<<Bit_Timer_32_64_0A%32);
Enable_Registers->EN2 |= (Bit_Timer_32_64_0B_State<<Bit_Timer_32_64_0B%32);

Enable_Registers->EN3 |= (Bit_Timer_32_64_1A_State<<Bit_Timer_32_64_1A%32);
Enable_Registers->EN3 |= (Bit_Timer_32_64_1B_State<<Bit_Timer_32_64_1B%32);
Enable_Registers->EN3 |= (Bit_Timer_32_64_2A_State<<Bit_Timer_32_64_2A%32);
Enable_Registers->EN3 |= (Bit_Timer_32_64_2B_State<<Bit_Timer_32_64_2B%32);
Enable_Registers->EN3 |= (Bit_Timer_32_64_3A_State<<Bit_Timer_32_64_3A%32);
Enable_Registers->EN3 |= (Bit_Timer_32_64_3B_State<<Bit_Timer_32_64_3B%32);
Enable_Registers->EN3 |= (Bit_Timer_32_64_4A_State<<Bit_Timer_32_64_4A%32);
Enable_Registers->EN3 |= (Bit_Timer_32_64_4B_State<<Bit_Timer_32_64_4B%32);
Enable_Registers->EN3 |= (Bit_Timer_32_64_5A_State<<Bit_Timer_32_64_5A%32);
Enable_Registers->EN3 |= (Bit_Timer_32_64_5B_State<<Bit_Timer_32_64_5B%32);
Enable_Registers->EN3 |= (System_Exception_imprecise_State<<System_Exception_imprecise%32);

Enable_Registers->EN4 |= (PWM1_Generator_0_State<<PWM1_Generator_0%32);
Enable_Registers->EN4 |= (PWM1_Generator_1_State<<PWM1_Generator_1%32);
Enable_Registers->EN4 |= (PWM1_Generator_2_State<<PWM1_Generator_2%32);
Enable_Registers->EN4 |= (PWM1_Generator_3_State<<PWM1_Generator_3%32);
Enable_Registers->EN4 |= (PWM1_Fault_State<<PWM1_Fault%32);



Priority_Registers->PRI0 |=(GPIO_Port_A_Pri<<5) | (GPIO_Port_B_Pri<<13) | (GPIO_Port_C_Pri<<21) | (GPIO_Port_D_Pri<<29);
Priority_Registers->PRI1 |=(GPIO_Port_E_Pri<<5) | (UART0_Pri<<13) | (UART1_Pri<<21) | (SSI0_Pri<<29);
Priority_Registers->PRI2 |=(I2C0_Pri<<5) | (PWM0_Fault_Pri<<13) | (PWM0_Generator_0_Pri<<21) | (PWM0_Generator_1_Pri<<29);
Priority_Registers->PRI3 |=(PWM0_Generator_2_Pri<<5) | (QEI0_Pri<<13) | (ADC0_Sequence_0_Pri<<21) | (ADC0_Sequence_1_Pri<<29);
Priority_Registers->PRI4 |=(ADC0_Sequence_2_Pri<<5) | (ADC0_Sequence_3_Pri<<13) | (Watchdog_Timers_0_and_1_Pri<<21) | (Bit_Timer_16_32_0A_Pri<<29);
Priority_Registers->PRI5 |=(Bit_Timer_16_32_0B_Pri<<5) | (Bit_Timer_16_32_1A_Pri<<13) | (Bit_Timer_16_32_1B_Pri<<21) | (Bit_Timer_16_32_2A_Pri<<29);
Priority_Registers->PRI6 |=(Bit_Timer_16_32_2B_Pri<<5) | (Analog_Comparator_0_Pri<<13) | (Analog_Comparator_1_Pri<<21);
Priority_Registers->PRI7 |=(System_Control_Pri<<5) | (Flash_Memory_Control_and_EEPROM_Control_Pri<<13);
Priority_Registers->PRI8 |= (UART2_Pri<<13) | (SSI1_Pri<<21) | (Bit_Timer_16_32_3A_Pri<<29);
Priority_Registers->PRI9 |=(Bit_Timer_16_32_3B_Pri<<5) | (I2C1_Pri<<13) | (QEI1_Pri<<21) | (CAN0_Pri<<29);
Priority_Registers->PRI10 |=(CAN1_Pri<<5) | (Hibernation_Module_Pri<<29);
Priority_Registers->PRI11 |=(USB_Pri<<5) | (PWM_Generator_3_Pri<<13) | (UDMA_Software_Pri<<21) | (UDMA_Error_Pri<<29);
Priority_Registers->PRI12 |=(ADC1_Sequence_0_Pri<<5) | (ADC1_Sequence_1_Pri<<13) | (ADC1_Sequence_2_Pri<<21) | (ADC1_Sequence_3_Pri<<29);
Priority_Registers->PRI14 |=(SSI2_Pri<<13) | (SSI3_Pri<<21) | (UART3_Pri<<29);
Priority_Registers->PRI15 |=(UART4_Pri<<5) | (UART5_Pri<<13) | (UART6_Pri<<21) | (UART7_Pri<<29);
Priority_Registers->PRI17 |=(I2C2_Pri<<5) | (I2C3_Pri<<13) | (Bit_Timer_16_32_4A_Pri<<21) | (Bit_Timer_16_32_4B_Pri<<29);
Priority_Registers->PRI23 |=(Bit_Timer_16_32_5A_Pri<<5) | (Bit_Timer_16_32_5B_Pri<<13) | (Bit_Timer_32_64_0A_Pri<<21) | (Bit_Timer_32_64_0B_Pri<<29);
Priority_Registers->PRI24 |=(Bit_Timer_32_64_1A_Pri<<5) | (Bit_Timer_32_64_1B_Pri<<13) | (Bit_Timer_32_64_2A_Pri<<21) | (Bit_Timer_32_64_2B_Pri<<29);
Priority_Registers->PRI25 |=(Bit_Timer_32_64_3A_Pri<<5) | (Bit_Timer_32_64_3B_Pri<<13) | (Bit_Timer_32_64_4A_Pri<<21) | (Bit_Timer_32_64_4B_Pri<<29);
Priority_Registers->PRI26 |=(Bit_Timer_32_64_5A_Pri<<5) | (Bit_Timer_32_64_5B_Pri<<13) | (System_Exception_imprecise_Pri<<21);
Priority_Registers->PRI33 |=(PWM1_Generator_0_Pri<<21) | (PWM1_Generator_1_Pri<<29);
Priority_Registers->PRI34 |=(PWM1_Generator_2_Pri<<5) | (PWM1_Generator_3_Pri<<13) | (PWM1_Fault_Pri<<21);

}
