/*
 * GPIO.h
 *
 * Created: 4/11/2017 8:48:47 AM
 *  Author: Ana-Maria
 */ 


#ifndef GPIO_H_
#define GPIO_H_


#ifndef L298_CTRL_DDR 
#define L298_CTRL_DDR DDRD
#endif
#ifndef L298_CTRL_PORT
#define L298_CTRL_PORT PORTD
#endif
#ifndef L298_IN1_PIN
#define L298_IN1_PIN  2
#endif
#ifndef L298_IN2_PIN
#define L298_IN2_PIN  3
#endif
#ifndef L298_EN1_PIN
#define L298_EN1_PIN  4
#endif
#ifndef L298_EN2_PIN
#define L298_EN2_PIN  5
#endif
#ifndef L298_IN3_PIN
#define L298_IN3_PIN  6
#endif
#ifndef L298_IN4_PIN
#define L298_IN4_PIN  7
#endif

void L298_CTRL_PIN_init(void);
#endif /* GPIO_H_ */