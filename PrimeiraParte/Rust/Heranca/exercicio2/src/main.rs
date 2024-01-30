struct Animal {
    nome: String,
}

impl Animal {
    fn fazer_som(&self) -> String {
        String::from("Som genérico do animal")
    }
}

struct Cachorro {
    animal: Animal,
}

impl Cachorro {
    fn fazer_som(&self) -> String {
        String::from("Au Au")
    }
}

struct Gato {
    animal: Animal,
}

impl Gato {
    fn fazer_som(&self) -> String {
        String::from("Miau")
    }
}

fn main() {
    // Teste
    let cachorro = Cachorro {
        animal: Animal { nome: String::from("Flokus") },
    };

    let gato = Gato {
        animal: Animal { nome: String::from("Felicete") },
    };

    println!("Cachorro faz som: {}", cachorro.fazer_som());
    println!("Gato faz som: {}", gato.fazer_som());
}

