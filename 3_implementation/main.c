#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "led.h"
void peripheral_init(void)
{
  DDRB |= (1 << DDB2)|(1<<DDB3);
  DDRB &= ~(1 << DDB0);
}

int main(void)
{
 
  peripheral_init();
  while (1)
  {
   
    if (!(PINB&(1<<PINB0)))
    {
     
      led_on();
    }
    else
    {
      led_off();
    }

  }
}
