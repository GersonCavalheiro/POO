trait DescontoFrete {
    fn get_desconto_frete(&self) -> i32;
}

struct ClienteBase {
    nome: String,
    endereco: String,
    numero_compras: i32,
}

impl ClienteBase {
    fn new(nome: &str, endereco: &str) -> ClienteBase {
        ClienteBase {
            nome: nome.to_string(),
            endereco: endereco.to_string(),
            numero_compras: 0,
        }
    }
}

struct Cliente {
    cliente_base: ClienteBase,
}

impl Cliente {
    fn new(nome: &str, endereco: &str) -> Cliente {
        Cliente {
            cliente_base: ClienteBase::new(nome, endereco),
        }
    }
}

impl DescontoFrete for Cliente {
    fn get_desconto_frete(&self) -> i32 {
        0
    }
}

struct ClientePremium {
    cliente: Cliente,
}

impl ClientePremium {
    fn new(nome: &str, endereco: &str) -> ClientePremium {
        ClientePremium {
            cliente: Cliente::new(nome, endereco),
        }
    }
}

impl DescontoFrete for ClientePremium {
    fn get_desconto_frete(&self) -> i32 {
        20
    }
}

struct ClienteComercial {
    cliente: Cliente,
}

impl ClienteComercial {
    fn new(nome: &str, endereco: &str) -> ClienteComercial {
        ClienteComercial {
            cliente: Cliente::new(nome, endereco),
        }
    }
}

impl DescontoFrete for ClienteComercial {
    fn get_desconto_frete(&self) -> i32 {
        100
    }
}

fn main() {
    let cliente = Cliente::new("Cliente Cliente", "Rua Cliente, 456");
    println!("Desconto de frete: {}%", cliente.get_desconto_frete());

    let cliente_premium = ClientePremium::new("Cliente Premium", "Rua Premium, 456");
    println!(
        "Desconto de frete para Cliente Premium: {}%",
        cliente_premium.get_desconto_frete()
    );

    let cliente_comercial = ClienteComercial::new("Cliente Comercial", "Rua Comercial, 789");
    println!(
        "Desconto de frete para Cliente Comercial: {}%",
        cliente_comercial.get_desconto_frete()
    );
}

