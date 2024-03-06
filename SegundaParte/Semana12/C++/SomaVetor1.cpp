#include <iostream>
#include <vector>
#include <thread>

class SomaParcialThread {
public:
    int inicio, fim;
    int somaParcial;

    SomaParcialThread(int* vetor, int inicio, int fim)
        : vetor(vetor), inicio(inicio), fim(fim), somaParcial(0) {}

    void operator()() {
        for (int i = inicio; i < fim; i++) {
            somaParcial += vetor[i];
        }
    }

private:
    int* vetor;
};

int main(int argc, char* argv[]) {
    int tamanho = std::stoi(argv[1]);
    int nthreads = std::stoi(argv[2]);

    int* vetor = new int[tamanho];
    // Inicializa o vetor com valores randômicos
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100;
    }

    std::vector<std::thread> threads;
    std::vector<SomaParcialThread> tasks;

    int segmento = tamanho / nthreads;
    int inicio = 0;
    int fim = segmento;

    for (int i = 0; i < nthreads; i++) {
        tasks.emplace_back(vetor, inicio, fim);
        threads.emplace_back(std::ref(tasks[i]));
        inicio = fim;
        fim += segmento;
    }

    for (auto& thread : threads) {
        thread.join();
    }

    int somaTotal = 0;
    for (const auto& task : tasks) {
        somaTotal += task.somaParcial;
    }

    std::cout << "Soma total: " << somaTotal << std::endl;

    delete[] vetor;

    return 0;
}

