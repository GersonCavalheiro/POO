#pragma once

#include "Serie.h"
#include "Fatorial.h"

class Taylor : public Serie {
public:
    Taylor(int position);

    virtual int compute() override;

private:
    int fatorial(int n);
};

