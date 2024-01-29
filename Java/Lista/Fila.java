public class Fila extends Lista {
    public Fila() {
        super();
    }

    public Fila(int d) {
        super(d);
    }

    // Métodos específicos da fila
    public void enfileira(int d) {
        insere(d);
    }

    public int desenfileira() {
        if (minhaLista == null) {
            return -1;  // Fila vazia
        }
        No temp = minhaLista;
        No tempAnterior = null;
        while (temp.prox != null) {
            tempAnterior = temp;
            temp = temp.prox;
        }
        int valorRemovido = temp.dado;
        if (tempAnterior == null) {
            minhaLista = null;
        } else {
            tempAnterior.prox = null;
        }
        tamLista--;
        return valorRemovido;
    }

    public int frente() {
        if (minhaLista == null) {
            return -1;  // Fila vazia
        }
        return minhaLista.dado;
    }
}

