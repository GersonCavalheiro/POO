#include <iostream>
#include <string>

int main() {
    int integerVar;
    float floatVar;
    double doubleVar;
    char charVar;
    bool boolVar;
    std::string stringVar;

    std::cout << "Digite um valor inteiro: ";
    std::cin >> integerVar;

    std::cout << "Digite um valor decimal (float): ";
    std::cin >> floatVar;

    std::cout << "Digite um valor decimal (double): ";
    std::cin >> doubleVar;

    std::cout << "Digite um caractere: ";
    std::cin >> charVar;

    std::cout << "Digite um valor booleano (0 para falso, 1 para verdadeiro): ";
    std::cin >> boolVar;

    std::cin.ignore(); // Limpar o buffer de entrada antes de ler a string

    std::cout << "Digite uma string: ";
    std::getline(std::cin, stringVar);

    std::cout << "Tipo de Dado\tTamanho (bytes)\tValor\n";
    std::cout << "int\t\t\t" << sizeof(integerVar) << "\t\t" << integerVar << "\n";
    std::cout << "float\t\t\t" << sizeof(floatVar) << "\t\t" << floatVar << "\n";
    std::cout << "double\t\t\t" << sizeof(doubleVar) << "\t\t" << doubleVar << "\n";
    std::cout << "char\t\t\t" << sizeof(charVar) << "\t\t" << charVar << "\n";
    std::cout << "bool\t\t\t" << sizeof(boolVar) << "\t\t" << boolVar << "\n";
    std::cout << "string\t\t\t" << sizeof(stringVar) << "\t\t" << stringVar << "\n";

    return 0;
}

