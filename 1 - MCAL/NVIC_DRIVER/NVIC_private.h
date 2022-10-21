#ifndef NVIC_PRIVATE_H_
#define NVIC_PRIVATE_H_
#include "../../0 - LIB/STD_TYPES.h"
typedef struct 
{
    volatile u32 EN0;
    volatile u32 EN1;
    volatile u32 EN2;
    volatile u32 EN3;
    volatile u32 EN4;
}EN_REG;

typedef struct 
{
    volatile u32 PRI0;
    volatile u32 PRI1;
    volatile u32 PRI2;
    volatile u32 PRI3;
    volatile u32 PRI4;
    volatile u32 PRI5;
    volatile u32 PRI6;
    volatile u32 PRI7;
    volatile u32 PRI8;
    volatile u32 PRI9;
    volatile u32 PRI10;
    volatile u32 PRI11;
    volatile u32 PRI12;
    volatile u32 PRI13;
    volatile u32 PRI14;
    volatile u32 PRI15;
    volatile u32 PRI16;
    volatile u32 PRI17;
    volatile u32 PRI18;
    volatile u32 PRI19;
    volatile u32 PRI20;
    volatile u32 PRI21;
    volatile u32 PRI22;
    volatile u32 PRI23;
    volatile u32 PRI24;
    volatile u32 PRI25;
    volatile u32 PRI26;
    volatile u32 PRI27;
    volatile u32 PRI28;
    volatile u32 PRI29;
    volatile u32 PRI30;
    volatile u32 PRI31;
    volatile u32 PRI32;
    volatile u32 PRI33;
    volatile u32 PRI34;
}PRI_REG;

#define base_address    0xE000E000

#define Enable_Registers ((volatile EN_REG*)(base_address+ 0x100))

#define Priority_Registers ((volatile PRI_REG*)(base_address+0x400))

#endif /* NVIC_PRIVATE_H_ */

