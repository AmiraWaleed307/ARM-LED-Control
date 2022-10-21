#include "../../0 - LIB/STD_TYPES.h"
#include "PORT_config.h"

#define GPIO_input      0
#define GPIO_output     1
#define GPIO_high       1
#define GPIO_low        0


typedef enum 
{
    disable_pullup_pulldown,
    pullup,
    pulldown
}PullUpDownConfig;

typedef enum 
{
    disable_open_drain_circuit,
    enable_open_drain_circuit
}OpenDrainPullUpDownConfig;

typedef enum 
{
    disable_2mA_4mA_8mA,
    enable_2mA,
    enable_4mA,
    enable_8mA
}OutputCurrentConfig;

typedef enum 
{
    DIO,
    AlternateFunction,
    AnalogFnction,
    EXTI
}PinModeConfig;

typedef enum 
{
    port_A,
    port_B,
    port_C,
    port_D,
    port_E,
    port_F
}PortNumberConfig;

typedef enum 
{
    pin_0,
    pin_1,
    pin_2,
    pin_3,
    pin_4,
    pin_5,
    pin_6,
    pin_7
}PinNumberConfig;

typedef struct 
{
    PortNumberConfig port_number;
    PinNumberConfig pinNumber;
    PinModeConfig portPinMode;
    u8 portPinLevelValue;
    u8 portPinDirection;
    OpenDrainPullUpDownConfig portPinInternalAttach;
    PullUpDownConfig portPinPullUp_Down;
    OutputCurrentConfig portPinOutputCurrent;   
}port_interface;

extern port_interface pins[config_pins];
void void_PORT_init(port_interface* configs);
