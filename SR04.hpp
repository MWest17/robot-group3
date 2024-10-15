#include <stdint.h>


class SR04class {
public:
    SR04class();

    SR04class(uint8_t trig, uint8_t echo);

    double distance();

    uint8_t getTrig();

    uint8_t getEcho();

private:
    uint8_t trig, echo;
};

