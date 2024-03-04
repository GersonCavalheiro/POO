#include <iostream>
#include <stdexcept>

// Definição da classe de exceção personalizada
class DivisaoPorZeroException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Erro: Divisão por zero!";
    }
};

// Classe que realiza a divisão
class Divisor {
public:
    static double dividir(int numerador, int denominador) {
        if (denominador == 0) {
            throw DivisaoPorZeroException();
        }
        return static_cast<double>(numerador) / denominador;
    }
};

int main() {
    int numerador = 10;
    int denominador1 = 2;
    int denominador2 = 0;

    try {
        // Tentativa de divisão com denominador diferente de zero
        double resultado1 = Divisor::dividir(numerador, denominador1);
        std::cout << "Resultado 1: " << resultado1 << std::endl;

        // Tentativa de divisão com denominador igual a zero (lançará exceção)
        double resultado2 = Divisor::dividir(numerador, denominador2);
        std::cout << "Resultado 2: " << resultado2 << std::endl; // Esta linha não será alcançada

    } catch (const DivisaoPorZeroException& e) {
        // Captura da exceção personalizada
        std::cout << "Erro: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        // Captura de exceções genéricas (não é recomendado, mas incluído aqui para ilustração)
        std::cout << "Erro inesperado: " << e.what() << std::endl;
    }

    return 0;
}

