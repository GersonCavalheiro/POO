# Definição da exceção personalizada
class SaldoInsuficienteException(Exception):
    def __init__(self):
        super().__init__("Saldo insuficiente para realizar o saque.")

# Definição da classe Cofrinho
class Cofrinho:
    def __init__(self):
        self.saldo = 0

    # Método para depositar dinheiro no cofrinho
    def deposita(self, valor):
        self.saldo += valor
        print(f"Depósito de {valor} realizado. Novo saldo: {self.saldo}")

    # Método para sacar dinheiro do cofrinho
    def saca(self, valor):
        if valor > self.saldo:
            raise SaldoInsuficienteException()
        self.saldo -= valor
        print(f"Saque de {valor} realizado. Novo saldo: {self.saldo}")

# Definição da classe Emprestimo
class Emprestimo:
    # Método para obter um empréstimo
    @staticmethod
    def obtem_emprestimo(cofrinho, valor):
        print(f"Saldo insuficiente. Solicitando empréstimo de {valor}")
        cofrinho.deposita(valor)
        print(f"Empréstimo recebido. Novo saldo: {cofrinho.saldo}")

# Função principal
def main():
    # Criando um cofrinho
    meu_cofrinho = Cofrinho()
    sacou = False

    while not sacou:
        # Tentando sacar um valor maior do que o saldo disponível
        try:
            meu_cofrinho.saca(50)
            sacou = True
        except SaldoInsuficienteException as e:
            # Tratamento da exceção: obtendo um empréstimo e tentando sacar novamente
            print(f"Erro: {e}")
            Emprestimo.obtem_emprestimo(meu_cofrinho, 50)

if __name__ == "__main__":
    main()

