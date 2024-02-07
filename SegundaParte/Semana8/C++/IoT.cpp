#include <iostream>

// Classe base para periféricos
class Peripheral {
public:
    void initialize() {
        std::cout << "Inicializando periférico." << std::endl;
    }
};

// Classe para gerenciar sensores de temperatura
class TemperatureSensor : public Peripheral {
public:
    void readTemperature() {
        std::cout << "Lendo temperatura do sensor." << std::endl;
    }
};

// Classe para gerenciar comunicação I²C
class I2CCommunication : public Peripheral {
public:
    void sendData() {
        std::cout << "Enviando dados via I²C." << std::endl;
    }
};

// Classe que herda de ambas as classes
class EmbeddedDevice : public TemperatureSensor, public I2CCommunication {
public:
    void process() {
	TemperatureSensor::initialize(); // Herdado de Peripheral
        readTemperature(); // Herdado de TemperatureSensor
        sendData(); // Herdado de I2CCommunication
    }
};

int main() {
    EmbeddedDevice myDevice;
    myDevice.process();

    return 0;
}
