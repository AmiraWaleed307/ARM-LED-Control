#include "../../0 - LIB/STD_TYPES.h"
enum timer0_options
{
    timer0_32bit_lower=0,
    timer0_64bit_higher=0,
    timer0_16bit_lower=4,
    timer0_32bit_higher=4
};

enum timer0_mode
{
    timer0_oneshot=1,
    timer0_periodic=2,
    timer0_capture=3
};

enum timer0_capmode
{
    edge_count=0,
    edge_time=1
};

enum timer0_countDIR
{
    down_count=0,
    up_count=1
};

void void_TIMER0_init(void);
void void_StartTimer0(void);
void void_StopTimer0(void);
void void_TIMER0Periodic(void(*CallBack)(void));
