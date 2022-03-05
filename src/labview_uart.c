/*
 * labview_uart.c
 *
 *  Created on: -
 *      Author: Michal Balicki
 */
//#include "inc/stm32f10x.h"

#include "include/labview_uart.h"

/*
 * USART4
 * n�ki PC10 i PC11
 * PC10 - Tx
 * PC11 - Rx
 */
//volatile uint8_t interruptData;

void usartLabView_init()
{
	//init USART2
	//RCC_APB1ENR_USART2EN_bb = 1; // ok
	RCC->APB1ENR |= RCC_APB1ENR_USART3EN;
	gpio_pin_cfg(USART_GPIO_LV, USART_TX_LV, GPIO_CRx_MODE_CNF_ALT_PP_10M_value);
	gpio_pin_cfg(USART_GPIO_LV, USART_RX_LV, GPIO_CRx_MODE_CNF_IN_FLOATING_value);

	USART3->CR1 = 0;

	USART3->BRR = 8000000 / 9600;
	//USART1->CR1 = USART_CR1_UE | USART_CR1_TE | USART_CR1_RE | USART_CR1_RXNEIE;
	USART3->CR1 = USART_CR1_UE | USART_CR1_TE | USART_CR1_RE;
	//NVIC_EnableIRQ(USART1_IRQn);
}


void usartLabView_transmit(uint8_t data)
{
	//USART3->CR1|=USART_CR1_TXEIE;
	//interruptData=data;
	//polling:
	while(!(USART3->SR & USART_SR_TXE));
	USART3->DR = data;
}

/*void USART3_IRQHandler(void){
	if(USART3->SR & USART_SR_TXE){
		//sprift_();
		USART3->CR1&=~USART_CR1_TXEIE;///wylaczenie perzerwan
		USART3->DR=interruptData; // musi byc volatile
	}
}*/

/*void USART1_IRQHandler(void)
{
	uint32_t status = USART1->SR;
	if(status & USART_SR_RXNE)
	{
		uint8_t dummy = USART1->DR;
		usart_transmit(dummy);
	}
}*/

void usartLabView_string(char *str)
{
	while(*str)
	{
		usartLabView_transmit((uint8_t) *str);
		++str;
	}
}
void usartLabView_wyswietlanie_liczby(uint8_t liczba, uint8_t rodzaj)
{
	char bufor[17];
	itoa(liczba,bufor,rodzaj);
	usartLabView_string(bufor);
}

