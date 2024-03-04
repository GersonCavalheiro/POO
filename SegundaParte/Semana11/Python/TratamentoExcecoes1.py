try:
    # Tentativa de obter um número inteiro a partir da entrada do usuário
    input_str = input("Digite um número inteiro: ")
    numero = int(input_str)

    # Se a conversão for bem-sucedida, imprime o resultado
    print("Número digitado:", numero)

except ValueError as e:
    # Captura a exceção se a entrada não puder ser convertida para um número inteiro
    print("Erro:", e)

finally:
    # Código que será executado independentemente de ocorrer ou não uma exceção
    print("Este bloco sempre é executado.")

# Resto do código continua normalmente após o bloco try-except-finally
print("Programa continua a execução...")

