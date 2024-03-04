fn main() {
    const NUM_ALUNOS: usize = 10;
    let mut vet: [f64; NUM_ALUNOS] = [0.0; NUM_ALUNOS];
    let mut acum = 0.0;

    println!("Calcular a media de 10 notas.");
    println!("Para simplificar, todo mundo tirou 10!!!");

    // Rust não permite indexação fora dos limites, então não há necessidade de captura de exceção.
    for cont in 0..NUM_ALUNOS {
        vet[cont] = 10.0;
    }

    println!("Observe a mesma falha, agora sem captura.");

    for cont in 0..NUM_ALUNOS {
        acum += vet[cont];
    }

    println!("Media = {}", acum / NUM_ALUNOS as f64);
}

