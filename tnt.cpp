#include "tnt.hpp"

#include "Arduino.h"

//Default constructor uses parent's contstructor
tntClass::tntClass(uint8_t forwardSpeed, uint8_t turningSpeed) : minecartClass::minecartClass(forwardSpeed, turningSpeed) {}

//Method to update tnt minecart's state
direction tntClass::update() {
   direction dir = minecartClass::update();
   switch (dir) {
    case FORWARD:
    case RIGHT:
    case LEFT: 
        stopExplode();
        break;
    case STOP: 
        explode();
        break;
   }

   return dir;
}

void tntClass::stopExplode() {
    pinMode(LED_PIN, OUTPUT);

    analogWrite(LED_PIN, 0);
}

//Makes the tnt block explode
void tntClass::explode() {
    pinMode(LED_PIN, OUTPUT);

    analogWrite(LED_PIN, FLASHING_SPEED);    
}

/*
explode()
    Check if timer is started
        Check if timer is above threshold
            Change LED state
    Else
        Start timer
    
stopExplode()
    Stop timer
    Turn off LED's
*/
