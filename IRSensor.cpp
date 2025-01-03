#include "IRSensor.hpp"

#include "Arduino.h"

//Constructor where output pin is given and then stored in member variable
IRclass::IRclass(uint8_t outPin) : outPin(outPin) {}

bool IRclass::isReflecting() {
    //Making sure pin is on input
    pinMode(outPin, INPUT);

    //Returning true if reflection/path is not clear, and false if no reflection/path is clear
    return !(digitalRead(outPin));

}