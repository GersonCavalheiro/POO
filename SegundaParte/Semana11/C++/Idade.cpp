#include <iostream>
#include <string> // para std::stoi
#include <stdexcept> // para std::invalid_argument, std::out_of_range

int main() {
    try {
        std::cout << "Quantos anos tens? (digite um valor inteiro)" << std::endl;
        std::string linha;
        std::getline(std::cin, linha);
        int idade = std::stoi(linha);
        ++idade;
        std::cout << "Ano que vem tu teras: " << idade << " anos!" << std::endl;
    } catch (const std::ios_base::failure& exception) {
        std::cerr << "Erro de entrada e saida " << exception.what() << std::endl;
    } catch (const std::invalid_argument& exception) {
        std::cerr << "Nao digitado um numero como entrada" << std::endl;
    } catch (const std::out_of_range& exception) {
        std::cerr << "Numero fora do alcance valido" << std::endl;
    } catch (const std::exception& exception) {
        std::cerr << "Vou dar o tratamento mais generico" << std::endl;
    }

    return 0;
}

