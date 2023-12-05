class Cachorro extends Animal {
    public Cachorro(String nome) {
        super(nome);
    }

    @Override
    public String fazerSom() {
        return "Au Au";
    }
}

class Gato extends Animal {
    public Gato(String nome) {
        super(nome);
    }

    @Override
    public String fazerSom() {
        return "Miau";
    }
}

public class exercicio2 {
    public static void main(String[] args) {
        // Teste
        Cachorro cachorro = new Cachorro("Flokus");
        Gato gato = new Gato("Felicete");

        System.out.println("Cachorro faz som: " + cachorro.fazerSom());
        System.out.println("Gato faz som: " + gato.fazerSom());
    }
}

