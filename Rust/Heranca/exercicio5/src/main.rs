trait Animal {
    fn fazer_som(&self) -> String;
    fn get_nome(&self) -> &str;
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

fn main() {
    // Teste
    let cachorro = Cachorro { nome: String::from("Flokus") };
    let gato = Gato { nome: String::from("Felicete") };

    let lista_animais: Vec<Box<dyn Animal>> = vec![
        Box::new(cachorro) as Box<dyn Animal>,
        Box::new(gato) as Box<dyn Animal>,
    ];

    fazer_acoes_para_lista(&lista_animais);
}

fn fazer_acoes_para_lista(animais: &[Box<dyn Animal>]) {
    for animal in animais {
        println!("{}", animal.fazer_som());
        println!("Nome: {}", animal.get_nome());
        println!("-----------");
    }
}

