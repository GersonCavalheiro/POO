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
    fn latir(&self) -> String {
        String::from("Au Au")
    }
}

struct Gato {
    animal: Animal,
}

impl Gato {
    fn miar(&self) -> String {
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

    println!("Cachorro:");
    println!("Nome: {}", cachorro.animal.nome);
    println!("Faz som: {}", cachorro.animal.fazer_som());
    println!("Latindo: {}", cachorro.latir());

    println!("\nGato:");
    println!("Nome: {}", gato.animal.nome);
    println!("Faz som: {}", gato.animal.fazer_som());
    println!("Miau: {}", gato.miar());
}

