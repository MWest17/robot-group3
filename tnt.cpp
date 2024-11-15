#include "tnt.hpp"

//Default constructor uses parent's contstructor
tntClass::tntClass() : minecartClass::minecartClass() {}

//Method to move tnt minecart
void tntClass::move() {
    minecartClass::move();
}

//Makes the tnt block explode
void tntClass::explode() {
    //Start slowly flashing, then increase speed of flashing gradually until an explosion where all LED's come on
    
    //Boom

}

//Stops robot and makes it explode
void tntClass::stop() {
    L298N.stop();
    explode();    
}
