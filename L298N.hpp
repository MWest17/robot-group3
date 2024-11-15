#include <stdint.h> 

class L298NClass {
public:    
    //Constructor
    L298NClass(uint8_t in1, uint8_t in2, uint8_t in3, uint8_t in4, uint8_t ENA, uint8_t ENB);

    //Class methods for controlling the motors' spinning direction and speed
    void forward(uint8_t speed);

    void right(uint8_t speed);

    void left(uint8_t speed);
    
    //Stops the motors from spinning
    void stop();

private:
    //Motor A Pins
    const uint8_t in1, in2;

    //Motor B Pins
    const uint8_t in3, in4;

    //PWM Pins
    const uint8_t ENA, ENB;

    //Sets pins to right mode
    void pinInit();
};


