#include "tnt.hpp"

#define FORWARD_SPEED 255
#define TURNING_SPEED 240

//Makes the object that is responsible for the tnt minecart
tntClass tntCart(FORWARD_SPEED, TURNING_SPEED);


void setup() {}


void loop() {
  //Updates the state of the tnt minecart
  tntCart.update();
}
