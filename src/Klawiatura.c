/*
 * Klawiatura.c
 *
 *  Created on: 1 maj 2016
 *      Author: Micha³
 */
// 5 klawiszy na PB5-PB9

#include "include/Klawiatura.h"

uint8_t static duty;
volatile uint8_t ms10_cnt; // JEST
volatile uint8_t s1_cnt;  // JEST



void timer4_Debounce(void){

	RCC->APB1ENR |= RCC_APB1ENR_TIM4EN;
	// domyœlnie 8MHz
	TIM4->PSC = 7999; // 8000/8MHz daje 1ms
	TIM4->ARR = 9; // przerwanie co 10ms
	TIM4->DIER |= TIM_DIER_UIE;
	TIM4->CR1 |= TIM_CR1_CEN;
	NVIC_EnableIRQ(TIM4_IRQn);
}


void ButtonGpio_init(void){
	//gpio_pin_cfg(USART_GPIO, USART_TX, GPIO_CRx_MODE_CNF_ALT_OD_2M_value);
	gpio_pin_cfg(KLAWIATURA_GPIO, BUTTON1,GPIO_CRx_MODE_CNF_IN_PULL_U_D_value);
	gpio_pin_cfg(KLAWIATURA_GPIO, BUTTON2,GPIO_CRx_MODE_CNF_IN_PULL_U_D_value);
	gpio_pin_cfg(KLAWIATURA_GPIO, BUTTON3,GPIO_CRx_MODE_CNF_IN_PULL_U_D_value);
	gpio_pin_cfg(KLAWIATURA_GPIO, BUTTON4,GPIO_CRx_MODE_CNF_IN_PULL_U_D_value);
	gpio_pin_cfg(KLAWIATURA_GPIO, BUTTON5,GPIO_CRx_MODE_CNF_IN_PULL_U_D_value);

	GPIOB->ODR = (1<<5) | (1<<6) | (1<<7) | (1<<8) | (1<<9);
	//GPIOB->ODR |= (1<<6);

}

void ButtonPress(uint16_t button,uint32_t wait,void(*wsk)(uint8_t *zmienna),void(*wsk2)(void)){

	//Timer1 = 15;
	//if(!Timer1){
	static uint8_t klock;
	static uint32_t flag;

	uint8_t helpVariable2;
	uint8_t helpVariable;

	if(!klock && !(GPIOB->IDR & button)){

		klock=1;

		if(wsk){ wsk(&helpVariable);}
		if(wsk2){ wsk2();}
		flag=1;

		Timer1 = (wait*1000)/10;

	}
	else if(klock && (GPIOB->IDR & button)){

		klock++;
		if(!klock){
			Timer1=0;
			flag=0;
		}

	}else if(flag && !Timer1){

		//ewentualnie drugi wskaznik na funkcje
		flag=0;
	}
}
void LedTog(void){

	GPIOA->ODR ^= 1<<5;

}
void TIM4_IRQHandler(void){

	if(TIM4->SR & TIM_SR_UIF){

		TIM4->SR &= ~TIM_SR_UIF;
		uint32_t n;
		n = Timer1;  /* 100Hz Timer1 */
		if (Timer1) Timer1 = --n;
		n = Timer2;  /* 100Hz Timer1 */
		if (Timer2) Timer2 = --n;
		//GPIOA->ODR ^= 1<<5;
		if(++ms10_cnt>99) {  //OK
			ms10_cnt=0;		 //OK
			if(++s1_cnt>59) s1_cnt=0; // OK
		}
	}
}
