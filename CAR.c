/*
 * CAR.c
 *
 * Created: 4/11/2017 9:18:50 AM
 *  Author: Ana-Maria
 */ 
#include "main.h"

uint8_t speedValue;

void Car_Speed_Up(int dSup){
	MotorLeft_Speed_Up(dSup);
	MotorRight_Speed_Up(dSup);
}
void Car_Speed_Dwn(int dSdwn){
	MotorLeft_Speed_Dwn(dSdwn);
	MotorRight_Speed_Dwn(dSdwn);
}
void Car_Turn_Left(int dSL){
	MotorLeft_Speed_Dwn(dSL);
	MotorRight_Speed_Up(dSL);
}
void Car_Turn_Right(int dSR){
	MotorLeft_Speed_Up(dSR);
	MotorRight_Speed_Dwn(dSR);
}
void Car_Stop(void){
	L298_en1_set_pwm(0);
	L298_en2_set_pwm(0);
}
void Car_Free(void){
	L298_Left_Free();
	L298_Right_Free();
}


void Car_Control(char cmd){
	 speedValue=SPEED_VALUE;
	switch(cmd){
		case 'W':Car_Speed_Up(speedValue); printf("\rCar Speed Up"); break;
		 case 'w':Car_Speed_Up(speedValue);printf("\rCar Speed Up"); break;
		case 'S':Car_Speed_Dwn(speedValue); printf("\rCar Speed Down");break;
		 case 's':Car_Speed_Dwn(speedValue); printf("\rCar Speed Down");break;
		case 'A':Car_Turn_Left(speedValue);printf("\rCar Turn Left");break;
		 case 'a':Car_Turn_Left(speedValue);printf("\rCar Turn Left");break;
		case 'D':Car_Turn_Right(speedValue); printf("\rCar Turn Right");break;
		  case 'd':Car_Turn_Right(speedValue);printf("\rCar Turn Right"); break;
		case ' ':Car_Stop();printf("\rCar Stop");break;
		case 'Z':Car_Free();printf("\rCar Free"); break;
		   case 'z':Car_Free();printf("\rCar Free");break;	
		   default: break;	
	}

}