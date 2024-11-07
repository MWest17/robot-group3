#include <stdint.h> 

class L298NClass {
public:    
    L298NClass(uint8_t in1, uint8_t in2, uint8_t in3, uint8_t in4);

    //motorSpeed(int speedLeft, int speedRight) //negative number is backwards speed on wheel

    /*
        left(speed, duration)
        right(speed, duration)  right(speed, degrees)
        forward(speed) 
    */

private:
    //Motor A Pins
    const uint8_t in1, in2;

    //Motor B Pins
    const uint8_t in3, in4;

    //PWM Pins
    //const uint8_t ENA, ENB;

};


