#pragma once

class Lista {
protected:
    struct No {
        int dado;
        No* prox;
        No(int d, No* p = nullptr);
        void set(int d, No* p = nullptr);
        No* get();
        int getDado();
    };

    No* minhaLista;
    int tamLista;

public:
    Lista();
    Lista(int d);
    Lista(const Lista& l);
    virtual ~Lista();
    void insere(int d);
    virtual int remove() = 0;
    virtual int primeiro() = 0;
    int tamanho() const { return tamLista; }
};

