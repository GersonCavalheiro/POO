#include "lista.h"

Lista::No::No(int d, No* p) : dado(d), prox(p) {}

void Lista::No::set(int d, No* p) {
    dado = d;
    prox = p;
}

Lista::No* Lista::No::get() {
    return prox;
}

int Lista::No::getDado() {
    return dado;
}

Lista::Lista() : minhaLista(nullptr), tamLista(0) {}

Lista::Lista(int d) : tamLista(1) {
    minhaLista = new No(d);
}

Lista::Lista(const Lista& l) : tamLista(l.tamanho()) {
    if (l.minhaLista == nullptr) {
        minhaLista = nullptr;
    } else {
        minhaLista = new No(l.minhaLista->getDado());
        No* novoNo = minhaLista;
        No* original = l.minhaLista->get();

        while (original != nullptr) {
            novoNo->prox = new No(original->getDado());
            novoNo = novoNo->prox;
            original = original->get();
        }
    }
}

Lista::~Lista() {
    No* atual = minhaLista;
    No* proximo = nullptr;

    while (atual != nullptr) {
        proximo = atual->get();
        delete atual;
        atual = proximo;
    }

    minhaLista = nullptr;
}

void Lista::insere(int d) {
    No* novoNo = new No(d, minhaLista);
    minhaLista = novoNo;
    tamLista++;
}

