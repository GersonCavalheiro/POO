public class Pilha extends Lista {
    public Pilha() {
        super();
    }

    public Pilha(int d) {
        super(d);
    }

    // Métodos específicos da pilha
    public void empilha(int d) {
        insere(d);
    }

    public int desempilha() {
        return remove();
    }

    public int topo() {
        return primeiro();
    }
}
