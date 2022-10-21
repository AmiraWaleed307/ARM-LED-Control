#include "../../0 - LIB/BIT_MATH.h"
#include "../../0 - LIB/STD_TYPES.h"

#include "DIO_private.h"
#include "DIO_interface.h"

u8 Dio_ReadChannel(u8 port, u8 channelID)
{
    switch (port)
    {
    case DIO_portA:
        return(GET_BIT(GPIODATA_A, channelID));
    case DIO_portB:
        return(GET_BIT(GPIODATA_B, channelID));
    case DIO_portC:
        return(GET_BIT(GPIODATA_C, channelID));
    case DIO_portD:
        return(GET_BIT(GPIODATA_D, channelID));
    case DIO_portE:
        return(GET_BIT(GPIODATA_E, channelID));
    case DIO_portF:
        return(GET_BIT(GPIODATA_F, channelID));
    }
		return 0;
}

void Dio_WriteChannel(u8 port, u8 channelID, u8 level)
{
    switch (port)
    {
    case DIO_portA:
        if(level == high)
            SET_BIT(GPIODATA_A, channelID);
        else
            CLR_BIT(GPIODATA_A, channelID);
        break;
    case DIO_portB:
        if(level == high)
            SET_BIT(GPIODATA_B, channelID);
        else
            CLR_BIT(GPIODATA_B, channelID);
        break;
    case DIO_portC:
        if(level == high)
            SET_BIT(GPIODATA_C, channelID);
        else
            CLR_BIT(GPIODATA_C, channelID);
        break;
    case DIO_portD:
        if(level == high)
            SET_BIT(GPIODATA_D, channelID);
        else
            CLR_BIT(GPIODATA_D, channelID);
        break;
    case DIO_portE:
        if(level == high)
            SET_BIT(GPIODATA_E, channelID);
        else
            CLR_BIT(GPIODATA_E, channelID);
        break;
    case DIO_portF:
        if(level == high)
            SET_BIT(GPIODATA_F, channelID);
        else
            CLR_BIT(GPIODATA_F, channelID);
        break;
    }   
}


u8 Dio_ReadPort(u8 port)
{
    switch (port)
    {
    case DIO_portA:
        return(GPIODATA_A);
    case DIO_portB:
        return(GPIODATA_B);
    case DIO_portC:
        return(GPIODATA_C);
    case DIO_portD:
        return(GPIODATA_D);
    case DIO_portE:
        return(GPIODATA_E);
    case DIO_portF:
        return(GPIODATA_F);
    }
		return 0;
}

void Dio_WritePort(u8 port, u8 level)
{
    switch (port)
    {
    case 0:
        GPIODATA_A=level;
        break;
    case 1:
        GPIODATA_B=level;
        break;
    case 2:
        GPIODATA_C=level;
        break;
    case 3:
        GPIODATA_D=level;
        break;
    case 4:
        GPIODATA_E=level;
        break;
    case 5:
        GPIODATA_F=level;
        break;
    }    
}

void Dio_FlipChannel(u8 port, u8 channelID)
{
    switch (port)
    {
    case DIO_portA:
        TOG_BIT(GPIODATA_A, channelID);
        break;
    case DIO_portB:
        TOG_BIT(GPIODATA_B, channelID);
        break;
    case DIO_portC:
        TOG_BIT(GPIODATA_C, channelID);
        break;
    case DIO_portD:
        TOG_BIT(GPIODATA_D, channelID);
        break;
    case DIO_portE:
        TOG_BIT(GPIODATA_E, channelID);
        break;
    case DIO_portF:
        TOG_BIT(GPIODATA_F, channelID);
        break;
    }    
}

