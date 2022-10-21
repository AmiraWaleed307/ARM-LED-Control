#include "../0 - LIB/STD_TYPES.h"

#define base_address    0xE000E000

#define STCTRL          *((volatile  u32*)(base_address+ 0x010))
#define STRELOAD        *((volatile  u32*)(base_address+ 0x014))
#define STCURRENT       *((volatile  u32*)(base_address+ 0x018))

