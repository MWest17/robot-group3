#include "L298N.hpp"

#include "Arduino.h"

//Saves all pins given to class attributes and sets pins to right modes
L298NClass::L298NClass(uint8_t in1, uint8_t in2, uint8_t in3, uint8_t in4, uint8_t ENA, uint8_t ENB) : in1(in1), in2(in2), in3(in3), in4(in4), ENA(ENA), ENB(ENB) {
    pinInit();
}

//Makes motors both spin forward at speed given
void L298NClass::forward(uint8_t speed) {
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

//Makes Motor A (Left), spin forward, and Motor B (Right), spin backwards
void L298NClass::right(uint8_t speed) {
    //Left Motor Forward
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);

    //Right Motor Backwards
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);

    //Motor Speed
    analogWrite(ENA, speed);
    analogWrite(ENB, speed);
} 

//Makes Motor A (Left), spin backwards, and Motor B (Right), spin forward
void L298NClass::left(uint8_t speed) {
    //Left Motor Backwards
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);

    //Right Motor Forward
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);

    //Motor Speed
    analogWrite(ENA, speed);
    analogWrite(ENB, speed);
}
    
//Makes both motors stop spinning
void L298NClass::stop() {
    //Left Motor Forward
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);

    //Right Motor Forward
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
}

//Sets all 6 pins to output
void L298NClass::pinInit() {
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);

    pinMode(ENA, OUTPUT);
    pinMode(ENB, OUTPUT);
}
