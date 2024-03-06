import java.util.Random;

class SomaParcialThread extends Thread {
    private int[] vetor;
    private int inicio, fim;
    private int somaParcial;

    public SomaParcialThread(int[] vetor, int inicio, int fim) {
        this.vetor = vetor;
        this.inicio = inicio;
        this.fim = fim;
        this.somaParcial = 0;
    }

    public int getSomaParcial() {
        return somaParcial;
    }

    @Override
    public void run() {
        for (int i = inicio; i < fim; i++) {
            somaParcial += vetor[i];
        }
    }
}

public class SomaVetor1 {
    public static void main(String[] args) throws InterruptedException {
        int tamanho = Integer.parseInt(args[0]);
        int nthreads = Integer.parseInt(args[1]);

        int[] vetor = new int[tamanho];
        // Inicializa o vetor com valores randômicos
        Random random = new Random();
        for (int i = 0; i < tamanho; i++) {
            vetor[i] = random.nextInt(100);
        }



        SomaParcialThread[] threads = new SomaParcialThread[nthreads];
        
        int segmento = tamanho / nthreads;
        int inicio = 0;
        int fim = segmento;

        for (int i = 0; i < nthreads; i++) {
            threads[i] = new SomaParcialThread(vetor, inicio, fim);
            threads[i].start();
            inicio = fim;
            fim += segmento;
        }

        int somaTotal = 0;

        for (int i = 0; i < nthreads; i++) {
            threads[i].join();
            somaTotal += threads[i].getSomaParcial();
        }

        System.out.println("Soma total: " + somaTotal);
    }
}

