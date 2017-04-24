/*
 * motor.c
 *
 * Created: 4/11/2017 10:43:49 AM
 *  Author: Ana-Maria
 */ 
#include "main.h"

volatile int motor1_current_pwm = 0;
volatile int motor2_current_pwm = 0;

int motor1_get_pwm(void) {
	return motor1_current_pwm;
}
int motor2_get_pwm(void) {
	return motor2_current_pwm;
}
void motor_init(void) {
    L298_CTRL_PIN_init();
	L298_PWM_Init();
	motor1_current_pwm = 0;
	motor2_current_pwm = 0;
}
int MotorLeft_Speed_Up(int ML_Speed){
	return MotorLeft_Set_Speed(motor1_current_pwm + ML_Speed);
}

int MotorLeft_Speed_Dwn(int ML_Speed){
		return MotorLeft_Set_Speed(motor1_current_pwm - ML_Speed);		
}
//limitare viteza
int MotorLeft_Set_Speed(int SpeedLeft){
	//limit max speed
	if(SpeedLeft>MAX_PWM)
	    SpeedLeft=MAX_PWM;
	//limit min speed
	else if(SpeedLeft<-MAX_PWM)
		SpeedLeft=-MAX_PWM;
		
	if(SpeedLeft>0){
      L298_Left_Forward();
	L298_en1_set_pwm(SpeedLeft);
	}
	else if(SpeedLeft<0) {
     L298_Left_Backward();
      L298_en1_set_pwm((-1)*SpeedLeft);
}
	else
	  L298_Left_Break();
	//motor1_current_pwm=SpeedLeft;
	return motor1_current_pwm=SpeedLeft;
}

int MotorRight_Speed_Up(int MR_Speed){
	return MotorRight_Set_Speed(motor2_current_pwm + MR_Speed);
}

int MotorRight_Speed_Dwn(int MR_Speed){
	return MotorRight_Set_Speed(motor2_current_pwm - MR_Speed);
}
//limitare viteza
int MotorRight_Set_Speed(int SpeedRight){
	//LIMIT SPEED MAX AND MIN
	if(SpeedRight>MAX_PWM)
	    SpeedRight=MAX_PWM;
	else if(SpeedRight<((-1)*MAX_PWM))
		SpeedRight=-MAX_PWM;
		
	if(SpeedRight>0){//fwd
      L298_Right_Forward();
   L298_en2_set_pwm(SpeedRight);
	}
	else if(SpeedRight<0){//BWD
   L298_Right_Backward();
  L298_en2_set_pwm((-1)*SpeedRight);
	}//BRK
	else L298_Right_Break();

	return motor2_current_pwm=SpeedRight;
}

