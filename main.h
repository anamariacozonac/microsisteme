/*
 * main.h
 *
 * Created: 4/11/2017 8:21:57 AM
 *  Author: Ana-Maria
 */ 


#ifndef MAIN_H_
#define MAIN_H_
#define dS 
#include <avr/io.h>
#include <avr/interrupt.h>
#include "motor.h"
#include "CAR.h"
#include "GPIO.h"
#include "PWM.h"
#include "L298.h"
#include "typedefs.h"
#include "uart.h"
#define  F_CPU 1000000UL

#define HI(x) ((x)>>6)
#define LO(x) ((x)& 0xFF)





#endif /* MAIN_H_ */