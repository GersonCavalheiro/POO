// Definição da struct de exceção personalizada
struct DivisaoPorZeroException;

impl std::fmt::Display for DivisaoPorZeroException {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "Erro: Divisão por zero!")
    }
}

// Função que realiza a divisão
fn dividir(numerador: i32, denominador: i32) -> Result<f64, DivisaoPorZeroException> {
    if denominador == 0 {
        Err(DivisaoPorZeroException)
    } else {
        Ok(f64::from(numerador) / f64::from(denominador))
    }
}

fn main() {
    let numerador = 10;
    let denominador1 = 2;
    let denominador2 = 0;

    // Tentativa de divisão com denominador diferente de zero
    match dividir(numerador, denominador1) {
        Ok(resultado1) => {
            println!("Resultado 1: {}", resultado1);
        }
        Err(e) => {
            // Captura da exceção personalizada
            println!("Erro: {}", e);
        }
    }

    // Tentativa de divisão com denominador igual a zero (lançará exceção)
    match dividir(numerador, denominador2) {
        Ok(resultado2) => {
            println!("Resultado 2: {}", resultado2);
        }
        Err(e) => {
            // Captura da exceção personalizada
            println!("Erro: {}", e);
        }
    }
}

