trait Serie {
    fn new_position(&mut self, new_position: usize);
    fn compute(&self) -> f64;
    fn get(&self) -> String;
}

struct Fatorial {
    position: usize,
}

impl Serie for Fatorial {
    fn new_position(&mut self, new_position: usize) {
        self.position = new_position;
    }

    fn compute(&self) -> f64 {
        let mut result = 1;
        for i in 1..=self.position {
            result *= i;
        }
        result as f64
    }

    fn get(&self) -> String {
        format!("Position: {}, Value: {}", self.position, self.compute())
    }
}

struct Fibonacci {
    position: usize,
}

impl Serie for Fibonacci {
    fn new_position(&mut self, new_position: usize) {
        self.position = new_position;
    }

    fn compute(&self) -> f64 {
        if self.position <= 1 {
            self.position as f64
        } else {
            let (mut a, mut b, mut result) = (0, 1, 0);
            for _i in 2..=self.position {
                result = a + b;
                a = b;
                b = result;
            }
            result as f64
        }
    }

    fn get(&self) -> String {
        format!("Position: {}, Value: {}", self.position, self.compute())
    }
}

struct Harmonica {
    position: usize,
}

impl Serie for Harmonica {
    fn new_position(&mut self, new_position: usize) {
        self.position = new_position;
    }

    fn compute(&self) -> f64 {
        (1..=self.position).map(|i| 1.0 / i as f64).sum()
    }

    fn get(&self) -> String {
        format!("Position: {}, Value: {}", self.position, self.compute())
    }
}

struct Taylor {
    position: usize,
    fatorial_series: Fatorial,  // Adicionando instância de Fatorial
}

impl Serie for Taylor {
    fn new_position(&mut self, new_position: usize) {
        self.position = new_position;
        self.fatorial_series.new_position(new_position);  // Atualizando a posição em Fatorial
    }

    fn compute(&self) -> f64 {
        let mut result = 1.0;
        let x = self.position as f64;

        for i in 1..=10 {
            result += f64::powf(x, i as f64) / self.fatorial_series.compute();
        }

        result
    }

    fn get(&self) -> String {
        format!("Position: {}, Value: {}", self.position, self.compute())
    }
}

fn main() {
    let fibonacci_series = Fibonacci { position: 10 };
    let fatorial_series = Fatorial { position: 10 };
    let harmonica_series = Harmonica { position: 10 };
    let mut taylor_series = Taylor { position: 10, fatorial_series: Fatorial { position: 10 } };

    println!("Fibonacci: {}, Computed Value: {}", fibonacci_series.get(), fibonacci_series.compute());
    println!("Fatorial: {}, Computed Value: {}", fatorial_series.get(), fatorial_series.compute());
    println!("Série Harmônica: {}", harmonica_series.compute());

    taylor_series.new_position(10);
    println!("Série de Taylor para e^x: {}, Computed Value: {}", taylor_series.get(), taylor_series.compute());
}

