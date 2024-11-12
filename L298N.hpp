#include <stdint.h> 

class L298NClass {
public:    
    L298NClass(uint8_t in1, uint8_t in2, uint8_t in3, uint8_t in4, uint8_t ENA, uint8_t ENB);

    void forward(uint8_t speed);

    void right(uint8_t speed); //Difference in speed of wheels         Speed of a constant turm

    void left(uint8_t speed);
    
    void stop();

private:
    //Motor A Pins
    const uint8_t in1, in2;

    //Motor B Pins
    const uint8_t in3, in4;

    //PWM Pins
    const uint8_t ENA, ENB;

    void pinInit();

   // void motorSpeed(uint8_t speedL, int speedR);

};


