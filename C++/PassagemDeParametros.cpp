#include <iostream>

class MyClass {
public:
    int data;

    MyClass(int val) : data(val) {}
};

// Passagem por valor para um parâmetro primitivo e uma instância de classe
void passByValue(int x, MyClass obj) {
    x = 10;
    obj.data = 100;
}

// Passagem por referência para um parâmetro primitivo e uma instância de classe
void passByReference(int &x, MyClass &obj) {
    x = 20;
    obj.data = 200;
}

// Passagem por referência *constante*
void passByReferenceConst(const int &x, const MyClass &obj) {
    int outrox = x;      // Os parâmetros não podem ocorrer no lado
    int data = obj.data; // esquerdo de uma atribuição
}

// Passagem por ponteiro para um parâmetro primitivo e uma instância de classe
void passByPointer(int *x, MyClass *obj) {
    *x = 30;
    obj->data = 300;
}

int main() {
    int num = 5;
    MyClass myObj(50);

    // Passagem por valor
    passByValue(num, myObj);
    std::cout << "Passagem por valor: " << num << ", " << myObj.data << std::endl;

    // Passagem por referência: Atenção! Você percebe que isso é uma passagem por valor?
    passByReference(num, myObj);
    std::cout << "Passagem por referência: " << num << ", " << myObj.data << std::endl;

    passByReferenceConst(num, myObj);
    std::cout << "Passagem por referência: " << num << ", " << myObj.data << std::endl;

    // Passagem por ponteiro
    passByPointer(&num, &myObj);
    std::cout << "Passagem por ponteiro: " << num << ", " << myObj.data << std::endl;

    return 0;
}

