struct MyClass {
    data: i32,
}

impl MyClass {
    fn new(val: i32) -> MyClass {
        MyClass { data: val }
    }
}

fn pass_by_value(x: i32, obj: &mut MyClass) {
    // Passagem por valor (para o primitivo e a instância de struct)
    // Observe que x é copiado, portanto, não pode ser modificado diretamente.
    let _ = x; // Evita o aviso de variável não utilizada.
    obj.data = 100;
}

fn pass_by_reference(x: &mut i32, obj: &mut MyClass) {
    // Passagem por referência (para o primitivo e a instância de struct)
    *x = 20;
    obj.data = 200;
}

fn main() {
    let mut num: i32 = 5;
    let mut my_obj = MyClass::new(50);

    // Passagem por valor
    pass_by_value(num, &mut my_obj);
    println!("Passagem por valor: {}, {}", num, my_obj.data);

    // Passagem por referência
    pass_by_reference(&mut num, &mut my_obj);
    println!("Passagem por referência: {}, {}", num, my_obj.data);
}

