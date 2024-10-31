#include "SR04.hpp"

#include "Arduino.h"

#define TRIGGER_DELAY 10
#define SOUND_CONSTANT 0.017 //microseconds per inch 

SR04class::SR04class(uint8_t trig, uint8_t echo) : trig(trig), echo(echo) {   
        pinMode(trig, OUTPUT);
        pinMode(echo, INPUT);
    }

double SR04class::distance() {
    //Sensor Pins Initialization
    pinMode(trig, OUTPUT);
    pinMode(echo, INPUT);
    digitalWrite(trig, LOW);
    delayMicroseconds(2);
    
    //Triggering Sensor
    digitalWrite(trig, HIGH); //Sending trigger signal
    delayMicroseconds(TRIGGER_DELAY); //Waiting for 10 micro seconds
    digitalWrite(trig, LOW); //Turning off trigger signal

    //Returning distance based on length of pulse multiplied by the inverse of the speed of sound
    return (pulseIn(echo, HIGH) * SOUND_CONSTANT); //In centimeters
}


uint8_t SR04class::getTrig() {
    return trig;
}

uint8_t SR04class::getEcho() {
    return echo;
}