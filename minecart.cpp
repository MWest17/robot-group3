#include "minecart.hpp"

//Creates default 
minecartClass::minecartClass() : irL(IR_OUT_LEFT), irR(IR_OUT_RIGHT), L298N(IN1, IN2, IN3, IN4, ENA, ENB) {}

//Moves robot
void minecartClass::move() {
    if(irL.isReflecting() && irR.isReflecting()) { //Robot is on line
        //If the robot hasn't changed its state, accelerate
        if (prevState == FORWARD) {
            //If the speed is less than the direction's max speed, accelerate
            if (speed < FORWARD_MAX) {
                speed += FORWARD_ACCEL;
            }
            //Go forward
            L298N.forward(speed);
        } else {
            //If just starting to go forward, go at starting forward speed
            speed = FORWARD_START;
            //Go forward
            L298N.forward(speed);
            //Set previous state to forward
            prevState = FORWARD;
        }
        
    } else if(irL.isReflecting() && !(irR.isReflecting())) { //Robot's right side is off line
        //Turn Right
        if (prevState == RIGHT) {
            if (speed < RIGHT_MAX) {
                speed += RIGHT_ACCEL;
            }
            L298N.right(speed);
        } else {
            speed = RIGHT_START;
            L298N.right(speed);
            prevState = RIGHT;
        }
    } else if(!(irL.isReflecting()) && irR.isReflecting()) { //Robot's left side is off line
        //Turn Left
        if (prevState == LEFT) {
            if (speed < LEFT_MAX) {
                speed += LEFT_ACCEL;
            }
            L298N.left(speed);
        } else {
            speed = LEFT_START;
            L298N.left(speed);
            prevState = LEFT;
        }
    } else { //Robot is off line entirely
        //Stop
        stop();
    }
}

//Stops the robot
void minecartClass::stop() {
    L298N.stop();    
}