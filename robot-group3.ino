#include "tnt.hpp"

//Makes the object that is responsible for the tnt minecart
//tntClass tntCart;
minecartClass minecart;

void setup() {
  Serial.begin(9600);
}


void loop() {
  //Makes the tnt minecart move
  //tntCart.move();
  minecart.move();
}
