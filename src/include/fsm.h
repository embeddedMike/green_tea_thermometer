/*
 * fsm.h
 *
 *  Created on: -
 *      Author: Michal Balicki
 */


#include "config.h"
#include "lcd.h"

#ifndef FSMMENU_FSMMENU_H_
#define FSMMENU_FSMMENU_H_

#define E_IDDLE		0
#define E_UP 		1
#define E_DOWN 		2
#define E_OK 		3
#define E_EXIT 		4

extern uint8_t Histereza;
extern uint8_t Piec;
extern uint8_t Pompa;
extern volatile unsigned char currentMenu;
extern volatile unsigned char menuEvent;

void zmianaMenu(void);
void klawiszOdczyt(void);
void menuIddle(void);
void setHistereza(unsigned char event);
void setPiectemp(unsigned char event);
void setPompatemp(unsigned char event);

#endif /* FSMMENU_FSMMENU_H_ */
