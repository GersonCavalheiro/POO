// Definição da enum de exceção personalizada
#[derive(Debug)]
enum SaldoInsuficienteException {
    SaldoInsuficiente,
}

impl std::fmt::Display for SaldoInsuficienteException {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "Saldo insuficiente para realizar o saque.")
    }
}

// Definição da struct Cofrinho
struct Cofrinho {
    saldo: i32,
}

impl Cofrinho {
    // Método para depositar dinheiro no cofrinho
    fn deposita(&mut self, valor: i32) {
        self.saldo += valor;
        println!("Depósito de {} realizado. Novo saldo: {}", valor, self.saldo);
    }

    // Método para sacar dinheiro do cofrinho
    fn saca(&mut self, valor: i32) -> Result<(), SaldoInsuficienteException> {
        if valor > self.saldo {
            Err(SaldoInsuficienteException::SaldoInsuficiente)
        } else {
            self.saldo -= valor;
            println!("Saque de {} realizado. Novo saldo: {}", valor, self.saldo);
            Ok(())
        }
    }
}

// Definição da struct Emprestimo
struct Emprestimo;

impl Emprestimo {
    // Método para obter um empréstimo
    fn obtem_emprestimo(cofrinho: &mut Cofrinho, valor: i32) {
        println!("Saldo insuficiente. Solicitando empréstimo de {}", valor);
        cofrinho.deposita(valor);
        println!("Empréstimo recebido. Novo saldo: {}", cofrinho.saldo);
    }
}

fn main() {
    // Criando um cofrinho
    let mut meu_cofrinho = Cofrinho { saldo: 0 };
    let mut sacou = false;

    while !sacou {
        // Tentando sacar um valor maior do que o saldo disponível
        match meu_cofrinho.saca(50) {
            Ok(_) => {
                sacou = true;
            }
            Err(e) => {
                // Tratamento da exceção: obtendo um empréstimo e tentando sacar novamente
                println!("Erro: {}", e);
                Emprestimo::obtem_emprestimo(&mut meu_cofrinho, 50);
            }
        }
    }
}

