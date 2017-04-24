/*
 * L298.h
 *
 * Created: 4/11/2017 8:49:02 AM
 *  Author: Ana-Maria
 */ 


#ifndef L298_H_
#define L298_H_

#include <avr/io.h>
//#include "config.h"

#ifndef USE_TIMER_1
#define USE_TIMER_1
#else
#error cannot use TIMER 1 for l293 : already in use
#endif

void L298_en1_to_low(void);
void L298_en1_to_high(void);
void L298_en2_to_low(void);
void L298_en2_to_high(void);
void L298_in1_to_low(void);
void L298_in1_to_high(void);
void L298_in2_to_low(void);
void L298_in2_to_high(void);
void L298_in3_to_low(void);
void L298_in3_to_high(void);
void L298_in4_to_low(void);
void L298_in4_to_high(void);
void L298_en1_set_pwm(int pwm_frecv);
void L298_en2_set_pwm(int pwm_frecv);
//void L298_Set_Speed(int SLvalue);

void L298_Left_Break(void);
void L298_Left_Free(void);
void L298_Left_Forward(void);
void L298_Left_Backward(void);
void L298_Right_Break(void);
void L298_Right_Free(void);
void L298_Right_Forward(void);
void L298_Right_Backward(void);

#endif /* L298_H_ */