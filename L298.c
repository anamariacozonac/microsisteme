/*
 * L298.c
 *
 * Created: 4/11/2017 9:19:04 AM
 *  Author: Ana-Maria
 */ 

#include "main.h"


inline void L298_en1_to_low(void) {
	L298_PWM_PORT &= ~(1 << L298_EN1_PIN);
}

inline void L298_en1_to_high(void) {
	L298_PWM_PORT |= (1 << L298_EN1_PIN);
}

inline void L298_en2_to_low(void) {
	L298_PWM_PORT &= ~(1 << L298_EN2_PIN);
}

inline void L298_en2_to_high(void) {
	
	L298_PWM_PORT |= (1 << L298_EN2_PIN);
}

inline void L298_in1_to_low(void) {
	L298_CTRL_PORT &= ~(1 << L298_IN1_PIN);
}

inline void L298_in1_to_high(void) {
	L298_CTRL_PORT |= (1 << L298_IN1_PIN);
}

inline void L298_in2_to_low(void) {
	L298_CTRL_PORT &= ~(1 << L298_IN2_PIN);
}

inline void L298_in2_to_high(void) {
	L298_CTRL_PORT |= (1 << L298_IN2_PIN);
}

inline void L298_in3_to_low(void) {
	L298_CTRL_PORT &= ~(1 << L298_IN3_PIN);
}

inline void L298_in3_to_high(void) {
	L298_CTRL_PORT |= (1 << L298_IN3_PIN);
}

inline void L298_in4_to_low(void) {
	L298_CTRL_PORT &= ~(1 << L298_IN4_PIN);
}

inline void L298_in4_to_high(void) {
	L298_CTRL_PORT |= (1 << L298_IN4_PIN);
}

inline void L298_en1_set_pwm( value) {
	L298_PWM_REG_1 = value;
}

inline void L298_en2_set_pwm( value) {
	L298_PWM_REG_2 = value;
}
void L298_Left_Break(void){
	L298_in1_to_high();
	L298_in2_to_high();
	L298_en1_to_high();

}
void L298_Left_Free(void){
	L298_in1_to_low(); 
	L298_in2_to_low();
	L298_en1_to_high();
	}
void L298_Left_Forward(void){
	L298_in1_to_low(); 
	L298_in2_to_high();
	L298_en1_to_high();
}
void L298_Left_Backward(void){
	L298_in1_to_high();
	L298_in2_to_low();
	L298_en1_to_high();
}

void L298_Right_Break(void){
	L298_in3_to_high();
	L298_in4_to_high();
	L298_en2_to_high();
}

void L298_Right_Free(void){
	L298_in3_to_low();
	L298_in4_to_low();
	L298_en2_to_high();
	
}

void L298_Right_Forward(void){
	L298_in3_to_low();
	L298_in4_to_high();
	L298_en2_to_high();
}

void L298_Right_Backward(void){
	L298_in3_to_high();
	L298_in4_to_low();
	L298_en2_to_high();
}
