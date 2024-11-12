#include <stdint.h>



class IRclass {
public:
    //Must create object with pin which will be hooked up to output
    IRclass(uint8_t outPin);

    uint8_t getPin();

    //Returns true if sensor detects reflected IR Light
    bool isReflecting();

private:
    const uint8_t outPin;

};