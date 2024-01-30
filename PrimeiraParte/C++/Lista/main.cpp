#include <iostream>
#include "pilha.h"
#include "fila.h"

int main() {
    // Criando objetos polimórficos
    Lista* listaPolimorfica[3];
    listaPolimorfica[0] = new Pilha(1);
    listaPolimorfica[1] = new Fila(2);
    listaPolimorfica[2] = new Pilha(3);

    // Inserindo elementos nas listas
    for (int i = 0; i < 3; i++) {
        listaPolimorfica[i]->insere(i + 1);
    }

    // Acessando o primeiro elemento de cada lista
    for (int i = 0; i < 3; i++) {
        std::cout << "Primeiro elemento da Lista " << i + 1 << ": " << listaPolimorfica[i]->primeiro() << std::endl;
    }

    // Removendo elementos das listas
    for (int i = 0; i < 3; i++) {
        int valorRemovido = listaPolimorfica[i]->remove();
        std::cout << "Elemento removido da Lista " << i + 1 << ": " << valorRemovido << std::endl;
    }

    // Liberando a memória alocada
    for (int i = 0; i < 3; i++) {
        delete listaPolimorfica[i];
    }

    return 0;
}

