#define Base_addr_sysCtrl				0x400FE000
#define SYSCTRL_RCC             *((volatile u32*)(Base_addr_sysCtrl+0x060))
#define SYSCTRL_GPIOHBCTL       *((volatile u32*)(Base_addr_sysCtrl+0x06C))
#define SYSCTRL_RCGCWD          *((volatile u32*)(Base_addr_sysCtrl+0x600))
#define SYSCTRL_RCGCTIMER       *((volatile u32*)(Base_addr_sysCtrl+0x604))
#define SYSCTRL_RCGCGPIO        *((volatile u32*)(Base_addr_sysCtrl+0x608))
#define SYSCTRL_RCGCPWM         *((volatile u32*)(Base_addr_sysCtrl+0x640))
#define SYSCTRL_RCGCWTIMER      *((volatile u32*)(Base_addr_sysCtrl+0x65C))
