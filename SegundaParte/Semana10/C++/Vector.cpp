#include <iostream>
#include <vector>
#include "Cofrinho.h"

using namespace std;

int main() {
    // Criar um vector de Cofrinhos
    vector<Cofrinho> vetorCofrinhos;

    // Adicionar elementos
    vetorCofrinhos.push_back(Cofrinho("Carolina", 100.0));
    vetorCofrinhos.push_back(Cofrinho("Pedro", 150.0));
    vetorCofrinhos.push_back(Cofrinho("Simone", 200.0));
    vetorCofrinhos.push_back(Cofrinho("Gerson", 120.0));

    // Acessar elementos
    cout << "Saldo do Cofrinho de Pedro: " << vetorCofrinhos[1].saldo << endl;

    // Iterar sobre os elementos
    cout << "Cofrinhos:" << endl;
    for (const Cofrinho& cofrinho : vetorCofrinhos) {
        cout << "Proprietário: " << cofrinho.nomeProprietario << ", Saldo: " << cofrinho.saldo << endl;
    }

    return 0;
}

