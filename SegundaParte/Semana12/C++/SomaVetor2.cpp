#include <iostream>
#include <vector>
#include <thread>
#include <mutex>

class Acumulador {
private:
    int somaParcial;
    std::mutex mtx;  // Mutex para sincronizar o acesso ao acumulador

public:
    Acumulador() : somaParcial(0) {}

    // Método para adicionar valor ao acumulador de forma segura
    void add(int valor) {
        std::lock_guard<std::mutex> lock(mtx);
        somaParcial += valor;
    }

    // Método para obter o valor atual do acumulador
    int get() const {
        return somaParcial;
    }
};

class SomadorThread {
private:
    const int* vetor;
    const int inicio;
    const int fim;
    Acumulador& acumulador;

public:
    SomadorThread(const int* vetor, int inicio, int fim, Acumulador& acumulador)
        : vetor(vetor), inicio(inicio), fim(fim), acumulador(acumulador) {}

    void operator()() const {
        int somaLocal = 0;
        for (int i = inicio; i < fim; i++) {
            somaLocal += vetor[i];
        }
        // Adiciona a soma local ao acumulador
        acumulador.add(somaLocal);
    }
};

int main(int argc, char* argv[]) {
    // Verifica se foram passados dois argumentos (tamanho e nthreads)
    if (argc != 3) {
        std::cout << "Uso: " << argv[0] << " <tamanho> <nthreads>" << std::endl;
        return 1;
    }

    int tamanho = std::stoi(argv[1]);
    int nthreads = std::stoi(argv[2]);

    int* vetor = new int[tamanho];

    // Inicializa o vetor com valores randômicos
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100;
    }

    Acumulador acumulador;
    std::vector<std::thread> threads;

    // Calcula o tamanho de cada segmento
    int segmento = tamanho / nthreads;
    int inicio = 0;
    int fim;

    // Inicializa e inicia as threads
    for (int i = 0; i < nthreads; i++) {
        fim = inicio + segmento;
        if (i == nthreads - 1) {
            // Última thread pega os elementos restantes
            fim = tamanho;
        }
        threads.emplace_back(SomadorThread(vetor, inicio, fim, acumulador));
        inicio = fim;
    }

    // Aguarda o término de todas as threads
    for (std::thread& thread : threads) {
        thread.join();
    }

    // Imprime o resultado final
    std::cout << "Resultado final (usando Acumulador): " << acumulador.get() << std::endl;

    delete[] vetor;

    return 0;
}

