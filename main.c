/*
 * Dispozitive_de_actionare_LAB3.c
 *
 * Created: 4/11/2017 8:13:40 AM
 *  Author: Ana-Maria
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdio.h>
#include "main.h"

char valoare;

static FILE mystr = FDEV_SETUP_STREAM(USART_Transmit, USART_Receive, _FDEV_SETUP_RW);

int main(void)
{	
        motor_init();
	  stdin = &mystr;
	  stdout = &mystr;
	   USART_Init(12);
        printf("\r*******************************************************");
		printf("\r=                   CAR CONTROL                       =");
		printf("\r=   W->Speed Up                                       =");
		printf("\r=   S->Speed Down                                     =");
		printf("\r=   A->Car Turn Left                                  =");
		printf("\r=   D->Car Turn Right                                 =");
	    printf("\r=   Z->Car Stop                                       =");
		printf("\r=   Space->Car Free                                   =");
		printf("\r*****************************************************\r");
    while(1)
    { 
		scanf("%c",&valoare);
	        	Car_Control(valoare);
        
    }
} 

