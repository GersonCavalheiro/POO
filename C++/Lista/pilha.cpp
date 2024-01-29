#include "pilha.h"

Pilha::Pilha() : Lista() {}

Pilha::Pilha(int d) : Lista(d) {}

Pilha::Pilha(const Pilha& p) : Lista(p) {}

Pilha::~Pilha() {}

int Pilha::remove() {
    if (minhaLista == nullptr) {
        return -1; // Pilha vazia
    }

    No* temp = minhaLista;
    minhaLista = minhaLista->get();
    int valorRemovido = temp->getDado();
    delete temp;
    tamLista--;

    return valorRemovido;
}

int Pilha::primeiro() {
    if (minhaLista == nullptr) {
        return -1; // Pilha vazia
    }

    return minhaLista->getDado();
}

