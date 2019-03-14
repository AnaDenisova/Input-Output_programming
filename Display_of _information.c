#include <avr/io.h>
#include "SEG7.H"
#include <util/delay.h>

int main(void) {
	DDRD = 0xFF;
	PORTD = 0x0;
while(1){
	PORTD = _L_;
	_delay_ms(777);
	PORTD = _A_;
  _delay_ms(777);
  PORTD = _b_;
  _delay_ms(777);
  PORTD = _A_;
  _delay_ms(777);
  PORTD = _5_;
  _delay_ms(777);
  PORTD = 0x0;
  _delay_ms(1111);
  PORTD = _J_;
  _delay_ms(777);
  PORTD = _0_;
  _delay_ms(777);
  PORTD = _L_;
  _delay_ms(777);
  PORTD = _A_;
  _delay_ms(777);
  PORTD = _t_;
  _delay_ms(2222);
  }
}
