trait Animal {
    fn fazer_som(&self) -> String;
    fn get_nome(&self) -> &str;
}

trait AnimalDomestico {
    fn brincar(&self) -> String;
    fn alimentar(&self) -> String;
}

struct Cachorro {
    nome: String,
}

impl Animal for Cachorro {
    fn fazer_som(&self) -> String {
        String::from("Au Au")
    }

    fn get_nome(&self) -> &str {
        &self.nome
    }
}

impl AnimalDomestico for Cachorro {
    fn brincar(&self) -> String {
        String::from("Brincando")
    }

    fn alimentar(&self) -> String {
        String::from("Alimentando")
    }
}

struct Gato {
    nome: String,
}

impl Animal for Gato {
    fn fazer_som(&self) -> String {
        String::from("Miau")
    }

    fn get_nome(&self) -> &str {
        &self.nome
    }
}

impl AnimalDomestico for Gato {
    fn brincar(&self) -> String {
        String::from("Brincando")
    }

    fn alimentar(&self) -> String {
        String::from("Alimentando")
    }
}

fn main() {
    // Teste
    let cachorro = Cachorro { nome: String::from("Flokus") };
    let gato = Gato { nome: String::from("Felicete") };

    println!("Cachorro:");
    println!("Nome: {}", cachorro.get_nome());
    println!("Faz som: {}", cachorro.fazer_som());
    println!("Brincando: {}", cachorro.brincar());

    println!("\nGato:");
    println!("Nome: {}", gato.get_nome());
    println!("Faz som: {}", gato.fazer_som());
    println!("Alimentando: {}", gato.alimentar());
}

