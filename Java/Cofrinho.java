public class Cofrinho {
    private int saldo;

    // Método para criar um novo cofrinho com saldo zero
    public Cofrinho() {
        saldo = 0;
    }

    // Método para depositar dinheiro no cofrinho
    public void deposita(int valor) {
        if (valor > 0) {
            saldo += valor;
            System.out.println("Depositado " + valor + " reais.");
        } else {
            System.out.println("O valor do depósito deve ser maior que zero.");
        }
    }

    // Método para sacar dinheiro do cofrinho
    public void saca(int valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            System.out.println("Sacado " + valor + " reais.");
        } else if (valor <= 0) {
            System.out.println("O valor do saque deve ser maior que zero.");
        } else {
            System.out.println("Saldo insuficiente para o saque.");
        }
    }

    // Método para verificar o saldo atual do cofrinho
    public int saldoAtual() {
        return saldo;
    }
}

