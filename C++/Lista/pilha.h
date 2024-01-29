#pragma once
#include "lista.h"

class Pilha : public Lista {
public:
    Pilha();
    Pilha(int d);
    Pilha(const Pilha& p);
    ~Pilha();
    int remove() override;
    int primeiro() override;
};

