#include "minecart.hpp"

minecartClass::minecartClass() : irL(IR_OUT_LEFT), irR(IR_OUT_RIGHT), L298N(IN1, IN2, IN3, IN4, ENA, ENB) {


}


void minecartClass::move() {
    if(irL.isReflecting() && irR.isReflecting()) { //Is on line
        if (prevState == FORWARD) {
            if (speed < FORWARD_MAX) {
                speed += FORWARD_ACCEL;
            }
            L298N.forward(speed);
        } else {
            speed = FORWARD_START;
            L298N.forward(speed);
            prevState = FORWARD;
        }
        
    } else if(irL.isReflecting() && !(irR.isReflecting())) { //Robot right side is off line
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
    } else if(!(irL.isReflecting()) && irR.isReflecting()) { //Robot left side is off line
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

void minecartClass::stop() {
    L298N.stop();    
}