from cofrinho import Cofrinho

# Cria uma instância do cofrinho
meu_cofrinho = Cofrinho()

# Realiza operações de depósito e saque
meu_cofrinho.deposita(100)
meu_cofrinho.saca(30)

# Lê e exibe o saldo atual
saldo_atual = meu_cofrinho.le_saldo()
print(f"Saldo atual do cofrinho: {saldo_atual}")

