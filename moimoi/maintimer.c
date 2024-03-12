#include <REGX51.H>
#include "timer.h"
#define LED P2_0
int main(){
	LED = 0 ;
	while(1){
		LED = ~LED;
		DELAY_50ms(40);
		LED = 0;
		DELAY_50ms(20);
		}
}