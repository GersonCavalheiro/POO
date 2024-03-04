# Definição da classe de exceção personalizada
class DivisaoPorZeroException(Exception):
    def __init__(self):
        super().__init__("Erro: Divisão por zero!")


# Classe que realiza a divisão
class Divisor:
    @staticmethod
    def dividir(numerador, denominador):
        if denominador == 0:
            raise DivisaoPorZeroException()
        return numerador / denominador


# Função principal
def main():
    numerador = 10
    denominador1 = 2
    denominador2 = 0

    try:
        # Tentativa de divisão com denominador diferente de zero
        resultado1 = Divisor.dividir(numerador, denominador1)
        print("Resultado 1:", resultado1)

        # Tentativa de divisão com denominador igual a zero (lançará exceção)
        resultado2 = Divisor.dividir(numerador, denominador2)
        print("Resultado 2:", resultado2)  # Esta linha não será alcançada

    except DivisaoPorZeroException as e:
        # Captura da exceção personalizada
        print("Erro:", e)

    except Exception as e:
        # Captura de exceções genéricas (não é recomendado, mas incluído aqui para ilustração)
        print("Erro inesperado:", e)


if __name__ == "__main__":
    main()

