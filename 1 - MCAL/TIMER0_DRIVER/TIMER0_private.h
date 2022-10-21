
#define TIMER0_32BIT_base_addr      0x40030000
#define TIMER0_64BIT_base_addr      0x40036000

#define TIMER0_GPTMCFG_32              *((volatile u32*)(TIMER0_32BIT_base_addr+0x00))
#define TIMER0_GPTMTAMR_32             *((volatile u32*)(TIMER0_32BIT_base_addr+0x004))
#define TIMER0_GPTMCTL_32              *((volatile u32*)(TIMER0_32BIT_base_addr+0x00C))
#define TIMER0_GPTMIMR_32              *((volatile u32*)(TIMER0_32BIT_base_addr+0x018))
#define TIMER0_GPTMMIS_32              *((volatile u32*)(TIMER0_32BIT_base_addr+0x020))
#define TIMER0_GPTMICR_32              *((volatile u32*)(TIMER0_32BIT_base_addr+0x024))
#define TIMER0_GPTMTAILR_32            *((volatile u32*)(TIMER0_32BIT_base_addr+0x028))
#define TIMER0_GPTMTAR_32              *((volatile u32*)(TIMER0_32BIT_base_addr+0x048))

void(*Timer0_GlobalCallback)(void);