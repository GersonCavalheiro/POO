use std::io::{self, Write};

fn main() {
    let mut input = String::new();

    print!("Digite um número inteiro: ");
    io::stdout().flush().unwrap();

    io::stdin().read_line(&mut input).expect("Falha ao ler a linha");

    // Tentativa de converter a string para um número inteiro
    match input.trim().parse::<i32>() {
        Ok(numero) => {
            // Se a conversão for bem-sucedida, imprime o resultado
            println!("Número digitado: {}", numero);
        }
        Err(_) => {
            // Captura a exceção se a entrada não puder ser convertida para um número inteiro
            println!("Erro: A entrada não é um número inteiro válido.");
        }
    }

    // Código que será executado independentemente de ocorrer ou não uma exceção
    println!("Este bloco sempre é executado.");

    // Resto do código continua normalmente após o bloco try-catch-finally
    println!("Programa continua a execução...");
}

