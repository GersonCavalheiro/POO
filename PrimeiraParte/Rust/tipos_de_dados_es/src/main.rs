use std::io;

fn main() {
    let mut integer_var = 0;
    let mut float_var = 0.0;
    let mut double_var = 0.0;
    let mut char_var = ' ';
    let mut bool_var = false;
    let mut string_var = String::new();

    println!("Digite um valor inteiro: ");
    io::stdin().read_line(&mut string_var).expect("Falha na leitura");
    integer_var = string_var.trim().parse().expect("Valor inválido");

    string_var.clear();

    println!("Digite um valor decimal (float): ");
    io::stdin().read_line(&mut string_var).expect("Falha na leitura");
    float_var = string_var.trim().parse().expect("Valor inválido");

    string_var.clear();

    println!("Digite um valor decimal (double): ");
    io::stdin().read_line(&mut string_var).expect("Falha na leitura");
    double_var = string_var.trim().parse().expect("Valor inválido");

    string_var.clear();

    println!("Digite um caractere: ");
    io::stdin().read_line(&mut string_var).expect("Falha na leitura");
    char_var = string_var.trim().chars().next().expect("Valor inválido");

    string_var.clear();

    println!("Digite um valor booleano (true ou false): ");
    io::stdin().read_line(&mut string_var).expect("Falha na leitura");
    bool_var = string_var.trim().parse().expect("Valor inválido");

    string_var.clear();

    println!("Digite uma string: ");
    io::stdin().read_line(&mut string_var).expect("Falha na leitura");
    string_var = string_var.trim().to_string();

    println!("Tipo de Dado\tTamanho (bytes)\tValor");
    println!("int\t\t\t{}\t\t{}", std::mem::size_of_val(&integer_var), integer_var);
    println!("float\t\t\t{}\t\t{}", std::mem::size_of_val(&float_var), float_var);
    println!("double\t\t{}\t\t{}", std::mem::size_of_val(&double_var), double_var);
    println!("char\t\t\t{}\t\t{}", std::mem::size_of_val(&char_var), char_var);
    println!("bool\t\t\t{}\t\t{}", std::mem::size_of_val(&bool_var), bool_var);
    println!("string\t\t\t{}\t\t{}", string_var.len(), string_var);
}

