#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>

class Log {
private:
    int cont;
    std::vector<std::string> log;

    Log() : cont(0) {}
public:
    static Log& getInstance() {
        static Log instance;
        return instance;
    }

    void insereAtividade(const std::string& className) {
        cont++;
        log.push_back(std::to_string(cont) + " & " + className);
    }

    void printLog() {
        std::cout << "Log de criação de objetos:" << std::endl;
        for (const auto& entry : log) {
            std::cout << entry << std::endl;
        }
    }
};

class XXX {
public:
    XXX() {
	Log &inst = Log::getInstance();
        inst.insereAtividade(typeid(*this).name());
    }
};

class YYY {
public:
    YYY() {
	Log &inst = Log::getInstance();
        inst.insereAtividade(typeid(*this).name());
    }
};

class ZZZ {
public:
    ZZZ() {
	Log &inst = Log::getInstance();
        inst.insereAtividade(typeid(*this).name());
    }
};

int main() {
    XXX objetoXXX1;
    XXX objetoXXX2;
    YYY objetoYYY;
    XXX objetoXXX3;
    ZZZ objetoZZZ;

    Log::getInstance().printLog();

    return 0;
}

