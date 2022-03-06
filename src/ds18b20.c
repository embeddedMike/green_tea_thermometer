/*
 * ds18b20.c
 *
 *      Author: TQelektronik
 */

#include "include/ds18b20.h"


void set_baud(uint32_t baud)
{
	USART1->CR1 &= ~USART_CR1_UE;
	//USART1->BRR = (FREQUENCY + baud / 2) / baud;
	USART1->BRR = 8000000/baud;
	USART1->CR1 |= USART_CR1_UE;
}

void ow_init(void){

	// PA9 - TX, PA10 - RX, Open Drain
	RCC->APB2ENR |= RCC_APB2ENR_USART1EN;

	//GPIOA->CRH |= (GPIOA->CRH & (~(GPIO_CRH_MODE9 | GPIO_CRH_MODE10))) | (GPIO_CRH_MODE9_1 | GPIO_CRH_MODE10_1);
    //GPIOA->CRH |= (GPIOA->CRH & (~(GPIO_CRH_CNF9 | GPIO_CRH_CNF10))) | (GPIO_CRH_CNF9 | GPIO_CRH_CNF10); // funkcja alternatywna

    gpio_pin_cfg(USART_GPIO, USART_TX, GPIO_CRx_MODE_CNF_ALT_OD_2M_value);
    gpio_pin_cfg(USART_GPIO, USART_RX, GPIO_CRx_MODE_CNF_IN_FLOATING_value);

    USART1->CR1 = USART_CR1_TE | USART_CR1_RE;
    //USART1->BRR = (FREQUENCY + 9600 / 2) / 9600;
    USART1->BRR = 8000000/9600;
    USART1->CR1 |= USART_CR1_UE;

}

uint8_t uart_txrx(uint8_t data)
{
	while(!(USART1->SR & USART_SR_TXE));
	USART1->DR = data;

	while(!(USART1->SR & USART_SR_RXNE));

	return USART1->DR;
}

uint8_t ow_reset_pulse(void)
{
	uint8_t temp;
	set_baud(9600);

	temp = uart_txrx(0xF0);
	if(temp == 0xF0) return DS_ERROR;
	else return DS_OK;
}

void ow_write_1b(uint8_t data)
{
	if((data & 0x01)==1)
	{
		set_baud(115200);
		uart_txrx(0xFF);
	}
	else
	{
		set_baud(115200);
		uart_txrx(0x00);
	}
}

uint8_t ow_read_1b(void)
{
	set_baud(115200);
	uint8_t temp = uart_txrx(0xFF);

	if(temp == 0xFF)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


void ow_write(uint8_t data)
{
	uint8_t i;
	for(i=0;i<8;++i)
	{
		ow_write_1b(data);
		data= data>>1;
	}
}

uint8_t ow_read(void)
{
	uint8_t i, temp, dat=0;
	for(i=0;i<8;++i)
	{
		temp = ow_read_1b();
		dat |= (0x01 & temp)<<i;
	}
	return dat;
}

uint8_t ds18b20_convert(void)
{
	uint8_t error;
	error = ow_reset_pulse();
	if(error==DS_OK)
	{
		ow_write(DS_SKIP_ROM);
		ow_write(DS_CONVERT_T);
		return DS_OK;
	}
	else return DS_ERROR;
}

uint8_t ds18b20_read_temperature(uint8_t *znak, uint8_t *temperatur, uint8_t *reszta)
{
	uint8_t ok, crc_temp=0, th, tl, temp_reszta, temperatura;
	uint32_t  t=0;

	ok = ow_reset_pulse();
	if(ok==DS_ERROR) return DS_ERROR;
	ow_write(DS_SKIP_ROM);
	ow_write(DS_READ_SCRATCHPAD);
	tl = ow_read(); // tl
	th = ow_read(); // th

    //http://mikrokontrolery.blogspot.com/2011/04/temperatura-wyswietlacz-konwersja.html

	t = (((uint32_t)(th))<<8) + tl;
	if(t>0x8FFF)
	{
		*znak = DS_ZNAK_MINUS;
		t = 0xFFFF-t+1;
		temp_reszta = (uint8_t)(0x000F & t);
		temperatura = (uint8_t)(t>>4);
		*temperatur = temperatura;
		*reszta = temp_reszta;
	}
	else
	{
		*znak = DS_ZNAK_PLUS;
		temp_reszta = (uint8_t)(0x000F & t);
		temperatura = (uint8_t)(t>>4);
		*temperatur = temperatura;
		*reszta = temp_reszta;
	}
	if(crc_temp == 0) return DS_OK;
	return DS_CRC_ERROR;
}
