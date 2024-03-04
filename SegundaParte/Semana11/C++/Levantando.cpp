#include <iostream>
#include <string>

class MinhaExcecao {
private:
    int cod;

public:
    MinhaExcecao() : cod(0) {}
    MinhaExcecao(int a) : cod(a) {}

    std::string what() const  {
        return (std::string("Ocorreu a MinhaExcecao com codigo [" + std::to_string(cod) + "]"));
    }
};

int main() {
    try {
        int a = 313;
        if (a > 10) {
            MinhaExcecao minhaExc(a);
            throw minhaExc;
        }
    } catch (const MinhaExcecao& e) {
        std::cout << "Excecao capturada: " << e.what() << std::endl;
    }

    return 0;
}

