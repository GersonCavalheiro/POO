use std::io::{self, BufRead};

fn main() {
    // Função para ler uma linha e retornar um Result<String, io::Error>
    fn ler_linha() -> Result<String, io::Error> {
        let mut linha = String::new();
        io::stdin().lock().read_line(&mut linha)?;
        Ok(linha.trim().to_string())
    }

    // Função principal
    fn idade() -> Result<(), Box<dyn std::error::Error>> {
        let _teclado = io::BufReader::new(io::stdin());
        
        println!("Quantos anos tens? (digite um valor inteiro)");

        // Chamada da função ler_linha para ler a entrada
        let linha = ler_linha()?;
        
        // Tentativa de converter a string para um número inteiro
        let idade: i32 = linha.parse()?;
        
        // Incremento da idade
        let idade_no_proximo_ano = idade + 1;

        // Impressão da mensagem
        println!("Ano que vem tu teras: {} anos!", idade_no_proximo_ano);

        Ok(())
    }

    // Chamada da função idade com tratamento de erro
    if let Err(e) = idade() {
        println!("Erro ocorrido: {}", e);
    }
}

