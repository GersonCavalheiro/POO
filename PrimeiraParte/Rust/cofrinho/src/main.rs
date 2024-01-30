mod cofrinho;

use cofrinho::Cofrinho;

fn main() {
    // Cria um novo cofrinho
    let mut meu_cofrinho = Cofrinho::novo();

    // Realiza operações de depósito e saque
    meu_cofrinho.deposita(100);
    meu_cofrinho.saca(30);

    // Verifica e exibe o saldo atual
    let saldo_atual = meu_cofrinho.saldo_atual();
    println!("Saldo atual do cofrinho: {} reais", saldo_atual);
}

