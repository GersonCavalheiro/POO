#include <iostream>
#include <stdexcept> // para std::runtime_error

int main() {
    const int NUM_ALUNOS = 10;
    double vet[NUM_ALUNOS];
    double acum = 0;

    std::cout << "Calcular a media de 10 notas." << std::endl;
    std::cout << "Para simplificar, todo mundo tirou 10!!!" << std::endl;

    try {
        for (int cont = 0; cont <= NUM_ALUNOS; ++cont)
            vet[cont] = 10;
    } catch (const std::exception& e) {
        std::cerr << "Ups! Entrei uma nota que nao devia!" << std::endl;
        std::cerr << "Note: nao ha tratamento" << std::endl;
    }

    std::cout << "Observe a mesma falha, agora sem captura." << std::endl;
    
    for (int cont = 0; cont <= NUM_ALUNOS; cont++)
        acum += vet[cont];

    std::cout << "Media = " << acum / NUM_ALUNOS << std::endl;

    return 0;
}

