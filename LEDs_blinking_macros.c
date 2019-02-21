ifndef F_CPU
#define F_CPU 8000000UL
#endif
#include <avr/io.h>

int main(void){
    DDRB |= _BV(0); 
    PORTB &= ~_BV(0); 
    DDRB &= ~_BV(1); 
    PORTB |= _BV(1); 
    while(1){
      if (bit_is_clear(PINB, 1)) {
        PORTB |= _BV(0);
        loop_until_bit_is_set(PINB, 1);
        PORTB &= ~_BV(0);
      }
    }
}
