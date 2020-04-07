#include "mbed.h"


Ticker time_up;

DigitalOut redLED(LED1);


void blink(){

    redLED = !redLED;

}


int main(){

    time_up.attach( &blink, 1 );

    while(1);

}