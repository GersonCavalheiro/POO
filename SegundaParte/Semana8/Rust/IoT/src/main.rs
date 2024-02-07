trait Peripheral {
    fn initialize(&self) {
        println!("Inicializando periférico.");
    }
}

trait TemperatureSensor: Peripheral {
    fn read_temperature(&self) {
        println!("Lendo temperatura do sensor.");
    }
}

trait I2CCommunication: Peripheral {
    fn send_data(&self) {
        println!("Enviando dados via I²C.");
    }
}

struct EmbeddedDevice;

impl Peripheral for EmbeddedDevice {}

impl TemperatureSensor for EmbeddedDevice {}

impl I2CCommunication for EmbeddedDevice {}

impl EmbeddedDevice {
    fn process(&self) {
        self.initialize();        // Herdado de Peripheral
        self.read_temperature();   // Herdado de TemperatureSensor
        self.send_data();          // Herdado de I2CCommunication
    }
}

fn main() {
    // Criando uma instância de EmbeddedDevice e chamando o método process
    let my_device = EmbeddedDevice;
    my_device.process();
}

