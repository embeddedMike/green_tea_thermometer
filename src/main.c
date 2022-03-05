/*
 *
 *
 *  Created on: -
 *      Author: Michal Balicki
 */
/******************************************************************************
* project: Green Tea Thermometer
* chip: STM32F103RN
* compiler: arm-none-eabi-gcc
******************************************************************************/

/*
+=============================================================================+
| includes
+=============================================================================+
*/

#include "include/config.h"
#include "include/lcd.h"
#include "include/ds18b20.h"
#include "include/printf.h"
#include "include/microswitch.h"
//#include "include/servo.h"
//#include "include/fsm.h"
//#include "include/Labview_Uart.h"

static void flash_latency(uint32_t frequency);
static uint32_t pll_start(uint32_t frequency);
static void system_init(void);
static void system_init2(void);

volatile uint32_t count750ms=0, count_max750ms = 1000;
volatile uint8_t tick_750ms=0;
uint8_t lms10=255;
uint8_t ls1=255;
uint8_t ams_cnt=0;
uint8_t pompaON;

int main(void)
{

	uint8_t znak, temp, reszta;
	char buffer[20];

	//system_init();
	//pll_start(FREQUENCY);
	RCC->APB2ENR = RCC_APB2ENR_IOPAEN | RCC_APB2ENR_IOPBEN | RCC_APB2ENR_IOPCEN |
				 RCC_APB2ENR_AFIOEN;
	AFIO->MAPR |= AFIO_MAPR_USART3_REMAP_PARTIALREMAP; // remap usart
	gpio_pin_cfg(GPIOA, 5, GPIO_CRx_MODE_CNF_OUT_PP_2M_value);
	//GPIOA->CRL |= (GPIOA->CRL & (~GPIO_CRL_MODE0)) | GPIO_CRL_MODE0_1;
	gpio_pin_cfg(GPIOA, 0, GPIO_CRx_MODE_CNF_OUT_PP_2M_value);
	gpio_pin_cfg(GPIOA, 1, GPIO_CRx_MODE_CNF_OUT_PP_2M_value);
	gpio_pin_cfg(GPIOA, 4, GPIO_CRx_MODE_CNF_OUT_PP_2M_value);
	gpio_pin_cfg(GPIOA, 12, GPIO_CRx_MODE_CNF_OUT_PP_2M_value);
	GPIOA->ODR |= (1<<0); // MOC 3041
	GPIOA->ODR |= (1<<5); // USART NADAWANIE max485
	//usart_init();
	ButtonGpio_init();
	SysTick_Config(FREQUENCY/1000);
	timer6_init_delay();
	//timer2_init_PWMserwo();
	//serwoAngle0();
	ow_init();
	lcdInit();
	timer4_Debounce();
	//lcd_defchar(0,serce);
	//usartLabView_init();
	//LCD_pozycjonowanie_kursora(2,2);

	//initMenu();
	//clear_line(2);


	while(1)
	{
		//klawiszOdczyt();

		if( lms10 != ms10_cnt )
		{
			lms10 = ms10_cnt;
		}

		if(ls1 != s1_cnt)
		{
			tick_750ms = 0;
			ds18b20_read_temperature(&znak, &temp, &reszta);
			sprintf_(buffer, ((znak == DS_ZNAK_MINUS) ? "-%d.%d\x7f""C":"Temp: %d.%d"), temp, (reszta*10)/16);
			lcdCursorPositon(2,2);
			lcdString(buffer);
			GPIOA->ODR ^= (1<<5);
			ds18b20_convert();

			ls1 = s1_cnt;
		}
	}
}

static void flash_latency(uint32_t frequency)
{
	uint32_t wait_states;

	if (frequency < 24000000ul)				// 0 wait states for core speed below 24MHz
		wait_states = 0;
	else if (frequency < 48000000ul)		// 1 wait state for core speed between 24MHz and 48MHz
		wait_states = 	1;
	else									// 2 wait states for core speed over 48MHz
		wait_states = 2;

	FLASH->ACR |= wait_states;				// set the latency
}

/*------------------------------------------------------------------------*//**
* \brief Starts the PLL
* \details Configure and enable PLL to achieve some frequency with some crystal.
* Before the speed change Flash latency is configured via flash_latency(). PLL
* parameter mul is based on both function parameters. The PLL is set up,
* started and connected. APB1 clock ratio is set to 1:2 (max freq = 36MHz)
*
* \param [in] frequency is the desired target frequency after enabling the PLL
*
* \return real frequency that was set
*//*-------------------------------------------------------------------------*/

static uint32_t pll_start( uint32_t frequency)
{
	uint32_t mul;

	flash_latency(frequency);				// configure Flash latency for desired frequency

	mul = frequency / HSI_FREQ;				// PLL multiplier calculation

	if (mul > 16)							// max PLL multiplier is 16
		mul = 16;

	frequency = HSI_FREQ * mul;

	RCC->CFGR |= ((mul - 2) << RCC_CFGR_PLLMUL_bit)  | RCC_CFGR_PPRE1_DIV2;	// configuration of PLL: HSI x (mul), APB1 clk = /2, other /1

	while (!RCC_CR_HSIRDY_bb);				// wait for stable clock

	RCC_CR_PLLON_bb = 1;					// enable PLL
	while (!RCC_CR_PLLRDY_bb);				// wait for PLL lock

	RCC->CFGR |= RCC_CFGR_SW_PLL;			// change SYSCLK to PLL
	while (((RCC->CFGR) & RCC_CFGR_SWS) != RCC_CFGR_SWS_PLL);	// wait for switch

	return frequency;
}


static void system_init(void)
{
	gpio_init();
	//SysTick 1ms
	//SysTick_Config(FREQUENCY/1000);
	RCC_APB1ENR_BKPEN_bb = 1;
	RCC_APB1ENR_PWREN_bb = 1;
	//sw_init();
}
static void system_init2(void)
{

}
/*
+=============================================================================+
| ISRs
+=============================================================================+
*/

void SysTick_Handler(void)
{
	//every 1ms
	count750ms++;
	if (count750ms == count_max750ms) // every 1s
	{
		count750ms = 0;
		tick_750ms=1;
		//GPIOA->ODR ^= (1<<5);
	}
}

/*
void TIM2_IRQHandler(void){

	if(TIM2->SR & TIM_SR_UIF){

	   TIM2->SR &= ~TIM_SR_UIF;

	   //GPIOA->ODR ^= 1<<5;
	   GPIOA->ODR ^= 1<<0;
	}
}
*/