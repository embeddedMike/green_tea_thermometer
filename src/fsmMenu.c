/*
 * fsmMenu.c
 *
 *  Created on: 24 wrz 2016
 *      Author: Micha³
 */

#include "include/fsmMenu.h"

uint8_t Histereza=2;
uint8_t Piec=32;
uint8_t Pompa=30;
uint8_t keyLockOk;
uint8_t keyLockUp;
uint8_t keyLockDown;
uint8_t keyLockExit;


volatile unsigned char currentMenu;
volatile unsigned char menuEvent=0;

const unsigned char MN01[] = "Sterownik\0";
const unsigned char MN02[] = "Histereza";
const unsigned char MN03[] = "Tem. Piec";
const unsigned char MN04[] = "Tem. Pompa";
const unsigned char MN05[] = "Histereza:";
const unsigned char MN06[] = "Temp. Piec:";
const unsigned char MN07[] = "Temp. Pompa:";

typedef struct
{
	unsigned char nextState[5];
	void (*callback)(unsigned char event);
	const unsigned char* firstLine;
	const unsigned char* secondLine;
}menuItem;

/* tablica struktur:
 * nazwa_struktury nazawa_tablicy [liczba_elementow]
 * W tablicy bêdzie:
 *
 */
const menuItem menu[] = {
   // ID UP DN OK EX
	{{0, 1, 2, 3, 0}, NULL, MN02,NULL},
	{{0, 2, 0, 4, 0}, NULL,	MN03,NULL},
	{{0, 0, 1, 5, 0}, NULL,	MN04,NULL},
	{{0, 3, 3, 3, 0}, setHistereza,	NULL,MN05}, // tu callbacki, przy exit brak funkcji przejœcia
	{{0, 4, 4, 4, 0}, setPiectemp,	NULL,MN06},
	{{0, 5, 5, 5, 0}, setPompatemp,	NULL,MN07}
};

void zmianaMenu(void)
{
	currentMenu = menu[currentMenu].nextState[menuEvent];

	LCD_pozycjonowanie_kursora(0,0);
	LCD_string("                ");
	LCD_pozycjonowanie_kursora(1,0);
	LCD_string("                ");

	if(menu[currentMenu].firstLine)
	{
		LCD_pozycjonowanie_kursora(0,0);
		LCD_string((char*)menu[currentMenu].firstLine);
	}
	if(menu[currentMenu].secondLine)
	{
		LCD_pozycjonowanie_kursora(1,0);
		LCD_string((char*)menu[currentMenu].secondLine);
	}

	if(menu[currentMenu].callback)
	{
		menu[currentMenu].callback(menuEvent);
	}

	menuEvent = 0;
}


void klawiszOdczyt(void)
{
	static unsigned char tpss; // po co ta zmienna
	unsigned char key;
	menuEvent = E_IDDLE;

	if ((GPIOB->IDR & 0x01F0)==0x01F0) // NOKEY
	{
		tpss=0;
	}
	else
	{
		tpss++;
		if(!keyLockExit && !(GPIOB->IDR & 0x0020)) {
			key = E_EXIT; // EXITKEY
			GPIOA->ODR ^= (1<<1);
		}else if( keyLockUp && (GPIOB->IDR & 0x0400)) keyLockExit++;

		if(!keyLockUp && !(GPIOB->IDR & 0x0040)) {
			key = E_UP; // UPKEY
			GPIOA->ODR ^= (1<<1);
		}else if( keyLockUp && (GPIOB->IDR & 0x0400)) keyLockUp++;

		if(!keyLockDown && !(GPIOB->IDR & 0x0080)){
			key = E_DOWN; // DOWNKEY
			GPIOA->ODR ^= (1<<1);
		}else if( keyLockDown && (GPIOB->IDR & 0x0800)) keyLockDown++;

		if(!keyLockOk && !(GPIOB->IDR & 0x0100)) {
			key = E_OK; //OKKEY
			GPIOA->ODR ^= (1<<1);
		}else if( keyLockOk && (GPIOB->IDR & 0x0100)) keyLockOk++;

		if (tpss==1)
		{
			menuEvent=key;
		}
		if (tpss==101)
		{
			menuEvent=key;
		}
		if (tpss==102)
		{
			menuEvent=key;
			tpss = 101;

		}
	}

}


