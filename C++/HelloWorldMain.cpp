// HelloWorld.cpp

#include "HelloWorld.h"
#include <iostream>

HelloWorld::HelloWorld(std::string message) : message(message) {}

void HelloWorld::greet() {
    std::cout << message << std::endl;
}

