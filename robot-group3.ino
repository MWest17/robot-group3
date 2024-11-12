#include "SR04.hpp"
#include "IRSensor.hpp"

#define IR_OUT_LEFT 8
#define IR_OUT_RIGHT 9


IRclass irL(IR_OUT_LEFT);
IRclass irR(IR_OUT_RIGHT);

void setup() {
  Serial.begin(9600);
}

void loop() {

  if(irL.isReflecting() && irR.isReflecting()) { //Is on line
    //Go Straight
  } else if(irL.isReflecting() && !(irR.isReflecting())) { //Robot right side is off line
    //Turn Right
  } else if(!(irL.isReflecting()) && irR.isReflecting()) { //Robot left side is off line
    //Turn Left
  } else { //Robot is off line entirely
    //Stop
  }

}
