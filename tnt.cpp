#include "tnt.hpp"

#include "Arduino.h"

//Default constructor uses parent's contstructor
tntClass::tntClass(uint8_t forwardSpeed, uint8_t turningSpeed) : minecartClass::minecartClass(forwardSpeed, turningSpeed) {}

//Method to move tnt minecart
void tntClass::update() {
    minecartClass::update();
}

//Makes the tnt block explode
void tntClass::explode() {
    pinMode(LED_PIN, OUTPUT);

    analogWrite(LED_PIN, FLASHING_SPEED);    
}

//Stops robot and makes it explode
void tntClass::stop() {
    L298N.stop();
    explode();    
}
