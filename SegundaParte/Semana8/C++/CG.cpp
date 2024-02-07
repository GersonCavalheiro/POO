#include <iostream>

class Renderable {
public:
    void render() {
        std::cout << "Renderizando objeto." << std::endl;
    }
};

class Sprite : public Renderable {
public:
    void animate() {
        std::cout << "Animação do sprite." << std::endl;
    }
};

class Particle : public Renderable {
public:
    void update() {
        std::cout << "Atualizando partícula." << std::endl;
    }
};

class GameObject : public Sprite, public Particle {
public:
    void interact() {
        std::cout << "Interagindo com o objeto." << std::endl;
    }
};

int main() {
    GameObject meuObjeto;
    meuObjeto.Sprite::render(); // Herdado de Renderable
    meuObjeto.animate(); // Herdado de Sprite
    meuObjeto.update(); // Herdado de Particle
    meuObjeto.interact(); // Próprio método de GameObject

    return 0;
}


