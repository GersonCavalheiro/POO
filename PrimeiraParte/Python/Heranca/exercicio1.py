class Animal:
    def __init__(self, nome):
        self.nome = nome

    def fazer_som(self):
        return "Som genérico do animal"

class Cachorro(Animal):
    def latir(self):
        return "Au Au"

class Gato(Animal):
    def miar(self):
        return "Miau"

# Teste
cachorro = Cachorro("Flokus")
gato = Gato("Felicete")

print("Cachorro:")
print("Nome:", cachorro.nome)
print("Faz som:", cachorro.fazer_som())
print("Latindo:", cachorro.latir())

print("\nGato:")
print("Nome:", gato.nome)
print("Faz som:", gato.fazer_som())
print("Miau:", gato.miar())

