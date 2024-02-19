#include <iostream>
#include <list>
#include "Cofrinho.h"

using namespace std;

int main() {
    // Criar uma lista de Cofrinhos
    list<Cofrinho> listaCofrinhos;

    // Adicionar elementos
    listaCofrinhos.push_back(Cofrinho("Carolina", 100.0));
    listaCofrinhos.push_back(Cofrinho("Pedro", 150.0));
    listaCofrinhos.push_back(Cofrinho("Simone", 200.0));
    listaCofrinhos.push_back(Cofrinho("Gerson", 120.0));

    // Acessar elementos
    cout << "Saldo do Cofrinho de Pedro: " << next(listaCofrinhos.begin(), 1)->saldo << endl;

    // Iterar sobre os elementos
    cout << "Cofrinhos:" << endl;
    for (const Cofrinho& cofrinho : listaCofrinhos) {
        cout << "Proprietário: " << cofrinho.nomeProprietario << ", Saldo: " << cofrinho.saldo << endl;
    }

    return 0;
}

