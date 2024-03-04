NUM_ALUNOS = 10
vet = [10] * NUM_ALUNOS
acum = 0

print("Calcular a média de 10 notas.")
print("Para simplificar, todo mundo tirou 10!!!")

try:
    for cont in range(NUM_ALUNOS + 1):
        vet[cont] = 10

except Exception as e:
    print("Ups! Entrei uma nota que não devia!")
    print("Note: não há tratamento")

print("Observe a mesma falha, agora sem captura.")
for cont in range(NUM_ALUNOS + 1):
    acum += vet[cont]

print("Média =", acum / NUM_ALUNOS)

