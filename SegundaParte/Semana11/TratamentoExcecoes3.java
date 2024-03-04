// Definição da exceção personalizada
class SaldoInsuficienteException extends Exception {
    public SaldoInsuficienteException() {
        super("Saldo insuficiente para realizar o saque.");
    }
}

// Definição da classe Cofrinho
class Cofrinho {
    private int saldo;

    public Cofrinho() {
        this.saldo = 0;
    }

    // Método para depositar dinheiro no cofrinho
    public void deposita(int valor) {
        saldo += valor;
        System.out.println("Depósito de " + valor + " realizado. Novo saldo: " + saldo);
    }

    // Método para sacar dinheiro do cofrinho
    public void saca(int valor) throws SaldoInsuficienteException {
        if (valor > saldo) {
            throw new SaldoInsuficienteException();
        }
        saldo -= valor;
        System.out.println("Saque de " + valor + " realizado. Novo saldo: " + saldo);
    }
}

// Definição da classe Emprestimo
class Emprestimo {
    // Método para obter um empréstimo
    public static void obtemEmprestimo(Cofrinho cofrinho, int valor) {
        System.out.println("Saldo insuficiente. Solicitando empréstimo de " + valor);
        cofrinho.deposita(valor);
        System.out.println("Empréstimo recebido. Novo saldo: " + cofrinho);
    }
}

public class TratamentoExcecoes3 {
    public static void main(String[] args) {
        // Criando um cofrinho
        Cofrinho meuCofrinho = new Cofrinho();
	boolean sacou = false;

	do {
          // Tentando sacar um valor maior do que o saldo disponível
          try {
              meuCofrinho.saca(50);
	      sacou = true;
          } catch (SaldoInsuficienteException e) {
              // Tratamento da exceção: obtendo um empréstimo e tentando sacar novamente
              System.out.println("Erro: " + e.getMessage());
              Emprestimo.obtemEmprestimo(meuCofrinho, 50);
          }
        } while( sacou == false );
    }
}

