/*
 * microswitch.c
 *
 *      Author: Michal Balicki
 */
// 5 buttons in PB5-PB9

#include "include/microswitch.h"

uint8_t static duty;
volatile uint8_t ms10_cnt; // OK
volatile uint8_t s1_cnt;  // OK



void timer4Debounce(void){

	RCC->APB1ENR |= RCC_APB1ENR_TIM4EN;
	// default 8MHz
	TIM4->PSC = 7999; // 8000/8MHz -> 1ms
	TIM4->ARR = 9; // 10ms interrupt
	TIM4->DIER |= TIM_DIER_UIE;
	TIM4->CR1 |= TIM_CR1_CEN;
	NVIC_EnableIRQ(TIM4_IRQn);
}


void buttonGpioInit(void)
{
	//gpio_pin_cfg(USART_GPIO, USART_TX, GPIO_CRx_MODE_CNF_ALT_OD_2M_value);
	gpio_pin_cfg(KLAWIATURA_GPIO, BUTTON1,GPIO_CRx_MODE_CNF_IN_PULL_U_D_value);
	gpio_pin_cfg(KLAWIATURA_GPIO, BUTTON2,GPIO_CRx_MODE_CNF_IN_PULL_U_D_value);
	gpio_pin_cfg(KLAWIATURA_GPIO, BUTTON3,GPIO_CRx_MODE_CNF_IN_PULL_U_D_value);
	gpio_pin_cfg(KLAWIATURA_GPIO, BUTTON4,GPIO_CRx_MODE_CNF_IN_PULL_U_D_value);
	gpio_pin_cfg(KLAWIATURA_GPIO, BUTTON5,GPIO_CRx_MODE_CNF_IN_PULL_U_D_value);

	GPIOB->ODR = (1<<5) | (1<<6) | (1<<7) | (1<<8) | (1<<9);
}

void buttonPress(uint16_t button,uint32_t wait,void(*wsk)(uint8_t *zmienna),void(*wsk2)(void))
{
	static uint8_t klock;
	static uint32_t flag;
	uint8_t helpVariable;

	if(!klock && !(GPIOB->IDR & button))
	{

		klock=1;

		if(wsk){ wsk(&helpVariable);}
		if(wsk2){ wsk2();}
		flag=1;

		Timer1 = (wait*1000)/10;

	}
	else if(klock && (GPIOB->IDR & button))
	{

		klock++;
		if(!klock)
		{
			Timer1=0;
			flag=0;
		}

	}else if(flag && !Timer1)
	{

		flag=0;
	}
}

void ledTog(void)
{
	GPIOA->ODR ^= 1<<5;
}

void TIM4_IRQHandler(void)
{
	if(TIM4->SR & TIM_SR_UIF)
	{
		TIM4->SR &= ~TIM_SR_UIF;
		uint32_t n;
		n = Timer1;  /* 100Hz Timer1 */
		if (Timer1) Timer1 = --n;
		n = Timer2;  /* 100Hz Timer1 */
		if (Timer2) Timer2 = --n;
		//GPIOA->ODR ^= 1<<5;
		if(++ms10_cnt>99) 
		{
			ms10_cnt=0;
			if(++s1_cnt>59) s1_cnt=0;
		}
	}
}
