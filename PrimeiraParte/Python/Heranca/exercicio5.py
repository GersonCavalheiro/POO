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
    def __init__(self, nome, cor):
        super().__init__(nome)
        self.cor = cor

    def fazer_som(self):
        return "Au Au"

class Gato(Animal, AnimalDomestico):
    def __init__(self, nome, cor):
        super().__init__(nome)
        self.cor = cor

    def fazer_som(self):
        return "Miau"

def fazer_som_para_lista(animais):
    for animal in animais:
        print(animal.fazer_som())

# Teste
animal_generico = Animal("Animal Genérico")
cachorro = Cachorro("Flokus", "Marrom")
gato = Gato("Felicete", "Branco")

lista_animais = [animal_generico, cachorro, gato]

fazer_som_para_lista(lista_animais)

