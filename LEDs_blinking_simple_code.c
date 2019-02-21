ifndef F_CPU 
#define F_CPU 8000000UL 
#endif

#include <avr/io.h> 
#include <util/delay.h>

int main(void){
	DDRD = 0xFF; 
	PORTD = 0x0;
	
  	while (1) {
		PORTD = 0b10000001; //0x81   
		_delay_ms(500); 
		PORTD = 0b01000010; //0x42   
		_delay_ms(500); 
		PORTD = 0b00100100; //0x24   
		_delay_ms(500); 
		PORTD = 0b00011000; //0x18   
		_delay_ms(500); 	
  	}
   
  	return 0;
}

