#include "mbed.h"

DigitalOut out1(PB_5);
DigitalOut out2(PB_4);
DigitalOut out3(PA_9);
DigitalOut out4(PC_7);

uint8_t buf1;
uint8_t buf2;
uint8_t buf3;
uint8_t buf4;

DigitalIn in1(PA_3);
DigitalIn in2(PA_2);
DigitalIn in3(PA_10);
DigitalIn in4(PB_3);


int main() {
	//int count=0,var_off_time=1,var_on_time=9,var_period=10;
while(1)
{	
	buf1=in1.read();
	buf2=in2.read();
	buf3=in3.read();
	buf4=in4.read();
	if(buf1==1)
	{
		out1=1;
	}
	else if(buf1==0)
	{
		out1=0;
	}
	if(buf2==1)
	{
		out2=1;
	}
	else if(buf2==0)
	{
		out2=0;
	}
	if(buf3==1)
	{
		out3=1;
	}
	else if(buf3==0)
	{
		out3=0;
	}
	if(buf4==1)
	{
		out4=1;
	}
	else if(buf4==0)
	{
		out4=0;
	}
		
wait(0.25);

}
}
