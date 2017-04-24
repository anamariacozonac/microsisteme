/*
 * PWM.h
 *
 * Created: 4/11/2017 8:49:17 AM
 *  Author: Ana-Maria
 */ 


#ifndef PWM_H_
#define PWM_H_

#ifndef L298_PWM_PORT
#define L298_PWM_PORT PORTD
#endif
#ifndef L298_PWM_DDR
#define L298_PWM_DDR  DDRD
#endif
#ifndef L298_PWM_REG_1
#define L298_PWM_REG_1  OCR1B
#endif
#ifndef L298_PWM_REG_2
#define L298_PWM_REG_2  OCR1A
#endif

void L298_PWM_Init(void);

#endif /* PWM_H_ */