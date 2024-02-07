#include <iostream>
#include <string>

class DescontoFrete {
public:
    virtual int getDescontoFrete() const { return 0 ; }
};

class ClienteBase {
protected:
    std::string nome;
    std::string endereco;
    int numeroCompras;

public:
    ClienteBase() : numeroCompras(0) {}

    void setNome(const std::string& nome) {
        this->nome = nome;
    }

    void setEndereco(const std::string& endereco) {
        this->endereco = endereco;
    }

    void exibirInformacoes() const {
        std::cout << "Nome: " << nome << "\nEndereco: " << endereco << "\n";
    }

    void efetuarCompra() {
        numeroCompras++;
    }

    int getNumeroCompras() const {
        return numeroCompras;
    }

    virtual int getDesconto() const {
        return 0;
    }
};

class Cliente : public ClienteBase, public DescontoFrete {
};

class ClientePremium : public Cliente {
public:
    int getDesconto() const override {
        if (numeroCompras >= 10 && numeroCompras < 20) {
            return 5;
        } else if (numeroCompras >= 20 && numeroCompras < 30) {
            return 10;
        } else if (numeroCompras >= 30 && numeroCompras < 40) {
            return 15;
        } else if (numeroCompras >= 40) {
            return 20;
        }
        return 0;
    }

    int getDescontoFrete() const override {
        return (numeroCompras <= 10)?0:20;
    }
};

class ClienteComercial : public Cliente {
public:
    int getDescontoFrete() const override {
        return (numeroCompras <= 10) ? 50 : 100;
    }
};

int main() {
    Cliente cliente;
    cliente.setNome("Cliente Cliente");
    cliente.setEndereco("Rua Cliente, 456");
    cliente.exibirInformacoes();
    cliente.efetuarCompra();
    cliente.efetuarCompra();
    std::cout << "Desconto atual: " << cliente.getDesconto() << "%\n";
    std::cout << "Desconto de frete: " << cliente.getDescontoFrete() << "%\n";

    std::cout << "\n--------------------------------------\n";
    ClientePremium clientePremium;
    clientePremium.setNome("Cliente Premium");
    clientePremium.setEndereco("Rua Premium, 456");
    clientePremium.exibirInformacoes();
    clientePremium.efetuarCompra();
    clientePremium.efetuarCompra();
    std::cout << "Desconto atual: " << clientePremium.getDesconto() << "%\n";
    std::cout << "Desconto de frete: " << clientePremium.getDescontoFrete() << "%\n";

    std::cout << "\n--------------------------------------\n";

    // Exemplo de manipulação da classe ClienteComercial
    ClienteComercial clienteComercial;
    clienteComercial.setNome("Cliente Comercial");
    clienteComercial.setEndereco("Rua Comercial, 789");
    clienteComercial.exibirInformacoes();
    clienteComercial.efetuarCompra();
    std::cout << "Desconto atual: " << clienteComercial.getDesconto() << "%\n";
    std::cout << "Desconto de frete: " << clienteComercial.getDescontoFrete() << "%\n";

    return 0;
}

