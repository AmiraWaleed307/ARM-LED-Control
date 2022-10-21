#define base_address    0xE000E000

#define SCB_ACTLR       *((volatile u32*)(base_address+0x008))
#define SCB_INTCTRL     *((volatile u32*)(base_address+0xD04))
#define SCB_VTABLE      *((volatile u32*)(base_address+0xD08))
#define SCB_APINT       *((volatile u32*)(base_address+0xD0C))
#define SCB_SYSCTRL     *((volatile u32*)(base_address+0xD10))
#define SCB_CFGCTRL     *((volatile u32*)(base_address+0xD14))
#define SCB_SYSPRI1     *((volatile u32*)(base_address+0xD18))
#define SCB_SYSPRI2     *((volatile u32*)(base_address+0xD1C))
#define SCB_SYSPRI3     *((volatile u32*)(base_address+0xD20))
#define SCB_SYSHNDCTRL  *((volatile u32*)(base_address+0xD24))
#define SCB_FAULTSTAT   *((volatile u32*)(base_address+0xD28))
#define SCB_HFAULTSTAT  *((volatile u32*)(base_address+0xD2C))
#define SCB_MMADDR      *((volatile u32*)(base_address+0xD34))
#define SCB_FAULTADDR   *((volatile u32*)(base_address+0xD38))


#define APINTKEY        0xFA05
