#include "minecart.hpp"

#include "Arduino.h"

//Creates default 
minecartClass::minecartClass(uint8_t forwardSpeed, uint8_t turningSpeed) : irL(IR_OUT_LEFT), irR(IR_OUT_RIGHT), 
    L298N(IN1, IN2, IN3, IN4, ENA, ENB), forwardSpeed(forwardSpeed), turningSpeed(turningSpeed) {}

//Moves robot
direction minecartClass::update() {
    if(irL.isReflecting() && irR.isReflecting()) { //Robot is on line
        //Go Forward
        L298N.forward(forwardSpeed);
        return FORWARD;

    } else if(irL.isReflecting() && !(irR.isReflecting())) { //Robot's right side is off line
        //Turn Left
        L298N.left(turningSpeed);
        return LEFT;

    } else if(!(irL.isReflecting()) && irR.isReflecting()) { //Robot's left side is off line
        //Turn Right
        L298N.right(turningSpeed);
        return RIGHT;
        
    } else { //Robot is off line entirely
        //Stops the robot
        L298N.stop();  
        return STOP;

    }
}

