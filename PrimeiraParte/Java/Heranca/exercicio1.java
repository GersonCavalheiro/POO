class Animal {
    private String nome;

    public Animal(String nome) {
        this.nome = nome;
    }

    public String fazerSom() {
        return "Som genérico do animal";
    }

    public String getNome() {
        return nome;
    }
}

class Cachorro extends Animal {
    public Cachorro(String nome) {
        super(nome);
    }

    public String latir() {
        return "Au Au";
    }
}

class Gato extends Animal {
    public Gato(String nome) {
        super(nome);
    }

    public String miar() {
        return "Miau";
    }
}

public class exercicio1 {
    public static void main(String[] args) {
        // Teste
        Cachorro cachorro = new Cachorro("Flokus");
        Gato gato = new Gato("Felicete");

        System.out.println("Cachorro:");
        System.out.println("Nome: " + cachorro.getNome());
        System.out.println("Faz som: " + cachorro.fazerSom());
        System.out.println("Latindo: " + cachorro.latir());

        System.out.println("\nGato:");
        System.out.println("Nome: " + gato.getNome());
        System.out.println("Faz som: " + gato.fazerSom());
        System.out.println("Miau: " + gato.miar());
    }
}

