#include "SR04.hpp"

SR04class::SR04class(int vcc, int echo) {
        this->vcc = vcc;
        this->echo = echo;    
    }

int SR04class::distance() {
    
}


int SR04class::getVCC() {
    return vcc;
}

int SR04class::getEcho() {
    return echo;
}