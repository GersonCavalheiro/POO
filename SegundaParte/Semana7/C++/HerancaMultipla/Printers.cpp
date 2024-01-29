#include <iostream>

class Device {
private:
    std::string name;
public:
    Device(const std::string& name) : name(name) {}

    void powerOn() {
        std::cout << name << " is powered on.\n";
    }

    void powerOff() {
        std::cout << name << " is powered off.\n";
    }
};

class Scanner : virtual public Device {
public:
    Scanner(const std::string& name) : Device(name) {}

    void scan() {
        std::cout << "Scanning...\n";
    }
};

class Printer : virtual public Device {
public:
    Printer(const std::string& name) : Device(name) {}

    void print() {
        std::cout << "Printing...\n";
    }
};

// Classe que herda de ambas as classes derivadas
class ScannerPrinter : public Scanner, public Printer {
public:
    ScannerPrinter(const std::string& name) : Device(name), Scanner(name), Printer(name) {}

    void scanAndPrint() {
        scan();
        print();
    }
};

int main() {
    ScannerPrinter scannerPrinter("OfficeDevice");

    // A herança diamante permite que ScannerPrinter acesse membros de Scanner e Printer diretamente
    scannerPrinter.powerOn();   // Chama a função powerOn de Device (classe base comum)
    scannerPrinter.scanAndPrint();  // Chama as funções scan e print de Scanner e Printer

    // Chama a função powerOff de Device (classe base comum) através da classe derivada mais próxima
    scannerPrinter.Scanner::powerOff();

    return 0;
}

