public class CofrinhoMain {
    public static void main(String[] args) {
        // Cria um novo cofrinho
        Cofrinho meuCofrinho = new Cofrinho();

        // Realiza operações de depósito e saque
        meuCofrinho.deposita(100);
        meuCofrinho.saca(30);

        // Verifica e exibe o saldo atual
        int saldoAtual = meuCofrinho.saldoAtual();
        System.out.println("Saldo atual do cofrinho: " + saldoAtual + " reais");
    }
}

