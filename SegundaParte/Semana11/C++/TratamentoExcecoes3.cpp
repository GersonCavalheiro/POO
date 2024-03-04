#include <iostream>
#include <stdexcept>

// Definição da exceção personalizada
class SaldoInsuficienteException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Saldo insuficiente para realizar o saque.";
    }
};

// Definição da classe Cofrinho
class Cofrinho {
private:
    int saldo;

public:
    Cofrinho() : saldo(0) {}

    // Método para depositar dinheiro no cofrinho
    void deposita(int valor) {
        saldo += valor;
        std::cout << "Depósito de " << valor << " realizado. Novo saldo: " << saldo << std::endl;
    }

    // Método para sacar dinheiro do cofrinho
    void saca(int valor) {
        if (valor > saldo) {
            throw SaldoInsuficienteException();
        }
        saldo -= valor;
        std::cout << "Saque de " << valor << " realizado. Novo saldo: " << saldo << std::endl;
    }

    // Operador << para imprimir o objeto Cofrinho
    friend std::ostream& operator<<(std::ostream& os, const Cofrinho& cofrinho) {
        os << "Saldo atual: " << cofrinho.saldo;
        return os;
    }
};

// Definição da classe Emprestimo
class Emprestimo {
public:
    // Método para obter um empréstimo
    static void obtemEmprestimo(Cofrinho& cofrinho, int valor) {
        std::cout << "Saldo insuficiente. Solicitando empréstimo de " << valor << std::endl;
        cofrinho.deposita(valor);
        std::cout << "Empréstimo recebido. Novo saldo: " << cofrinho << std::endl;
    }
};

int main() {
    // Criando um cofrinho
    Cofrinho meuCofrinho;

    bool sacou = false;

    do {
        // Tentando sacar um valor maior do que o saldo disponível
        try {
            meuCofrinho.saca(50);
            sacou = true;
        } catch (const SaldoInsuficienteException& e) {
            // Tratamento da exceção: obtendo um empréstimo e tentando sacar novamente
            std::cout << "Erro: " << e.what() << std::endl;
            Emprestimo::obtemEmprestimo(meuCofrinho, 50);
        }
    } while (!sacou);

    return 0;
}

