#ifndef F_CPU
#define F_CPU 8000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>

int main (void) {
  DDRD = 0xFF; 
  PORTD = 0x0; 
  
  while(1){ 
    PORTD |= (1<<PD0)|(1<<PD4); 
    _delay_ms(250); 
    PORTD |= (1<<PD1)|(1<<PD5); 
    _delay_ms(250); 
    PORTD |= (1<<PD2)|(1<<PD6); 
    _delay_ms(250); 
    PORTD |= (1<<PD3)|(1<<PD7); 
    _delay_ms(250); 
    PORTD &= ~((1<<PD0)|(1<<PD7));
    _delay_ms(250); 
    PORTD &= ~((1<<PD1)|(1<<PD6)); 
    _delay_ms(250); 
    PORTD &= ~((1<<PD2)|(1<<PD5)); 
    _delay_ms(250); 
    PORTD &= ~((1<<PD3)|(1<<PD4)); 
    _delay_ms(250); 
  } 
  return 0;
}
