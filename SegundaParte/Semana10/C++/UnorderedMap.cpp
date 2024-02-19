#include <iostream>
#include <unordered_map>
#include "Cofrinho.h"

using namespace std;

int main() {
    // Criar um std::unordered_map de Cofrinhos usando o nome como chave
    unordered_map<string, Cofrinho> mapaCofrinhos;

    // Adicionar elementos usando insert
    mapaCofrinhos.insert(make_pair("Carolina", Cofrinho("Carolina", 100.0)));
    mapaCofrinhos.insert(make_pair("Pedro", Cofrinho("Pedro", 150.0)));
    mapaCofrinhos.insert(make_pair("Simone", Cofrinho("Simone", 200.0)));
    mapaCofrinhos.insert(make_pair("Gerson", Cofrinho("Gerson", 120.0)));

    // Acessar elementos
    cout << "Saldo do Cofrinho de Pedro: " << mapaCofrinhos["Pedro"].saldo << endl;

    // Iterar sobre os elementos (pares chave-valor)
    cout << "Cofrinhos:" << endl;
    for (const auto& par : mapaCofrinhos) {
        cout << "Proprietário: " << par.second.nomeProprietario << ", Saldo: " << par.second.saldo << std::endl;
    }

    return 0;
}

