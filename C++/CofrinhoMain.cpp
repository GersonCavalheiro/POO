#include <iostream>
#include "Cofrinho.h"

int main() {
    // Cria um novo cofrinho
    Cofrinho meuCofrinho;

    // Realiza operações de depósito e saque
    meuCofrinho.deposita(100);
    meuCofrinho.saca(30);

    // Verifica e exibe o saldo atual
    int saldoAtual = meuCofrinho.saldoAtual();
    std::cout << "Saldo atual do cofrinho: " << saldoAtual << " reais" << std::endl;

    return 0;
}

