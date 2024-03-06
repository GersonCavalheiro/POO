use std::env;
use rand::Rng;

struct SomaParcialThread {
    vetor: Vec<i32>,
    inicio: usize,
    fim: usize,
    soma_parcial: i32,
}

impl SomaParcialThread {
    fn new(vetor: Vec<i32>, inicio: usize, fim: usize) -> Self {
        SomaParcialThread {
            vetor,
            inicio,
            fim,
            soma_parcial: 0,
        }
    }

    fn run(&mut self) {
        for i in self.inicio..self.fim {
            self.soma_parcial += self.vetor[i];
        }
    }
}

fn main() {
    let args: Vec<String> = env::args().collect();

    if args.len() != 3 {
        println!("Uso: ./SomaVetor1 <tamanho> <nthreads>");
        std::process::exit(1);
    }

    let tamanho: usize = args[1].parse().expect("Falha ao converter tamanho para número");
    let nthreads: usize = args[2].parse().expect("Falha ao converter nthreads para número");

    let vetor: Vec<i32> = (0..tamanho).map(|_| rand::thread_rng().gen_range(0..100)).collect();
    let mut threads = vec![];

    let segmento = tamanho / nthreads;
    let mut inicio = 0;
    let mut fim = segmento;

    for _ in 0..nthreads {
        let thread = SomaParcialThread::new(vetor.clone(), inicio, fim);
        threads.push(thread);
        inicio = fim;
        fim += segmento;
    }

    for thread in &mut threads {
        thread.run();
    }

    let soma_total: i32 = threads.iter().map(|t| t.soma_parcial).sum();
    println!("Soma total: {}", soma_total);
}

