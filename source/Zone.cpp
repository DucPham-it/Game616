#include "header/Zone.h"

Zone::Zone(int range) {
    this->range = range;
}

int Zone::getZone(){
    return this->range;
};

void Zone::setZone(int newRange){
    this->range = newRange;
};