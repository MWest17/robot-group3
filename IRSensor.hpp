#include <stdint.h>



class IRclass {
public:
    IRclass(uint8_t outPin);

    uint8_t getPin();

    bool isReflecting();

private:
    const uint8_t outPin;

};