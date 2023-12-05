#include <iostream>
#include <vector>

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

void fazerSomParaLista(const std::vector<Animal*>& animais) {
    for (const auto& animal : animais) {
        std::cout << animal->fazerSom() << "\n";
    }
}

int main() {
    // Teste
    Animal animalGenerico("Animal Genérico");
    Cachorro cachorro("Flokus");
    Gato gato("Felicete");

    std::vector<Animal*> listaAnimais = {&animalGenerico, &cachorro, &gato};

    fazerSomParaLista(listaAnimais);

    return 0;
}

