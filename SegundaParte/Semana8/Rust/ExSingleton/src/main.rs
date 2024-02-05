use std::sync::Once;
use std::cell::UnsafeCell;

struct Log {
    cont: usize,
    log: Vec<String>,
}

impl Log {
    fn new() -> Log {
        Log { cont: 0, log: Vec::new() }
    }

    fn get_instance() -> &'static UnsafeCell<Log> {
        static mut INSTANCE: *const UnsafeCell<Log> = std::ptr::null();
        static INIT: Once = Once::new();

        INIT.call_once(|| {
            unsafe {
                INSTANCE = Box::into_raw(Box::new(UnsafeCell::new(Log::new())));
            }
        });

        unsafe { &*INSTANCE }
    }

    fn insere_atividade(&mut self, class_name: &str) {
        self.cont += 1;
        self.log.push(format!("{} & {}", self.cont, class_name));
    }

    fn print_log(&self) {
        println!("Log de criação de objetos:");
        for entry in &self.log {
            println!("{}", entry);
        }
    }
}

struct XXX;

impl XXX {
    fn new() -> XXX {
        let inst = unsafe { &mut *Log::get_instance().get() };
        inst.insere_atividade("XXX");
        XXX
    }
}

struct YYY;

impl YYY {
    fn new() -> YYY {
        let inst = unsafe { &mut *Log::get_instance().get() };
        inst.insere_atividade("YYY");
        YYY
    }
}

struct ZZZ;

impl ZZZ {
    fn new() -> ZZZ {
        let inst = unsafe { &mut *Log::get_instance().get() };
        inst.insere_atividade("ZZZ");
        ZZZ
    }
}

fn main() {
    let _objeto_xxx1 = XXX::new();
    let _objeto_xxx2 = XXX::new();
    let _objeto_yyy = YYY::new();
    let _objeto_xxx3 = XXX::new();
    let _objeto_zzz = ZZZ::new();

    let log_instance = unsafe { &*Log::get_instance().get() };
    log_instance.print_log();
}

