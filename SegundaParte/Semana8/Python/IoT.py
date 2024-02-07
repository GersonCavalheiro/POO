class Peripheral:
    def initialize(self):
        print("Inicializando periférico.")

class TemperatureSensor(Peripheral):
    def read_temperature(self):
        print("Lendo temperatura do sensor.")

class I2CCommunication(Peripheral):
    def send_data(self):
        print("Enviando dados via I²C.")

class EmbeddedDevice(TemperatureSensor, I2CCommunication):
    def process(self):
        self.initialize()        # Herdado de Peripheral
        self.read_temperature()   # Herdado de TemperatureSensor
        self.send_data()          # Herdado de I2CCommunication

# Criando uma instância de EmbeddedDevice e chamando o método process
my_device = EmbeddedDevice()
my_device.process()

