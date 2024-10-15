#include "SR04.hpp"

SR04class SR04_1(4, 5);
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(SR04_1.distance());

}