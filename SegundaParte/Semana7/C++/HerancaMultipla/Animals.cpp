#include <iostream>

// Classe base comum
class Animal {
private:
    std::string name;
public:
    Animal(const std::string& name) : name(name) {}

    void eat() {
        std::cout << name << " is eating.\n";
    }

    void sleep() {
        std::cout << name << " is sleeping.\n";
    }

    std::string& getName() { return name; }
};

// Primeira classe derivada
class Mammal : public Animal {
public:
    Mammal(const std::string& name) : Animal(name) {}

    void run() {
        std::cout << "Running fast!\n";
    }
};

// Segunda classe derivada
class Bird : public Animal {
public:
    Bird(const std::string& name) : Animal(name) {}

    void fly() {
        std::cout << "Flying high!\n";
    }
};

// Classe que herda de ambas as classes derivadas
class Bat : public Mammal, public Bird {
public:
    Bat(const std::string& name) : Mammal(name), Bird(name) {}

    void display() {
        std::cout << "I am a bat named " << Mammal::getName() << ".\n";
    }
};

int main() {
    Bat bat("Batty");

    // A herança diamante permite que Bat acesse membros de Mammal e Bird diretamente
    bat.Mammal::eat();    // Chama a função eat de Animal (classe base comum)
    bat.run();    // Chama a função run de Mammal
    bat.fly();    // Chama a função fly de Bird

    // Chama a função sleep de Animal (classe base comum) através da classe derivada mais próxima
    bat.Mammal::sleep();

    // Chama a função display de Bat
    bat.display();

    return 0;
}

