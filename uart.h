/*
 * uart.h
 *
 * Created: 2/19/2017 4:31:59 PM
 *  Author: Ana-Maria
 */ 


#ifndef UART_H_
#define UART_H_

void USART_Init(unsigned int baud);
void USART_Transmit (unsigned char data);
unsigned char USART_Receive (void);

volatile unsigned char data2;



#endif /* UART_H_ */