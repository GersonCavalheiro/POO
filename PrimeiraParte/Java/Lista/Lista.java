public class Lista {
    protected class No {
        int dado;
        No prox;

        No(int d, No p) {
            dado = d;
            prox = p;
        }

        void set(int d, No p) {
            dado = d;
            prox = p;
        }

        No get() {
            return prox;
        }

        int getDado() {
            return dado;
        }
    }

    protected No minhaLista;
    protected int tamLista;

    public Lista() {
        minhaLista = null;
        tamLista = 0;
    }

    public Lista(int d) {
        minhaLista = new No(d, null);
        tamLista = 1;
    }

    public Lista(Lista l) {
        if (l.minhaLista == null) {
            minhaLista = null;
            tamLista = 0;
        } else {
            minhaLista = new No(l.minhaLista.dado, null);
            No temp = l.minhaLista;
            No temp2 = minhaLista;
            while (temp.prox != null) {
                temp2.prox = new No(temp.prox.dado, null);
                temp = temp.prox;
                temp2 = temp2.prox;
            }
            tamLista = l.tamLista;
        }
    }

    public void insere(int d) {
        minhaLista = new No(d, minhaLista);
        tamLista++;
    }

    public int remove() {
        if (minhaLista == null) {
            return -1;  // Lista vazia
        }
        int valorRemovido = minhaLista.dado;
        minhaLista = minhaLista.prox;
        tamLista--;
        return valorRemovido;
    }

    public int primeiro() {
        if (minhaLista == null) {
            return -1;  // Lista vazia
        }
        return minhaLista.dado;
    }

    public int tamanho() {
        return tamLista;
    }
}

