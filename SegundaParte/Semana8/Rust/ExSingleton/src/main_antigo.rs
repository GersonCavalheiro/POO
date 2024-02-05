trait Loggable {
    fn class_name(&self) -> &'static str;
}

struct Log {
    cont: u32,
    log: Vec<String>,
}

impl Log {
    fn new() -> Self {
        Log {
            cont: 0,
            log: Vec::new(),
        }
    }

    fn insere_atividade<T: Loggable>(&mut self, obj: &T) {
        self.cont += 1;
        self.log.push(format!("{} & {}", self.cont, obj.class_name()));
    }

    fn print_log(&self) {
        println!("Log de criação de objetos:");
        for entry in &self.log { println!("{}", entry); }
    }
}

struct XXX;

impl Loggable for XXX {
    fn class_name(&self) -> &'static str { "XXX" }
}

struct YYY;

impl Loggable for YYY {
    fn class_name(&self) -> &'static str { "YYY" }
}

struct ZZZ;

impl Loggable for ZZZ {
    fn class_name(&self) -> &'static str { "ZZZ" }
}

fn main() {
    let mut log = Log::new();

    let objeto_xxx1 = XXX;
    log.insere_atividade(&objeto_xxx1);

    let objeto_xxx2 = XXX;
    log.insere_atividade(&objeto_xxx2);

    let objeto_yyy = YYY;
    log.insere_atividade(&objeto_yyy);

    let objeto_xxx3 = XXX;
    log.insere_atividade(&objeto_xxx3);

    let objeto_zzz = ZZZ;
    log.insere_atividade(&objeto_zzz);

    log.print_log();
}

