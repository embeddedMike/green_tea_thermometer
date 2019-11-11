/*
 * Serwo.c
 *
 *  Created on: 1 maj 2016
 *      Author: Micha³
 */
#include "include/Serwo.h"


void timer2_init_PWMserwo(void){

	RCC->APB1ENR |= RCC_APB1ENR_TIM2EN;
	// domyœlnie 8MHz
	TIM2->PSC = 79; // 800/8MHz daje 0,00001 s - 10us, 0.01ms
	TIM2->ARR = 1999; // 2000 10us-sekundowych tykniec daje 20ms
	TIM2->CCR1 = 150; // Wspolczynnik wypelnienia
	TIM2->CCER |= TIM_CCER_CC1E; //aktywujê dan¹ koñcówkê OCx
	TIM2->CCMR1 = TIM_CCMR1_OC1M_1 | TIM_CCMR1_OC1M_2; // pwm mode 1
	TIM2->DIER |= TIM_DIER_UIE;
	TIM2->CR1 |= TIM_CR1_CEN;
	//NVIC_EnableIRQ(TIM2_IRQn);
}
// Wpisanie odpowiednich wartoœci do rejestru CCR1

void serwoAngle0(void){ // 1500us
	//static uint32_t duty=0;
	//duty=duty+1;

	TIM2->CCR1 = 150;
	//if(duty>=200){
	//duty=200;
	//}
}


void serwoAngle45(void){ // 1000us
	//static uint32_t duty=0;
	//duty=duty+1;

	TIM2->CCR1 = 100;
	//if(duty>=200){
	//duty=200;
	//}
}
void serwoAngle90(void){ // 600us

	//static uint32_t duty=200;
	//duty=duty-1;

	//duty = duty-1;
	TIM2->CCR1 = 60;
	//if(duty==0){
	//duty=0;
	//}
}
