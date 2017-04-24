/*
 * GPIO.c
 *
 * Created: 4/11/2017 9:24:56 AM
 *  Author: Ana-Maria
 */ 
#include "main.h"

void L298_CTRL_PIN_init(void){
     L298_CTRL_DDR |= ((1 << L298_IN1_PIN)|
					  (1 << L298_IN2_PIN)|
					  (1 << L298_IN3_PIN)|
					  (1 << L298_IN4_PIN));

	L298_CTRL_PORT &= ~((1 << L298_IN1_PIN)|
						(1 << L298_IN2_PIN)|
						(1 << L298_IN3_PIN)|
						(1 << L298_IN4_PIN));
						
	L298_PWM_DDR |= ((1 << L298_EN1_PIN)|
					 (1 << L298_EN2_PIN));

	L298_PWM_PORT &= ~((1 << L298_EN1_PIN)|
						(1 << L298_EN2_PIN));
}
