#include "fila.h"

Fila::Fila() : Lista() {}

Fila::Fila(int d) : Lista(d) {}

Fila::Fila(const Fila& f) : Lista(f) {}

Fila::~Fila() {}

int Fila::remove() {
    if (minhaLista == nullptr) {
        return -1; // Fila vazia
    }

    No* temp = minhaLista;
    No* anterior = nullptr;

    while (temp->get() != nullptr) {
        anterior = temp;
        temp = temp->get();
    }

    int valorRemovido = temp->getDado();

    if (anterior != nullptr) {
        delete temp;
        anterior->prox = nullptr;
    } else {
        // Removendo o único elemento da fila
        delete temp;
        minhaLista = nullptr;
    }

    tamLista--;

    return valorRemovido;
}

int Fila::primeiro() {
    if (minhaLista == nullptr) {
        return -1; // Fila vazia
    }

    No* temp = minhaLista;

    while (temp->get() != nullptr) {
        temp = temp->get();
    }

    return temp->getDado();
}

