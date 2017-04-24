/*
 * motor.h
 *
 * Created: 4/11/2017 10:44:04 AM
 *  Author: Ana-Maria
 */ 


#ifndef MOTOR_H_
#define MOTOR_H_
#define MAX_PWM 1000
#define SPEED_VALUE 10
#define D_DIRECTION 10
#include "main.h"
int MotorLeft_Speed_Up(int ML_Speed);
int MotorLeft_Speed_Dwn(int ML_Speed);
int MotorLeft_Set_Speed(int SpeedLeft);

int MotorRight_Speed_Up(int MR_Speed);
int MotorRight_Speed_Dwn(int MR_Speed);
int MotorRight_Set_Speed(int SpeedRight);

#endif /* MOTOR_H_ */