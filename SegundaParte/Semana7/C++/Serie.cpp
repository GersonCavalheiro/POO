#include "Serie.h"

Serie::Serie(int position) : position(position), value(0) {}

void Serie::newPosition(int newPosition) {
    position = newPosition;
}

std::string Serie::get() {
    return "Position: " + std::to_string(position) + ", Value: " + std::to_string(value);
}

