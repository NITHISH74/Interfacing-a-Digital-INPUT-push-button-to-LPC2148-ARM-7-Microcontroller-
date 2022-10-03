#include<LPC214x.h>
#define led (1<<2)     // header file
#define sw (1<<10)      //led macro for pin 2 of port0
int main(void)           //sw macro for pin 10 of port0
{
	unsigned int x;
	IO0DIR|=(~sw);      //config p1.24 - p1.31 as input
	IO0DIR|=led;        //config p1.16 - p1.23 as output
	while(1)
	{
		x = IOPIN0 & sw;      // save staus 
		if(x==sw)          //if switch open
		{
			IOCLR0|=led;                  //led off
	  }
		else
		{
			IOSET0|=led;                //led on
		}
		
}
	}