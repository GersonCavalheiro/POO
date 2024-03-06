import java.util.Random;

class Acumulador {
    private int somaParcial = 0;

    // Método sincronizado para adicionar valor ao acumulador
    public synchronized void add(int valor) {
        somaParcial += valor;
    }

    // Método para obter o valor atual do acumulador
    public int get() {
        return somaParcial;
    }
}

class SomadorThread extends Thread {
    private final int[] vetor;
    private final int inicio;
    private final int fim;
    private final Acumulador acumulador;

    public SomadorThread(int[] vetor, int inicio, int fim, Acumulador acumulador) {
        this.vetor = vetor;
        this.inicio = inicio;
        this.fim = fim;
        this.acumulador = acumulador;
    }

    @Override
    public void run() {
        int somaLocal = 0;
        for (int i = inicio; i < fim; i++) {
            somaLocal += vetor[i];
        }
        // Adiciona a soma local ao acumulador
        acumulador.add(somaLocal);
    }
}

public class SomaVetor2 {
    public static void main(String[] args) {
        // Verifica se foram passados dois argumentos (tamanho e nthreads)
        if (args.length != 2) {
            System.out.println("Uso: java SomaVetor2 <tamanho> <nthreads>");
            System.exit(1);
        }

        int tamanho = Integer.parseInt(args[0]);
        int nthreads = Integer.parseInt(args[1]);

        int[] vetor = new int[tamanho];

        // Inicializa o vetor com valores randômicos
        Random random = new Random();
        for (int i = 0; i < tamanho; i++) {
            vetor[i] = random.nextInt(100);
        }

        Acumulador acumulador = new Acumulador();
        SomadorThread[] threads = new SomadorThread[nthreads];

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
            threads[i] = new SomadorThread(vetor, inicio, fim, acumulador);
            threads[i].start();
            inicio = fim;
        }

        // Aguarda o término de todas as threads
        try {
            for (SomadorThread thread : threads) {
                thread.join();
            }
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        // Imprime o resultado final
        System.out.println("Resultado final (usando Acumulador): " + acumulador.get());
    }
}

