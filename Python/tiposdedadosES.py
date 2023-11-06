import sys

# Declara variáveis para cada tipo de dado
integer_var = None
float_var = None
string_var = None
boolean_var = None

# Solicita ao usuário que insira um valor para cada variável
try:
    integer_var = int(input("Digite um valor inteiro: "))
    float_var = float(input("Digite um valor decimal: "))
    string_var = input("Digite uma string: ")
    boolean_var = input("Digite um valor booleano (True/False): ").lower() == "true"
except ValueError:
    print("Valor inválido. Certifique-se de inserir o tipo de valor correto.")
    sys.exit(1)

# Imprime o nome do tipo, seu tamanho na memória e seu valor atual
print(f"Tipo de Dado\tTamanho (bytes)\tValor")
print(f"int\t\t\t{sys.getsizeof(integer_var)}\t\t{integer_var}")
print(f"float\t\t\t{sys.getsizeof(float_var)}\t\t{float_var}")
print(f"string\t\t\t{sys.getsizeof(string_var)}\t\t{string_var}")
print(f"bool\t\t\t{sys.getsizeof(boolean_var)}\t\t{boolean_var}")

