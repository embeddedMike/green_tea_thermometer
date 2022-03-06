/*
 * lcd.c
 *
 *      Author: Michal Balicki
 */
#include "include/lcd.h"

void gpioInit(void)
{
	GPIOC->CRL = (GPIOC->CRL & (~(GPIO_CRL_MODE0 | GPIO_CRL_MODE1 | GPIO_CRL_MODE2 | GPIO_CRL_MODE3 | GPIO_CRL_MODE4 | GPIO_CRL_MODE5)))
			| (GPIO_CRL_MODE0_1 | GPIO_CRL_MODE1_1 | GPIO_CRL_MODE2_1 | GPIO_CRL_MODE3_1 | GPIO_CRL_MODE4_1 | GPIO_CRL_MODE5_1);

	GPIOC->CRL = (GPIOC->CRL & (~(GPIO_CRL_CNF0_0 | GPIO_CRL_CNF1_0 | GPIO_CRL_CNF2_0 | GPIO_CRL_CNF3_0 | GPIO_CRL_CNF4_0 | GPIO_CRL_CNF5_0)));
}

void lcdReadPartialByte(uint8_t byte)
{
	// Upper part of the byte
	GPIOC->ODR = ((byte >> 4) & 0x0F) | (1<<4);
	GPIOC->ODR = ((byte >> 4) & 0x0F);
	// Lower part of the byte
	GPIOC->ODR = (byte & 0x0F) | (1<<4);
	GPIOC->ODR = (byte & 0x0F);
	delay_ms(5);
}

void lcdReadCommand(uint8_t command)
{
	GPIOC->ODR &= ~(1<<5); // low in RS
	lcdReadPartialByte(command);
}

void lcdReadPartialAscii(uint8_t ascii)
{
	// Upper part of the byte
	GPIOC->ODR = ((ascii >> 4) & 0x0F) | (1<<4) | (1<<5);
	GPIOC->ODR = ((ascii >> 4) & 0x0F) | (1<<5);
	// Lower part of the byte
	GPIOC->ODR = (ascii & 0x0F) | (1<<4) | (1<<5);
	GPIOC->ODR = (ascii & 0x0F) | (1<<5);
	delay_ms(5);
}

void lcdString(char* str)
{
	while(*str) lcdReadPartialAscii(*str++);
}

void lcdCursorPositon(uint8_t y, uint8_t x)
{
	switch(y)
	{
		case 0:
		{
			y=0x00; // 1 character 1 line
		}
		break;

		case 1:
		{
			y=0x40; // 1 character 2 line
		}
		break;

	    case 2:
		{
			y=0x10; // 1 character 3 line
		}
		break;

	    case 3:
		{
			y=0x50; // 1 character 4 line
		}
		break;
	}
	lcdReadCommand( (0x80 + y + x) );
}

void lcdInit(void){

	gpioInit();
	delay_ms(100);
	lcdReadPartialByte(0x28);
	lcdReadPartialByte(0x0C);
	lcdReadPartialByte(0x06);
	lcdReadPartialByte(0x80);
	lcdReadPartialByte(0x01);

}

void lcdDisplayNumber(uint8_t number, uint8_t type)
{
	char buffer[17];
	itoa(number,buffer,type);
	lcdString(buffer);
}

void clearLine(uint8_t line) 
{
   uint8_t i;
   lcdCursorPositon(line,0);
   for( i=0; i<16; i++) lcdChar(' ');

}

void lcdChar(char c)
{
	lcdReadPartialByte( ( c>=0x80 && c<=0x87 ) ? (c & 0x07) : c);
}

void lcdDefchar(uint8_t nr, uint8_t *defChar)
{
	register uint8_t i,c;
	lcdReadPartialByte( 64+((nr&0x07)*8) );
	for(i=0;i<8;i++)
	{
		c = *(defChar++);
		lcdReadPartialAscii(c);
	}
}