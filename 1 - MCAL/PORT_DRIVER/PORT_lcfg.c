#include "../../0 - LIB/STD_TYPES.h"
#include "PORT_interface.h"
#include "PORT_config.h"

u8 pinA0_alternateFunctions[2]={1,8};
u8 pinA1_alternateFunctions[2]={1,8};
u8 pinA2_alternateFunctions[1]={2};
u8 pinA3_alternateFunctions[1]={2};
u8 pinA4_alternateFunctions[1]={2};
u8 pinA5_alternateFunctions[1]={2};
u8 pinA6_alternateFunctions[2]={3,5};
u8 pinA7_alternateFunctions[2]={3,5};


u8 pinB0_alternateFunctions[2]={1,7};
u8 pinB1_alternateFunctions[2]={1,7};
u8 pinB2_alternateFunctions[2]={3,7};
u8 pinB3_alternateFunctions[2]={3,7};
u8 pinB4_alternateFunctions[4]={2,4,7,8};
u8 pinB5_alternateFunctions[4]={2,4,7,8};
u8 pinB6_alternateFunctions[3]={2,4,7};
u8 pinB7_alternateFunctions[3]={2,4,7};


u8 pinC0_alternateFunctions[2]={1,7};
u8 pinC1_alternateFunctions[2]={1,7};
u8 pinC2_alternateFunctions[2]={1,7};
u8 pinC3_alternateFunctions[2]={1,7};
u8 pinC4_alternateFunctions[6]={1,2,4,6,7,8};
u8 pinC5_alternateFunctions[6]={1,2,4,6,7,8};
u8 pinC6_alternateFunctions[4]={1,6,7,8};
u8 pinC7_alternateFunctions[3]={1,7,8};


u8 pinD0_alternateFunctions[6]={1,2,3,4,5,7};
u8 pinD1_alternateFunctions[6]={1,2,3,4,5,7};
u8 pinD2_alternateFunctions[5]={1,2,4,7,8};
u8 pinD3_alternateFunctions[5]={1,2,6,7,8};
u8 pinD4_alternateFunctions[2]={1,7};
u8 pinD5_alternateFunctions[2]={1,7};
u8 pinD6_alternateFunctions[4]={1,4,6,7};
u8 pinD7_alternateFunctions[4]={1,6,7,8};


u8 pinE0_alternateFunctions[1]={1};
u8 pinE1_alternateFunctions[1]={1};
u8 pinE4_alternateFunctions[5]={1,3,4,5,8};
u8 pinE5_alternateFunctions[5]={1,3,4,5,8};


u8 pinF0_alternateFunctions[8]={1,2,3,5,6,7,8,9};
u8 pinF1_alternateFunctions[7]={1,2,5,6,7,9,14};
u8 pinF2_alternateFunctions[5]={2,4,5,7,14};
u8 pinF3_alternateFunctions[5]={2,3,5,7,14};
u8 pinF4_alternateFunctions[4]={5,6,7,8};


port_interface pins[config_pins] ={

    port_A, pin_0, DIO, GPIO_high, GPIO_output, disable_open_drain_circuit, disable_pullup_pulldown, enable_2mA,
    port_A, pin_1, DIO, GPIO_low, GPIO_output, disable_open_drain_circuit, disable_pullup_pulldown, enable_2mA,
    port_A, pin_2, DIO, GPIO_low, GPIO_output, disable_open_drain_circuit, disable_pullup_pulldown, enable_2mA,
    port_A, pin_3, DIO, GPIO_low, GPIO_output, disable_open_drain_circuit, disable_pullup_pulldown, enable_2mA,
    port_A, pin_4, DIO, GPIO_low, GPIO_output, disable_open_drain_circuit, disable_pullup_pulldown, enable_2mA,
    port_A, pin_5, DIO, GPIO_low, GPIO_output, disable_open_drain_circuit, disable_pullup_pulldown, enable_2mA,

    port_C, pin_0, DIO, GPIO_low, GPIO_output, disable_open_drain_circuit, disable_pullup_pulldown, enable_2mA,
    port_C, pin_1, DIO, GPIO_low, GPIO_output, disable_open_drain_circuit, disable_pullup_pulldown, enable_2mA,
    port_C, pin_2, DIO, GPIO_low, GPIO_output, disable_open_drain_circuit, disable_pullup_pulldown, enable_2mA,
    port_C, pin_3, DIO, GPIO_low, GPIO_output, disable_open_drain_circuit, disable_pullup_pulldown, enable_2mA,
    port_C, pin_4, DIO, GPIO_low, GPIO_output, disable_open_drain_circuit, disable_pullup_pulldown, enable_2mA,

};



