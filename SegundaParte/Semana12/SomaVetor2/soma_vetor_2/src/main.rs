use rand::Rng;
use std::thread;
use std::sync::{Arc, Mutex};

struct SomaParcialThread {
    vetor: Arc<Vec<i32>>,
    inicio: usize,
    fim: usize,
    soma_parcial: Arc<Mutex<i32>>,
}

impl SomaParcialThread {
    fn new(vetor: Arc<Vec<i32>>, inicio: usize, fim: usize, soma_parcial: Arc<Mutex<i32>>) -> Self {
        SomaParcialThread {
            vetor,
            inicio,
            fim,
            soma_parcial,
        }
    }

    fn calcular_soma_parcial(&self) {
        let mut soma_local = 0;
        for i in self.inicio..self.fim {
            soma_local += self.vetor[i];
        }
        
        let mut soma_parcial = self.soma_parcial.lock().unwrap();
        *soma_parcial += soma_local;
    }
}

fn main() {
    let tamanho = 100;
    let nthreads = 4;

    let vetor: Arc<Vec<i32>> = Arc::new((0..tamanho).map(|_| rand::thread_rng().gen_range(0..100)).collect());
    let soma_parcial: Arc<Mutex<i32>> = Arc::new(Mutex::new(0));

    let mut handles = vec![];

    let segmento = tamanho / nthreads;
    let mut inicio = 0;

    for _ in 0..nthreads {
        let vetor_clone = Arc::clone(&vetor);
        let soma_parcial_clone = Arc::clone(&soma_parcial);

        let handle = thread::spawn(move || {
            let fim = inicio + segmento;
            let thread = SomaParcialThread::new(vetor_clone, inicio, fim, soma_parcial_clone);
            thread.calcular_soma_parcial();
        });

        handles.push(handle);
        inicio += segmento;
    }

    for handle in handles {
        handle.join().unwrap();
    }

    let resultado_final = soma_parcial.lock().unwrap();
    println!("Soma total: {}", *resultado_final);
}

