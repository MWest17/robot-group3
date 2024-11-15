#include "tnt.hpp"


tntClass tntCart;


void setup() {
  Serial.begin(9600);
}


void loop() {
  tntCart.move();
}
