#ifndef COFRINHO_H
#define COFRINHO_H

#include <string>

using namespace std;

class Cofrinho {
public:
    string nomeProprietario;
    double saldo;
    Cofrinho(string nome = NULL, double saldoInicial = 0.0) : nomeProprietario(nome), saldo(saldoInicial) {}
    Cofrinho(const Cofrinho& c) : nomeProprietario(c.nomeProprietario), saldo(c.saldo){}
    Cofrinho& operator=(const Cofrinho& c) {
	    nomeProprietario = c.nomeProprietario;
	    saldo = c.saldo;
	    return *this;
    }
};

#endif // COFRINHO_H

