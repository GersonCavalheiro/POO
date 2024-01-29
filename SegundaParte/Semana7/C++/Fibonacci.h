#pragma once

#include "Serie.h"

class Fibonacci : public Serie {
public:
    Fibonacci(int position);

    virtual int compute() override;
};

