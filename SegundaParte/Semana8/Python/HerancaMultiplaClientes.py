class DescontoFrete:
    def get_desconto_frete(self):
        return 0


class ClienteBase:
    def __init__(self):
        self.nome = ""
        self.endereco = ""
        self.numero_compras = 0

    def set_nome(self, nome):
        self.nome = nome

    def set_endereco(self, endereco):
        self.endereco = endereco

    def exibir_informacoes(self):
        print(f"Nome: {self.nome}\nEndereco: {self.endereco}")

    def efetuar_compra(self):
        self.numero_compras += 1

    def get_numero_compras(self):
        return self.numero_compras

    def get_desconto(self):
        return 0


class Cliente(ClienteBase, DescontoFrete):
    pass


class ClientePremium(Cliente):
    def get_desconto(self):
        if 10 <= self.numero_compras < 20:
            return 5
        elif 20 <= self.numero_compras < 30:
            return 10
        elif 30 <= self.numero_compras < 40:
            return 15
        elif self.numero_compras >= 40:
            return 20
        return 0

    def get_desconto_frete(self):
        return 0 if self.numero_compras <= 10 else 20


class ClienteComercial(Cliente):
    def get_desconto_frete(self):
        return 50 if self.numero_compras <= 10 else 100


# Exemplo de uso
cliente = Cliente()
cliente.set_nome("Cliente Cliente")
cliente.set_endereco("Rua Cliente, 456")
cliente.exibir_informacoes()
cliente.efetuar_compra()
cliente.efetuar_compra()
print(f"Desconto atual: {cliente.get_desconto()}%")
print(f"Desconto de frete: {cliente.get_desconto_frete()}%")

print("\n--------------------------------------")

cliente_premium = ClientePremium()
cliente_premium.set_nome("Cliente Premium")
cliente_premium.set_endereco("Rua Premium, 456")
cliente_premium.exibir_informacoes()
cliente_premium.efetuar_compra()
cliente_premium.efetuar_compra()
print(f"Desconto atual: {cliente_premium.get_desconto()}%")
print(f"Desconto de frete: {cliente_premium.get_desconto_frete()}%")

print("\n--------------------------------------")

# Exemplo de manipulação da classe ClienteComercial
cliente_comercial = ClienteComercial()
cliente_comercial.set_nome("Cliente Comercial")
cliente_comercial.set_endereco("Rua Comercial, 789")
cliente_comercial.exibir_informacoes()
cliente_comercial.efetuar_compra()
print(f"Desconto atual: {cliente_comercial.get_desconto()}%")
print(f"Desconto de frete: {cliente_comercial.get_desconto_frete()}%")

