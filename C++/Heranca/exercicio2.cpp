#include <iostream>
#include <string>

class Animal {
public:
    Animal(std::string nome) : nome(nome) {}

    virtual std::string fazerSom() {
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

    std::string fazerSom() override {
        return "Au Au";
    }
};

class Gato : public Animal {
public:
    Gato(std::string nome) : Animal(nome) {}

    std::string fazerSom() override {
        return "Miau";
    }
};

int main() {
    // Teste
    Cachorro cachorro("Flokus");
    Gato gato("Felicete");

    std::cout << "Cachorro faz som: " << cachorro.fazerSom() << "\n";
    std::cout << "Gato faz som: " << gato.fazerSom() << "\n";

    return 0;
}

