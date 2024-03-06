import sys
import random
import threading

class Acumulador:
    def __init__(self):
        self.soma_parcial = 0
        self.lock = threading.Lock()

    def add(self, valor):
        with self.lock:
            self.soma_parcial += valor

    def get(self):
        return self.soma_parcial

class SomadorThread(threading.Thread):
    def __init__(self, vetor, inicio, fim, acumulador):
        super(SomadorThread, self).__init__()
        self.vetor = vetor
        self.inicio = inicio
        self.fim = fim
        self.acumulador = acumulador

    def run(self):
        soma_local = sum(self.vetor[i] for i in range(self.inicio, self.fim))
        self.acumulador.add(soma_local)

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Uso: python SomaVetor2.py <tamanho> <nthreads>")
        sys.exit(1)

    tamanho = int(sys.argv[1])
    nthreads = int(sys.argv[2])

    vetor = [random.randint(0, 100) for _ in range(tamanho)]
    acumulador = Acumulador()
    threads = []

    segmento = tamanho // nthreads
    inicio = 0
    fim = segmento

    for _ in range(nthreads):
        thread = SomadorThread(vetor, inicio, fim, acumulador)
        threads.append(thread)
        thread.start()
        inicio = fim
        fim += segmento

    for thread in threads:
        thread.join()

    soma_total = acumulador.get()
    print("Resultado final (usando Acumulador):", soma_total)

