#pragma once

#include "Serie.h"

class Harmonica : public Serie {
public:
    Harmonica(int position);

    virtual int compute() override;
};

