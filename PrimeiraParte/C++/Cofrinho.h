#ifndef COFRINHO_H
#define COFRINHO_H

class Cofrinho {
public:
    Cofrinho();  // Construtor
    void deposita(int valor);
    void saca(int valor);
    int saldoAtual();

private:
    int saldo;
};

#endif // COFRINHO_H

