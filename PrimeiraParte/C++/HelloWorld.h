// HelloWorld.h

#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <string>

class HelloWorld {
private:
    std::string message;

public:
    HelloWorld(std::string message);
    void greet();
};

#endif

