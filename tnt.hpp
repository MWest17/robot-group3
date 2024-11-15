#include "minecart.hpp"


class tntClass : public minecartClass {
public:
    //Default constructor
    tntClass();

    //Method for moving
    void move();
    
private:
    //Method for stopping
    void stop();

    //Method to make the explode 
    void explode();

    //Attributes for holding LED Pin numbers
    //uint8_t ledPins[] = {};
    //uint8_t led;

};