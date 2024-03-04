use std::fmt;

// Definição da exceção personalizada
#[derive(Debug)]
struct MinhaExcecao {
    cod: i32,
}

impl MinhaExcecao {
    fn new(a: i32) -> Self {
        MinhaExcecao { cod: a }
    }
}

impl fmt::Display for MinhaExcecao {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "Ocorreu a MinhaExcecao com codigo [{}]", self.cod)
    }
}

fn main() {
    // Função que pode retornar um resultado Result<(), MinhaExcecao>
    fn levantando() -> Result<(), MinhaExcecao> {
        let a = 313;
        if a > 10 {
            let minha_exc = MinhaExcecao::new(a);
            return Err(minha_exc);
        }
        Ok(())
    }

    // Chamada da função com tratamento de erro
    match levantando() {
        Ok(()) => println!("Operação bem-sucedida."),
        Err(e) => println!("Excecao capturada: {}", e),
    }
}

