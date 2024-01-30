// Definição da estrutura Cofrinho
pub struct Cofrinho {
    saldo: i32,
}

impl Cofrinho {
    // Método para criar um novo cofrinho com saldo zero
    pub fn novo() -> Cofrinho {
        Cofrinho { saldo: 0 }
    }

    // Método para depositar dinheiro no cofrinho
    pub fn deposita(&mut self, valor: i32) {
        if valor > 0 {
            self.saldo += valor;
            println!("Depositado {} reais.", valor);
        } else {
            println!("O valor do depósito deve ser maior que zero.");
        }
    }

    // Método para sacar dinheiro do cofrinho
    pub fn saca(&mut self, valor: i32) {
        if valor > 0 && valor <= self.saldo {
            self.saldo -= valor;
            println!("Sacado {} reais.", valor);
        } else if valor <= 0 {
            println!("O valor do saque deve ser maior que zero.");
        } else {
            println!("Saldo insuficiente para o saque.");
        }
    }

    // Método para verificar o saldo atual do cofrinho
    pub fn saldo_atual(&self) -> i32 {
        self.saldo
    }
}

