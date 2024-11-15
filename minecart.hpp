#include "SR04.hpp"
#include "IRSensor.hpp"
#include "L298N.hpp"

//Defined terms for where wires are plugged in and constants
//Will most likely be moved or changed to class attributes
#define IR_OUT_LEFT 10
#define IR_OUT_RIGHT 11

#define IN1 2
#define IN2 4
#define IN3 7
#define IN4 8

#define ENA 3
#define ENB 9

#define FORWARD_ACCEL 10
#define RIGHT_ACCEL 5
#define LEFT_ACCEL 5

#define FORWARD_MAX 255
#define RIGHT_MAX 180
#define LEFT_MAX 180

#define FORWARD_START 135
#define RIGHT_START 120
#define LEFT_START 120

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
    minecartClass();

    //Method to make the minecart move
    void move();

protected:
    //Object responsible for the motor controller
    L298NClass L298N;

private:
    //Method to stop minecart
    void stop();

    //Objects responsible for left and right IR Sensors
    IRclass irL;
    IRclass irR;

    //Attribute that holds the minecart's current speed value
    uint8_t speed = 0;

    //Holds the previous robot's state
    direction prevState = STOP;

};