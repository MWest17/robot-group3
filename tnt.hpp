#pragma once

#include "minecart.hpp"

#define LED_PIN 10
#define FLASHING_SPEED 10


class tntClass : public minecartClass {
public:
    //Default constructor
    tntClass(uint8_t forwardSpeed, uint8_t turningSpeed);

    //Method for moving
    direction update();
    
private:
    //Method to stop the minecart's explosion sequence
    void stopExplode();

    //Method to make the minecart explode 
    void explode();

};