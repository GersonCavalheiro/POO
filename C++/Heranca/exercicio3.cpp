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

class AnimalDomestico {
public:
    std::string brincar() {
        return "Brincando";
    }

    std::string alimentar() {
        return "Alimentando";
    }
};

class Cachorro : public Animal, public AnimalDomestico {
public:
    Cachorro(std::string nome, std::string cor) : Animal(nome), cor(cor) {}

    std::string fazerSom() override {
        return "Au Au";
    }

private:
    std::string cor;
};

class Gato : public Animal, public AnimalDomestico {
public:
    Gato(std::string nome, std::string cor) : Animal(nome), cor(cor) {}

    std::string fazerSom() override {
        return "Miau";
    }

private:
    std::string cor;
};

int main() {
    // Teste
    Cachorro cachorro("Flokus", "Marrom");
    Gato gato("Felicete", "Branco");

    std::cout << "Cachorro:\n";
    std::cout << "Nome: " << cachorro.getNome() << "\n";
    std::cout << "Faz som: " << cachorro.fazerSom() << "\n";
    std::cout << "Brincando: " << cachorro.brincar() << "\n";

    std::cout << "\nGato:\n";
    std::cout << "Nome: " << gato.getNome() << "\n";
    std::cout << "Faz som: " << gato.fazerSom() << "\n";
    std::cout << "Alimentando: " << gato.alimentar() << "\n";

    return 0;
}

