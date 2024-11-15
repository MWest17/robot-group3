#include "tnt.hpp"


tntClass::tntClass() : minecartClass::minecartClass() {

}

void tntClass::move() {
    minecartClass::move();
}

void tntClass::explode() {
    //Start slowly flashing, then increase speed of flashing gradually until an explosion where all LED's come on
    
    //Boom

}


void tntClass::stop() {
    L298N.stop();
    explode();    
}
