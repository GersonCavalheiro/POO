class Animal:
    def __init__(self, nome):
        self.nome = nome

    def fazer_som(self):
        return "Som genérico do animal"

class AnimalDomestico:
    def brincar(self):
        return "Brincando"

    def alimentar(self):
        return "Alimentando"

class Cachorro(Animal, AnimalDomestico):
    pass

class Gato(Animal, AnimalDomestico):
    pass

# Teste
cachorro = Cachorro("Flokus")
gato = Gato("Felicete")

print("Cachorro:")
print("Nome:", cachorro.nome)
print("Faz som:", cachorro.fazer_som())
print("Brincando:", cachorro.brincar())

print("\nGato:")
print("Nome:", gato.nome)
print("Faz som:", gato.fazer_som())
print("Alimentando:", gato.alimentar())

