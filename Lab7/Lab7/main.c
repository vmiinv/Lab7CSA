/*
 * GccApplication1.c
 *
 * Created: 22.04.2021 19:14:43
 * Author : amina
 */ 

#include <avr/io.h>
#include <util/delay.h>

char array[] = "01000001";
char array2[];
int n = 8;

void dot(void){
	_delay_ms(200);
	PORTC = 0b00000001;
	_delay_ms(200);
	PORTC = 0b00000000;
	
} 

void dot2(void){
	_delay_ms(500);
	PORTC = 0b00000011;
	_delay_ms(500);
	PORTC = 0b00000000;
	
}


int main(void)
{
	DDRA = 0x00000000;
	DDRC = 0x00000001;
	PORTC = 0x00000000;
	
    while (1) 
    {
		
			 for(int i=0 ; i<=n; i++) {
				 
				 if (!(PINA & 0b00000001)) {
					 
					array2[i] = 1;
					
				 }  if (!(PINA & 0b000010)) {
					 
					 array2[i] = 0;
					 
				 }/* else if (!(PINA & 0b000100)) {
					 
					 delete(array2[i]);
					 
				 }*/
				 
			 }
				 
				
		
 }
  if(strcmp(array[1], array2[0]) == 0){
	  
	  dot();
	  
	  } else {
	  
	  dot2();
	  
  }
  _delay_ms(100);
				
				
}