void menuIddle(void)
{
	LCD_pozycjonowanie_kursora(0,0);
	LCD_string("                ");
	LCD_pozycjonowanie_kursora(1,0);
	LCD_string("                ");
	LCD_pozycjonowanie_kursora(0,0);
	LCD_string("Sterownik");
}


void setHistereza(unsigned char event)
{
	//LCD_wczytywanie_komendy(0x01);
	//clear_line(0);
	//clear_line(1);
	//LCD_pozycjonowanie_kursora(0,0);
	//LCD_string("                ");
	//LCD_pozycjonowanie_kursora(1,0);
	//LCD_string("                ");
	//LCD_pozycjonowanie_kursora(2,0);
	//LCD_string("                ");
	//LCD_pozycjonowanie_kursora(3,0);
	static uint8_t tempHistereza;// musi byc static



	//LCD_pozycjonowanie_kursora(0,0);
	//LCD_string("1.Histereza:");

	switch(event)
	{
		case E_UP:
			++tempHistereza;
			if(tempHistereza>=5)
			{
				tempHistereza=0;
				Histereza=5;
			}
			else
			{
				Histereza=tempHistereza;
			}
			break;
		case E_DOWN:


			break;
	}
	LCD_pozycjonowanie_kursora(1,12);
	LCD_wyswietlanie_liczby(tempHistereza,10);
	//LCD_pozycjonowanie_kursora(3,2);
	//LCD_string("Temp:");



	/*if(tempHistereza>=5)
	{
		tempHistereza=0;
		Histereza=5;
	}
	else
	{
		Histereza=tempHistereza;
	}
*/

}
void setPiectemp(unsigned char event)
{
	//LCD_wczytywanie_komendy(0x01);
	//clear_line(0);
	//clear_line(1);
	//LCD_pozycjonowanie_kursora(0,0);
	//LCD_string("                ");
	//LCD_pozycjonowanie_kursora(1,0);
	//LCD_string("                ");
	//LCD_pozycjonowanie_kursora(2,0);
	//LCD_string("                ");
	//LCD_pozycjonowanie_kursora(3,0);
	static uint8_t tempPiec;// musi byc static



	//LCD_pozycjonowanie_kursora(0,0);
	//LCD_string("1.Histereza:");

	switch(event)
	{
		case E_UP:
			++tempPiec;
			if(tempPiec>=85)
			{
				tempPiec=0;
				Piec=85;
			}
			else
			{
				Piec=tempPiec;
			}
			break;
		case E_DOWN:


			break;
	}
	LCD_pozycjonowanie_kursora(1,12);
	LCD_wyswietlanie_liczby(tempPiec,10);
	//LCD_pozycjonowanie_kursora(3,2);
	//LCD_string("Temp:");



	/*if(tempHistereza>=5)
	{
		tempHistereza=0;
		Histereza=5;
	}
	else
	{
		Histereza=tempHistereza;
	}
*/

}


void setPompatemp(unsigned char event)
{
	//LCD_wczytywanie_komendy(0x01);
	//clear_line(0);
	//clear_line(1);
	//LCD_pozycjonowanie_kursora(0,0);
	//LCD_string("                ");
	//LCD_pozycjonowanie_kursora(1,0);
	//LCD_string("                ");
	//LCD_pozycjonowanie_kursora(2,0);
	//LCD_string("                ");
	//LCD_pozycjonowanie_kursora(3,0);
	static uint8_t tempPompa;// musi byc static



	//LCD_pozycjonowanie_kursora(0,0);
	//LCD_string("1.Histereza:");

	switch(event)
	{
		case E_UP:
			++tempPompa;
			if(tempPompa>=85)
			{
				tempPompa=0;
				Pompa=85;
			}
			else
			{
				Pompa=tempPompa;
			}
			break;
		case E_DOWN:


			break;
	}
	LCD_pozycjonowanie_kursora(1,12);
	LCD_wyswietlanie_liczby(tempPompa,10);
	//LCD_pozycjonowanie_kursora(3,2);
	//LCD_string("Temp:");



	/*if(tempHistereza>=5)
	{
		tempHistereza=0;
		Histereza=5;
	}
	else
	{
		Histereza=tempHistereza;
	}
*/

}
