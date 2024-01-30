public class Main {
    public static void main(String[] args) {
        // Criando objetos polimórficos
        Lista[] listaPolimorfica = new Lista[3];
        listaPolimorfica[0] = new Pilha(1);
        listaPolimorfica[1] = new Fila(2);
        listaPolimorfica[2] = new Pilha(3);

        // Inserindo elementos nas listas
        for (int i = 0; i < 3; i++) {
            listaPolimorfica[i].insere(i + 1);
        }

        // Acessando o primeiro elemento de cada lista
        for (int i = 0; i < 3; i++) {
            System.out.println("Primeiro elemento da Lista " + (i + 1) + ": " + listaPolimorfica[i].primeiro());
        }

        // Removendo elementos das listas
        for (int i = 0; i < 3; i++) {
            int valorRemovido = listaPolimorfica[i].remove();
            System.out.println("Elemento removido da Lista " + (i + 1) + ": " + valorRemovido);
        }
    }
}

