interface Peripheral {
    void initialize();
}

interface TemperatureSensor extends Peripheral {
    void readTemperature();
}

interface I2CCommunication extends Peripheral {
    void sendData();
}

class EmbeddedDevice implements TemperatureSensor, I2CCommunication {
    @Override
    public void initialize() {
        System.out.println("Inicializando periférico.");
    }

    @Override
    public void readTemperature() {
        System.out.println("Lendo temperatura do sensor.");
    }

    @Override
    public void sendData() {
        System.out.println("Enviando dados via I²C.");
    }

    public void process() {
        initialize();
        readTemperature();
        sendData();
    }
}

public class IoT_Interface {
    public static void main(String[] args) {
        EmbeddedDevice embeddedDevice = new EmbeddedDevice();
        embeddedDevice.process();
    }
}

