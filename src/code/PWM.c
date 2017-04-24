/*
 * PWM.c
 *
 * Created: 4/11/2017 9:25:08 AM
 *  Author: Ana-Maria
 */ 
#include "main.h"

void L298_PWM_Init(void) {
	//Set FastPWM Mode, 10bit(non-inverting mode):
	TCCR1A |= (1 << WGM11) | (1 << WGM10) | (1 << COM1A1) | (1 << COM1B1);
	//Prscl = 64 
	TCCR1B |= (1 << WGM12) | (1 << CS11) | (1 << CS10);

	OCR1A = OCR1B = 0;
}


