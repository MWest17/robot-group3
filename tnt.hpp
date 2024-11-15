#include "minecart.hpp"


class tntClass : public minecartClass {
public:
    tntClass();

    void move();
    
private:
    void stop();

    void explode();

    //uint8_t ledPins[] = {};
    uint8_t led;
    //uint8_t ;

};