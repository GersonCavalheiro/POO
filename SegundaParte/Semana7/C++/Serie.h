#pragma once

#include <string>

class Serie {
protected:
    int position;
    int value;

public:
    Serie(int position);
    void newPosition(int newPosition);
    virtual int compute() = 0;
    std::string get();
};

