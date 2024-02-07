interface DescontoFrete {
    int getDescontoFrete();
}

class ClienteBase {
    protected String nome;
    protected String endereco;
    protected int numeroCompras;

    public ClienteBase() {
        numeroCompras = 0;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public void exibirInformacoes() {
        System.out.println("Nome: " + nome + "\nEndereco: " + endereco);
    }

    public void efetuarCompra() {
        numeroCompras++;
    }

    public int getNumeroCompras() {
        return numeroCompras;
    }

    public int getDesconto() {
        return 0;
    }
}

class Cliente extends ClienteBase implements DescontoFrete {
    @Override
    public int getDescontoFrete() {
        return 0; // ou qualquer valor padrão desejado
    }
}

class ClientePremium extends Cliente {
    @Override
    public int getDesconto() {
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

    @Override
    public int getDescontoFrete() {
        return (numeroCompras <= 10) ? 0 : 20;
    }
}

class ClienteComercial extends Cliente {
    @Override
    public int getDescontoFrete() {
        return (numeroCompras <= 10) ? 50 : 100;
    }
}

public class HerancaMultiplaClientes {
    public static void main(String[] args) {
        Cliente cliente = new Cliente();
        cliente.setNome("Cliente Cliente");
        cliente.setEndereco("Rua Cliente, 456");
        cliente.exibirInformacoes();
        cliente.efetuarCompra();
        cliente.efetuarCompra();
        System.out.println("Desconto atual: " + cliente.getDesconto() + "%");
        System.out.println("Desconto de frete: " + ((DescontoFrete) cliente).getDescontoFrete() + "%");

        System.out.println("\n--------------------------------------");

        ClientePremium clientePremium = new ClientePremium();
        clientePremium.setNome("Cliente Premium");
        clientePremium.setEndereco("Rua Premium, 456");
        clientePremium.exibirInformacoes();
        clientePremium.efetuarCompra();
        clientePremium.efetuarCompra();
        System.out.println("Desconto atual: " + clientePremium.getDesconto() + "%");
        System.out.println("Desconto de frete: " + clientePremium.getDescontoFrete() + "%");

        System.out.println("\n--------------------------------------");

        // Exemplo de manipulação da classe ClienteComercial
        ClienteComercial clienteComercial = new ClienteComercial();
        clienteComercial.setNome("Cliente Comercial");
        clienteComercial.setEndereco("Rua Comercial, 789");
        clienteComercial.exibirInformacoes();
        clienteComercial.efetuarCompra();
        System.out.println("Desconto atual: " + clienteComercial.getDesconto() + "%");
        System.out.println("Desconto de frete: " + clienteComercial.getDescontoFrete() + "%");
    }
}

