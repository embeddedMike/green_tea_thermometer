/*
 * LCD.c
 *
 *  Created on: 1 maj 2016
 *      Author: Micha³
 */
#include "include/LCD.h"



void gpio_inicjalizacja(void){

	GPIOC->CRL = (GPIOC->CRL & (~(GPIO_CRL_MODE0 | GPIO_CRL_MODE1 | GPIO_CRL_MODE2 | GPIO_CRL_MODE3 | GPIO_CRL_MODE4 | GPIO_CRL_MODE5)))
			| (GPIO_CRL_MODE0_1 | GPIO_CRL_MODE1_1 | GPIO_CRL_MODE2_1 | GPIO_CRL_MODE3_1 | GPIO_CRL_MODE4_1 | GPIO_CRL_MODE5_1);

	GPIOC->CRL = (GPIOC->CRL & (~(GPIO_CRL_CNF0_0 | GPIO_CRL_CNF1_0 | GPIO_CRL_CNF2_0 | GPIO_CRL_CNF3_0 | GPIO_CRL_CNF4_0 | GPIO_CRL_CNF5_0)));

	//GPIOC->BSRR = (1<<0) | (1<<1) | (1<<2) | (1<<3) | (1<<4) | (1<<5);

}

void LCD_wystlanie_bajtu_na_raty(uint8_t bajt){

	//Starsza
	GPIOC->ODR = ((bajt >> 4) & 0x0F) | (1<<4);
	GPIOC->ODR = ((bajt >> 4) & 0x0F);
	//Mlodsza
	GPIOC->ODR = (bajt & 0x0F) | (1<<4);
	GPIOC->ODR = (bajt & 0x0F);
	delay_ms(5);
}

void LCD_wczytywanie_komendy(uint8_t komenda){

	GPIOC->ODR &= ~(1<<5); // niski na RS
	LCD_wystlanie_bajtu_na_raty(komenda);

}

void LCD_wystlanie_znaku_na_raty(uint8_t ASCII){ // wczytywanie ASCII

	//Starsza
	GPIOC->ODR = ((ASCII >> 4) & 0x0F) | (1<<4) | (1<<5);
	GPIOC->ODR = ((ASCII >> 4) & 0x0F) | (1<<5);
	//Mlodsza
	GPIOC->ODR = (ASCII & 0x0F) | (1<<4) | (1<<5);
	GPIOC->ODR = (ASCII & 0x0F) | (1<<5);
	delay_ms(5);

}

void LCD_string(char* Napis){

	while(*Napis) LCD_wystlanie_znaku_na_raty(*Napis++);

}

void LCD_pozycjonowanie_kursora(uint8_t y, uint8_t x){

	switch(y) // poprzez uint8_t y podam do case
		{
			case 0:
			{
				y=0x00; // adres 1 znaku 1 wiersza
			}
			break;

			case 1:
			{
				y=0x40; // adres 1 znaku 2 wiersza
			}
			break;

	                case 2:
			{
				y=0x10; // adres 1 znaku 3 wiersza
			}
			break;

	                case 3:
			{
				y=0x50; // adres 1 znaku 4 wiersza
			}
			break;




		}
	LCD_wczytywanie_komendy( (0x80 + y + x) );

}

void LCD_inicjalizacja(void){

	gpio_inicjalizacja();
	delay_ms(100);
	LCD_wystlanie_bajtu_na_raty(0x28);
	LCD_wystlanie_bajtu_na_raty(0x0C);
	LCD_wystlanie_bajtu_na_raty(0x06);
	LCD_wystlanie_bajtu_na_raty(0x80);
	LCD_wystlanie_bajtu_na_raty(0x01);

}
void LCD_wyswietlanie_liczby(uint8_t liczba, uint8_t rodzaj)
{
	char bufor[17];
	itoa(liczba,bufor,rodzaj);
	LCD_string(bufor);
}
void clear_line( uint8_t line ) {

   uint8_t i;
   LCD_pozycjonowanie_kursora( line, 0 );
   for( i=0; i<16; i++) lcd_char(' ');

}
void lcd_char(char c)
{
	LCD_wystlanie_bajtu_na_raty( ( c>=0x80 && c<=0x87 ) ? (c & 0x07) : c);
}
void lcd_defchar(uint8_t nr, uint8_t *def_znak) // TUTAJ DO PRZEANALIZOWANIA TA FUNKCJA
{
	register uint8_t i,c;
	LCD_wystlanie_bajtu_na_raty( 64+((nr&0x07)*8) );
	for(i=0;i<8;i++)
	{
		c = *(def_znak++);
		LCD_wystlanie_znaku_na_raty(c);
	}
}
