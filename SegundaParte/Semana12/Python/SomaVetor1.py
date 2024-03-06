import sys
import random
import threading

class SomaParcialThread(threading.Thread):
    def __init__(self, vetor, inicio, fim):
        super(SomaParcialThread, self).__init__()
        self.vetor = vetor
        self.inicio = inicio
        self.fim = fim
        self.soma_parcial = 0

    def run(self):
        for i in range(self.inicio, self.fim):
            self.soma_parcial += self.vetor[i]

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Uso: python SomaVetor1.py <tamanho> <nthreads>")
        sys.exit(1)

    tamanho = int(sys.argv[1])
    nthreads = int(sys.argv[2])

    vetor = [random.randint(0, 100) for _ in range(tamanho)]
    threads = []

    segmento = tamanho // nthreads
    inicio = 0
    fim = segmento

    for _ in range(nthreads):
        thread = SomaParcialThread(vetor, inicio, fim)
        threads.append(thread)
        thread.start()
        inicio = fim
        fim += segmento

    for thread in threads:
        thread.join()

    soma_total = sum(thread.soma_parcial for thread in threads)
    print("Soma total:", soma_total)

