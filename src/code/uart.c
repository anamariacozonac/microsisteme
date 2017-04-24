/*
 * uart.c
 *
 * Created: 2/19/2017 4:31:45 PM
 *  Author: Ana-Maria
 */ 
#include "main.h"

void USART_Init( unsigned int baud )
{
/* Set baud rate */
UBRRH = (unsigned char)(baud>>8);
UBRRL = (unsigned char)baud;
/* Enable receiver and transmitter */
UCSRA =(1<<U2X);//DOUBLE SPEED
UCSRB = (1<<RXEN)|(1<<TXEN)|(1<<RXCIE);
/* Set frame format: 8data, 2stop bit */
UCSRC = (1<<URSEL)|(1<<USBS)|(1<<UCSZ1)|(1<<UCSZ0);

}
//========= function to send data==========
void USART_Transmit( unsigned char data )
{
/* Wait for empty transmit buffer */
while ( !( UCSRA & (1<<UDRE)) )
;
/* Put data into buffer, sends the data */
UDR = data;
}
//======== function to receive data========
unsigned char USART_Receive( void )
{
/* Wait for data to be received */
while ( !(UCSRA & (1<<RXC)) )
;
/* Get and return received data from buffer */
return UDR;
}

