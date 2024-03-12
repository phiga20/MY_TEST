#include <REGX51.H>

void DELAY_50ms(unsigned int value){
	while(value>0){
	TMOD = 0x01;
	TH0 = 0x05;
	TL0 = 0xAE;
	TR0=1;
	while(!TF0);
	TF0=0;
	TR0=0;
	value--;
	}
}
void delay_1ms(int time){
	while(time>0){
	TM0D = 0x01;
	TH0 = 0xFC;
	TL0 = 0x66;
	TR0 = 1;
    while(TF0=0){
  };
    TF0=1;
	TR0=0;
 }
}