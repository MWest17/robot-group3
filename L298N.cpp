#include "L298N.hpp"

#include "Arduino.h"


L298NClass::L298NClass(uint8_t in1, uint8_t in2, uint8_t in3, uint8_t in4, uint8_t ENA, uint8_t ENB) : in1(in1), in2(in2), in3(in3), in4(in4), ENA(ENA), ENB(ENB) {}

void L298NClass::forward(uint8_t speed) {
    pinInit();

    //Left Motor Forward
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);

    //Right Motor Forward
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);

    //Motor Speed
    analogWrite(ENA, speed);
    analogWrite(ENB, speed);
}

void L298NClass::right(uint8_t speed) {
    pinInit();

    //Left Motor Forward
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);

    //Right Motor Forward
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);

    //Motor Speed
    analogWrite(ENA, speed);
    analogWrite(ENB, speed);
} //Difference in speed of wheels
//Inverted speed of both wheels

void L298NClass::left(uint8_t speed) {
    pinInit();

    //Left Motor Forward
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);

    //Right Motor Forward
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);

    //Motor Speed
    analogWrite(ENA, speed);
    analogWrite(ENB, speed);
}
    
void L298NClass::stop() {
    pinInit();

    //Left Motor Forward
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);

    //Right Motor Forward
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
}

void L298NClass::pinInit() {
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);

    pinMode(ENA, OUTPUT);
    pinMode(ENB, OUTPUT);
}
