class Peripheral {
    void initialize() {
        System.out.println("Inicializando periférico.");
    }
}

class TemperatureSensor extends Peripheral {
    void readTemperature() {
        System.out.println("Lendo temperatura do sensor.");
    }
}

class I2CCommunication extends Peripheral {
    void sendData() {
        System.out.println("Enviando dados via I²C.");
    }
}

class EmbeddedDevice extends Peripheral {
    private TemperatureSensor temperatureSensor = new TemperatureSensor();
    private I2CCommunication i2cCommunication = new I2CCommunication();

    void process() {
        initialize(); // Herdado de Peripheral
        temperatureSensor.readTemperature(); // Herdado de TemperatureSensor
        i2cCommunication.sendData(); // Herdado de I2CCommunication
    }
}

public class IoT_Composicao {
    public void run() {
        EmbeddedDevice myDevice = new EmbeddedDevice();
        myDevice.process();
    }

    public static void main(String[] args) {
        IoT iot = new IoT();
        iot.run();
    }
}

