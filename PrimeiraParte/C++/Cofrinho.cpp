#include <iostream>
#include "Cofrinho.h"

Cofrinho::Cofrinho() {
    saldo = 0;
}

void Cofrinho::deposita(int valor) {
    if (valor > 0) {
        saldo += valor;
        std::cout << "Depositado " << valor << " reais." << std::endl;
    } else {
        std::cout << "O valor do depósito deve ser maior que zero." << std::endl;
    }
}

void Cofrinho::saca(int valor) {
    if (valor > 0 && valor <= saldo) {
        saldo -= valor;
        std::cout << "Sacado " << valor << " reais." << std::endl;
    } else if (valor <= 0) {
        std::cout << "O valor do saque deve ser maior que zero." << std::endl;
    } else {
        std::cout << "Saldo insuficiente para o saque." << std::endl;
    }
}

int Cofrinho::saldoAtual() {
    return saldo;
}

