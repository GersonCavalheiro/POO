#pragma once

#include "Serie.h"

class Fatorial : public Serie {
public:
    Fatorial(int position);

    virtual int compute() override;
};

