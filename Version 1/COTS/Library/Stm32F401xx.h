#ifndef STM32F446XX_H
#define STM32F446XX_H

/************************       Various Memoreis Base Adresses       ************************/

//#define FLASH_BASE_ADDRESS         0X08000000UL
#define SRAM_BASE_ADDRESS          0x20000000UL
//#define ROM_BASE_ADDRESS           0x1FFF0000UL


/************************       AHB1 Peripheral Base Adresses       ************************/
 
 #define GPIOA_BASE_ADDRESS        0x40020000UL
 #define GPIOB_BASE_ADDRESS        0x40020400UL
 #define GPIOC_BASE_ADDRESS        0x40020800UL
 #define GPIOD_BASE_ADDRESS        0x40020C00UL
 #define GPIOE_BASE_ADDRESS        0x40021000UL
 #define GPIOH_BASE_ADDRESS        0x40021C00UL

 #define RCC_BASE_ADDRESS          0x40023800UL

/************************       AHB2 Peripheral Base Adresses       ************************/



/************************       AHB3 Peripheral Base Adresses       ************************/



/************************       APB1 Peripheral Base Adresses       ************************/




/************************       APB2 Peripheral Base Adresses       ************************/



/************************       GPIO Register Definition Structure       ************************/


typedef struct{
	 volatile uint32_t  MODER;       /*GPIO PORT Mode Register*/ 
	 volatile uint32_t  OTYPER;      /*GPIO PORT Output type Register*/
	 volatile uint32_t  OSPEEDR;     /*GPIO PORT Output speed Register*/
	 volatile uint32_t  PUPDR;       /*GPIO PORT Pull up/down Register*/
	 volatile uint32_t  IDR;         /*GPIO PORT Input data Register*/
	 volatile uint32_t  ODR;         /*GPIO PORT Output data Register*/
	 volatile uint32_t  BSRR;        /*GPIO PORT Bit set/Reset Register*/
	 volatile uint32_t  LCKR;        /*GPIO PORT Lock Register*/
	 volatile uint32_t  AFR[2]       /*GPIO PORT Alternative function Register*/
}GPIO_RegDef_t;


/************************       RCC Peripheral Definition Structure    ************************/

typedef struct{
	 volatile uint32_t  CR;              /*RCC clock control register*/
	 volatile uint32_t  PLLCFGR;         /*RCC PLL configuration register*/
	 volatile uint32_t  CFGR;            /*RCC clock configuration register*/
	 volatile uint32_t  CIR;             /*RCC clock interrupt register*/
	 volatile uint32_t  AHB1RSTR;        /*RCC AHB1 Peripheral reset register*/
	 volatile uint32_t  AHB2RSTR;        /*RCC AHB2 Peripheral reset register*/
	 volatile uint32_t  AHB3RSTR;        /*RCC AHB3 Peripheral reset register*/
	 uint32_t           Reserved0[2];    /*Reserved, 0x18-0x1C*/
	 volatile uint32_t  APB1RSTR;        /*RCC APB1 Peripheral reset register*/
	 volatile uint32_t  APB2RSTR;        /*RCC APB2 Peripheral reset register*/
     uint32_t           Reserved1[2];    /*Reserved, 0x28-0x2C*/
	 volatile uint32_t  AHB1ENR;         /*RCC AHB1 Peripheral clock register*/
	 volatile uint32_t  AHB2ENR;         /*RCC AHB2 Peripheral clock register*/
	 uint32_t           Reserved2[2];    /*Reserved, 0x38-0x3C*/
	 volatile uint32_t  APB1ENR;         /*RCC APB1 Peripheral clock register*/
	 volatile uint32_t  APB2ENR;         /*RCC APB2 Peripheral clock register*/
	 uint32_t           Reserved3[2];    /*Reserved, 0x48-0x4C*/
	 volatile uint32_t  AHB1LPENR;       /*RCC AHB1 Peripheral clock enable in low power mode register*/
	 volatile uint32_t  AHB2LPENR;       /*RCC AHB2 Peripheral clock enable in low power mode register*/
	 volatile uint32_t  Reserved4[2];    /*Reserved, 0x58-0x5C*/
	 volatile uint32_t  APB1LPENR;       /*RCC APB1 Peripheral clock enable in low power mode register*/
	 volatile uint32_t  APB2LPENR;       /*RCC APB2 Peripheral clock enable in low power moderegister*/
	 uint32_t           Reserved5[2];    /*Reserved, 0x68-0x6C*/
	 volatile uint32_t  BDCR;            /*RCC Backup domain control register*/
	 volatile uint32_t  CSR;             /*RCC clock control & status register*/
	 uint32_t           Reserved6[2];    /*Reserved, 0x78-0x7C*/
	 volatile uint32_t  SSCGR;           /*RCC spread spectrum clock generation register*/
	 volatile uint32_t  PLLI2SCFGR;      /*RCC PLLI2S configuration register*/
	 volatile uint32_t  DCKCFGR;         /*RCC Detdicated clocks configuration register*/
}RCC_RegDef_t;

/************************       GPIO Peripheral Definitions       ************************/

 #define GPIOA                ((GPIO_RegDef_t*)GPIOA_BASE_ADDRESS)       
 #define GPIOB                ((GPIO_RegDef_t*)GPIOB_BASE_ADDRESS)
 #define GPIOC                ((GPIO_RegDef_t*)GPIOC_BASE_ADDRESS)
 #define GPIOD                ((GPIO_RegDef_t*)GPIOD_BASE_ADDRESS)
 #define GPIOE                ((GPIO_RegDef_t*)GPIOE_BASE_ADDRESS)
 #define GPIOH                ((GPIO_RegDef_t*)GPIOH_BASE_ADDRESS)


#endif