#include <iostream>
#include <string>

class Animal {
public:
    Animal(std::string nome) : nome(nome) {}

    std::string fazerSom() {
        return "Som genérico do animal";
    }

    std::string getNome() {
        return nome;
    }

private:
    std::string nome;
};

class Cachorro : public Animal {
public:
    Cachorro(std::string nome) : Animal(nome) {}

    std::string latir() {
        return "Au Au";
    }
};

class Gato : public Animal {
public:
    Gato(std::string nome) : Animal(nome) {}

    std::string miar() {
        return "Miau";
    }
};

int main() {
    // Teste
    Cachorro cachorro("Flokus");
    Gato gato("Felicete");

    std::cout << "Cachorro:\n";
    std::cout << "Nome: " << cachorro.getNome() << "\n";
    std::cout << "Faz som: " << cachorro.fazerSom() << "\n";
    std::cout << "Latindo: " << cachorro.latir() << "\n";

    std::cout << "\nGato:\n";
    std::cout << "Nome: " << gato.getNome() << "\n";
    std::cout << "Faz som: " << gato.fazerSom() << "\n";
    std::cout << "Miau: " << gato.miar() << "\n";

    return 0;
}

