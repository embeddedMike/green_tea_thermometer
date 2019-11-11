/*
 * config.c
 *
 *  Created on: 1 maj 2016
 *      Author: Micha³
 */
#include "include/config.h"

volatile int time_ms = 0;

void timer6_init_delay(void){

	RCC->APB1ENR |= RCC_APB1ENR_TIM3EN;
	TIM3->PSC = 9; // 0,001ms
	TIM3->ARR = 9; // 0,01ms czyli 10us
	TIM3->DIER |= TIM_DIER_UIE;
	TIM3->CR1 |= TIM_CR1_CEN;
	NVIC_EnableIRQ(TIM3_IRQn);
}

void delay_ms(int ms) // ok, funkcja generujaca dokladne opoznienia w ms
{
	time_ms = ms;
	while(time_ms!=0);
}

void TIM3_IRQHandler(void){

	if(TIM3->SR & TIM_SR_UIF){

	   TIM3->SR &= ~TIM_SR_UIF;

	}

	if(time_ms!=0) time_ms--;
}
