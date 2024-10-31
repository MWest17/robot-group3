#include "SR04.hpp"
#include "L298N.hpp"

SR04class SR04_1(12, 11);
void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(500);
  Serial.println(SR04_1.distance());
}