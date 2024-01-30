#pragma once
#include "lista.h"

class Fila : public Lista {
public:
    Fila();
    Fila(int d);
    Fila(const Fila& f);
    ~Fila();
    int remove() override;
    int primeiro() override;
};

