/*
 * LCD.h
 *
 *  Created on: 1 maj 2016
 *      Author: Micha³
 */

#include "config.h"


#ifndef LCD_LCD_H_
#define LCD_LCD_H_

void gpio_inicjalizacja(void);
void LCD_wystlanie_bajtu_na_raty(uint8_t bajt);
void LCD_inicjalizacja(void);
void LCD_wczytywanie_komendy(uint8_t komenda);
void LCD_wystlanie_znaku_na_raty(uint8_t ASCII);
void LCD_string(char* Napis);
void LCD_pozycjonowanie_kursora(uint8_t y, uint8_t x);
void LCD_wyswietlanie_liczby(uint8_t liczba, uint8_t rodzaj);
void lcd_char(char c);
void clear_line( uint8_t line );
void lcd_defchar(uint8_t nr, uint8_t *def_znak);
#endif /* LCD_LCD_H_ */
