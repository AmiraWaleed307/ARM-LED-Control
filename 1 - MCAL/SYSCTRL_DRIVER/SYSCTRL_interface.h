#define auto_clock_gating_runmode       0
#define auto_clock_gating_s_d           1

#define SYSCTL_SYSDIV_1                 0
#define SYSCTL_SYSDIV_2                 1
#define SYSCTL_SYSDIV_3                 2
#define SYSCTL_SYSDIV_4                 3
#define SYSCTL_SYSDIV_5                 4
#define SYSCTL_SYSDIV_6                 5
#define SYSCTL_SYSDIV_7                 6
#define SYSCTL_SYSDIV_8                 7
#define SYSCTL_SYSDIV_9                 8
#define SYSCTL_SYSDIV_10                9
#define SYSCTL_SYSDIV_11                10
#define SYSCTL_SYSDIV_12                11
#define SYSCTL_SYSDIV_13                12
#define SYSCTL_SYSDIV_14                13
#define SYSCTL_SYSDIV_15                14
#define SYSCTL_SYSDIV_16                15

#define clock_divider_disable           0
#define clock_divider_enable            1

#define pwm_clock_divider_disable           0
#define pwm_clock_divider_enable            1

#define pwm_clock_divisor_2             0
#define pwm_clock_divisor_4             1
#define pwm_clock_divisor_8             2
#define pwm_clock_divisor_16             3
#define pwm_clock_divisor_32             4
#define pwm_clock_divisor_64             5


#define pll_enable                      0
#define pll_disable                     1

#define gpio_bus_apb                    0
#define gpio_bus_ahb                    1

#define RCC_ResetValue                  0x078E3AD1
#define GPIOHBCTL_ResetValue            0x00007E00


void Vid_SysCtrl_Init(void);

