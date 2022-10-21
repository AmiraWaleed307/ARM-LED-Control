#include "../../0 - LIB/STD_TYPES.h"

enum Ports{
    DIO_portA,
    DIO_portB,
    DIO_portC,
    DIO_portD,
    DIO_portE,
    DIO_portF
};

enum portA_pins
{
    pinA0,
    pinA1,
    pinA2,
    pinA3,
    pinA4,
    pinA5,
    pinA6,
    pinA7
};

enum portB_pins
{
    pinB0,
    pinB1,
    pinB2,
    pinB3,
    pinB4,
    pinB5,
    pinB6,
    pinB7
};

enum portC_pins
{
    pinC0,
    pinC1,
    pinC2,
    pinC3,
    pinC4,
    pinC5,
    pinC6,
    pinC7
};

enum portD_pins
{
    pinD0,
    pinD1,
    pinD2,
    pinD3,
    pinD4,
    pinD5,
    pinD6,
    pinD7
    
};

enum portE_pins
{
    pinE0,
    pinE1,
    pinE2,
    pinE3,
    pinE4,
    pinE5

};

enum portF_pins
{
    pinF0,
    pinF1,
    pinF2,
    pinF3,
    pinF4

};

u8 Dio_ReadChannel(u8 port, u8 channelID);
void Dio_WriteChannel(u8 port, u8 channelID, u8 level);
u8 Dio_ReadPort(u8 port);
void Dio_WritePort(u8 port, u8 level);
void Dio_FlipChannel(u8 port, u8 channelID);

