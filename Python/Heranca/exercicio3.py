class Animal:
    def __init__(self, nome):
        self.nome = nome

    def fazer_som(self):
        return "Som genérico do animal"

class Cachorro(Animal):
    def fazer_som(self):
        return "Au Au"

class Gato(Animal):
    def fazer_som(self):
        return "Miau"

# Teste
cachorro = Cachorro("Flokus")
gato = Gato("Felicete")

print("Cachorro faz som:", cachorro.fazer_som())
print("Gato faz som:", gato.fazer_som())

