#include <iostream>

class Lista {
protected:
    struct No {
        int dado;
        No* prox;
        No(int d, No* p = nullptr) : dado(d), prox(p) {}
        void set(int d, No* p = nullptr) {
            dado = d;
            prox = p;
        }
        No* get() {
            return prox;
        }
        int getDado() {
            return dado;
        }
    };

    No* minhaLista;
    int tamLista;

public:
    Lista() : minhaLista(nullptr), tamLista(0) {}
    Lista(int d) : tamLista(1) {
        minhaLista = new No(d);
    }
    Lista(const Lista& l) : tamLista(l.tamLista) {
        if (l.minhaLista) {
            minhaLista = new No(l.minhaLista->getDado());

            No* atual = minhaLista;
            No* lAtual = l.minhaLista->get();

            while (lAtual) {
                atual->prox = new No(lAtual->getDado());
                atual = atual->prox;
                lAtual = lAtual->get();
            }
        } else {
            minhaLista = nullptr;
        }
    }

    virtual void insere(int d) = 0;
    virtual int remove() = 0;
    virtual int primeiro() = 0;

    int tamanho() const {
        return tamLista;
    }
};

class Pilha : public Lista {
public:
    Pilha() : Lista() {}

    void insere(int d) override {
        tamLista++;
        No* novo = new No(d, minhaLista);
        minhaLista = novo;
    }

    int remove() override {
        if (minhaLista) {
            tamLista--;
            int removido = minhaLista->getDado();
            No* temp = minhaLista;
            minhaLista = minhaLista->get();
            delete temp;
            return removido;
        } else {
            // Tratar lista vazia
            return -1;
        }
    }

    int primeiro() override {
        if (minhaLista) {
            return minhaLista->getDado();
        } else {
            // Tratar lista vazia
            return -1;
        }
    }
};

class Fila : public Lista {
public:
    Fila() : Lista() {}

    void insere(int d) override {
        tamLista++;
        No* novo = new No(d);

        if (!minhaLista) {
            minhaLista = novo;
        } else {
            No* atual = minhaLista;
            while (atual->get()) {
                atual = atual->get();
            }
            atual->prox = novo;
        }
    }

    int remove() override {
        if (minhaLista) {
            tamLista--;
            int removido = minhaLista->getDado();
            No* temp = minhaLista;
            minhaLista = minhaLista->get();
            delete temp;
            return removido;
        } else {
            // Tratar lista vazia
            return -1;
        }
    }

    int primeiro() override {
        if (minhaLista) {
            return minhaLista->getDado();
        } else {
            // Tratar lista vazia
            return -1;
        }
    }
};

int main() {
    Pilha pilha;
    Fila fila;

    pilha.insere(1);
    pilha.insere(2);
    pilha.insere(3);

    std::cout << "Topo da Pilha: " << pilha.primeiro() << std::endl;
    std::cout << "Removido da Pilha: " << pilha.remove() << std::endl;

    fila.insere(1);
    fila.insere(2);
    fila.insere(3);

    std::cout << "Frente da Fila: " << fila.primeiro() << std::endl;
    std::cout << "Removido da Fila: " << fila.remove() << std::endl;

    return 0;
}

