class Cofrinho:
    def __init__(self):
        self.saldo = 0

    def deposita(self, valor):
        if valor > 0:
            self.saldo += valor
        else:
            print("O valor do depósito deve ser maior que zero.")

    def saca(self, valor):
        if valor > 0 and valor <= self.saldo:
            self.saldo -= valor
        elif valor <= 0:
            print("O valor do saque deve ser maior que zero.")
        else:
            print("Saldo insuficiente para o saque.")

    def le_saldo(self):
        return self.saldo

