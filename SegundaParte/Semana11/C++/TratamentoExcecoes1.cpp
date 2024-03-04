#include <iostream>
#include <string>

int main() {
    try {
        std::cout << "Digite um número inteiro: ";
        std::string input;
        std::getline(std::cin, input);

        // Tentativa de converter a string para um número inteiro
        int numero = std::stoi(input);

        // Se a conversão for bem-sucedida, imprime o resultado
        std::cout << "Número digitado: " << numero << std::endl;
    } catch (const std::invalid_argument& e) {
        // Captura a exceção se a entrada não puder ser convertida para um número inteiro
        std::cerr << "Erro: A entrada não é um número inteiro válido." << std::endl;
    } catch (const std::out_of_range& e) {
        // Captura a exceção se a entrada estiver fora do intervalo representável pelo tipo int
        std::cerr << "Erro: A entrada está fora do intervalo de um número inteiro." << std::endl;
    } catch (...) {
        // Captura qualquer outra exceção não prevista
        std::cerr << "Erro desconhecido." << std::endl;
    }
  //  finally
      // C++ não oferece o bloco finally, ele é considerado
      // desnecessário, uma vez que sua funcionalidade pode ser introduzida junto aos
      // destrutores dos objetos envolvidos

    // Resto do código continua normalmente após o bloco try-catch-finally
    std::cout << "Programa continua a execução..." << std::endl;

    return 0;
}

