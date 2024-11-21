#include "minecart.hpp"

#define LED_PIN 10
#define FLASHING_SPEED 50


class tntClass : public minecartClass {
public:
    //Default constructor
    tntClass(uint8_t forwardSpeed, uint8_t turningSpeed);

    //Method for moving
    void update();
    
private:
    //Method for stopping
    void stop();

    //Method to make the explode 
    void explode();

};