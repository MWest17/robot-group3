#pragma once

#include "SR04.hpp"
#include "IRSensor.hpp"
#include "L298N.hpp"

//Pins which the hardware is connected to 
#define IR_OUT_LEFT 10
#define IR_OUT_RIGHT 11

#define IN1 2
#define IN2 4
#define IN3 7
#define IN4 8

#define ENA 3
#define ENB 9



//Enum for direction of movement, for code readability
typedef enum direction {
    FORWARD,
    RIGHT,
    LEFT,
    STOP
} direction;


class minecartClass {
public:
    //Default constructor
    minecartClass(uint8_t forwardSpeed, uint8_t turningSpeed);

    //Method to make the minecart move
    direction update();

protected:
    //Object responsible for the motor controller
    L298NClass L298N;

private:
    //Objects responsible for left and right IR Sensors
    IRclass irL;
    IRclass irR;

    //Holds robot's speed values
    const uint8_t forwardSpeed;
    const uint8_t turningSpeed;

};