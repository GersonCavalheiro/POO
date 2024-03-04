try:
    idade = int(input("Quantos anos tens? (digite um valor inteiro): "))
    idade += 1
    print(f"Ano que vem tu teras: {idade} anos!")

except IOError as exception:
    print(f"Erro de entrada e saída: {exception}")

except ValueError as exception:
    print("Não foi digitado um número como entrada")

except Exception as exception:
    print("Vou dar o tratamento mais genérico:", exception)

