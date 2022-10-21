#define GPIOPortA_AHB_base_addr     0x40058000
#define GPIOPortB_AHB_base_addr     0x40059000
#define GPIOPortC_AHB_base_addr     0x4005A000
#define GPIOPortD_AHB_base_addr     0x4005B000
#define GPIOPortE_AHB_base_addr     0x4005C000
#define GPIOPortF_AHB_base_addr     0x4005D000

#define GPIO_portA_GPIOIS      *((volatile u32*)(GPIOPortA_AHB_base_addr+0x404))
#define GPIO_portA_GPIOIBE    *((volatile u32*)(GPIOPortA_AHB_base_addr+0x408))
#define GPIO_portA_GPIOIEV     *((volatile u32*)(GPIOPortA_AHB_base_addr+0x40C))
#define GPIO_portA_GPIOIM     *((volatile u32*)(GPIOPortA_AHB_base_addr+0x410))
#define GPIO_portA_GPIORIS     *((volatile u32*)(GPIOPortA_AHB_base_addr+0x414))
#define GPIO_portA_GPIOMIS      *((volatile u32*)(GPIOPortA_AHB_base_addr+0x418))
#define GPIO_portA_GPIOICR      *((volatile u32*)(GPIOPortA_AHB_base_addr+0x41C))


#define GPIO_portB_GPIOIS      *((volatile u32*)(GPIOPortB_AHB_base_addr+0x404))
#define GPIO_portB_GPIOIBE    *((volatile u32*)(GPIOPortB_AHB_base_addr+0x408))
#define GPIO_portB_GPIOIEV     *((volatile u32*)(GPIOPortB_AHB_base_addr+0x40C))
#define GPIO_portB_GPIOIM     *((volatile u32*)(GPIOPortB_AHB_base_addr+0x410))
#define GPIO_portB_GPIORIS     *((volatile u32*)(GPIOPortB_AHB_base_addr+0x414))
#define GPIO_portB_GPIOMIS      *((volatile u32*)(GPIOPortB_AHB_base_addr+0x418))
#define GPIO_portB_GPIOICR      *((volatile u32*)(GPIOPortB_AHB_base_addr+0x41C))


#define GPIO_portC_GPIOIS      *((volatile u32*)(GPIOPortC_AHB_base_addr+0x404))
#define GPIO_portC_GPIOIBE    *((volatile u32*)(GPIOPortC_AHB_base_addr+0x408))
#define GPIO_portC_GPIOIEV     *((volatile u32*)(GPIOPortC_AHB_base_addr+0x40C))
#define GPIO_portC_GPIOIM     *((volatile u32*)(GPIOPortC_AHB_base_addr+0x410))
#define GPIO_portC_GPIORIS     *((volatile u32*)(GPIOPortC_AHB_base_addr+0x414))
#define GPIO_portC_GPIOMIS      *((volatile u32*)(GPIOPortC_AHB_base_addr+0x418))
#define GPIO_portC_GPIOICR      *((volatile u32*)(GPIOPortC_AHB_base_addr+0x41C))

#define GPIO_portD_GPIOIS      *((volatile u32*)(GPIOPortD_AHB_base_addr+0x404))
#define GPIO_portD_GPIOIBE    *((volatile u32*)(GPIOPortD_AHB_base_addr+0x408))
#define GPIO_portD_GPIOIEV     *((volatile u32*)(GPIOPortD_AHB_base_addr+0x40C))
#define GPIO_portD_GPIOIM     *((volatile u32*)(GPIOPortD_AHB_base_addr+0x410))
#define GPIO_portD_GPIORIS     *((volatile u32*)(GPIOPortD_AHB_base_addr+0x414))
#define GPIO_portD_GPIOMIS      *((volatile u32*)(GPIOPortD_AHB_base_addr+0x418))
#define GPIO_portD_GPIOICR      *((volatile u32*)(GPIOPortD_AHB_base_addr+0x41C))


#define GPIO_portE_GPIOIS      *((volatile u32*)(GPIOPortE_AHB_base_addr+0x404))
#define GPIO_portE_GPIOIBE    *((volatile u32*)(GPIOPortE_AHB_base_addr+0x408))
#define GPIO_portE_GPIOIEV     *((volatile u32*)(GPIOPortE_AHB_base_addr+0x40C))
#define GPIO_portE_GPIOIM     *((volatile u32*)(GPIOPortE_AHB_base_addr+0x410))
#define GPIO_portE_GPIORIS     *((volatile u32*)(GPIOPortE_AHB_base_addr+0x414))
#define GPIO_portE_GPIOMIS      *((volatile u32*)(GPIOPortE_AHB_base_addr+0x418))
#define GPIO_portE_GPIOICR      *((volatile u32*)(GPIOPortE_AHB_base_addr+0x41C))

#define GPIO_portF_GPIOIS      *((volatile u32*)(GPIOPortF_AHB_base_addr+0x404))
#define GPIO_portF_GPIOIBE    *((volatile u32*)(GPIOPortF_AHB_base_addr+0x408))
#define GPIO_portF_GPIOIEV     *((volatile u32*)(GPIOPortF_AHB_base_addr+0x40C))
#define GPIO_portF_GPIOIM     *((volatile u32*)(GPIOPortF_AHB_base_addr+0x410))
#define GPIO_portF_GPIORIS     *((volatile u32*)(GPIOPortF_AHB_base_addr+0x414))
#define GPIO_portF_GPIOMIS      *((volatile u32*)(GPIOPortF_AHB_base_addr+0x418))
#define GPIO_portF_GPIOICR      *((volatile u32*)(GPIOPortF_AHB_base_addr+0x41C))

