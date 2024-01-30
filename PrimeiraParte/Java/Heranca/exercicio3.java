interface Animal {
    String fazerSom();
    String getNome();
}

interface AnimalDomestico {
    String brincar();
    String alimentar();
}

class Cachorro implements Animal, AnimalDomestico {
    private String nome;

    public Cachorro(String nome) {
        this.nome = nome;
    }

    @Override
    public String fazerSom() {
        return "Au Au";
    }

    @Override
    public String getNome() {
        return nome;
    }

    @Override
    public String brincar() {
        return "Brincando";
    }

    @Override
    public String alimentar() {
        return "Alimentando";
    }
}

class Gato implements Animal, AnimalDomestico {
    private String nome;

    public Gato(String nome) {
        this.nome = nome;
    }

    @Override
    public String fazerSom() {
        return "Miau";
    }

    @Override
    public String getNome() {
        return nome;
    }

    @Override
    public String brincar() {
        return "Brincando";
    }

    @Override
    public String alimentar() {
        return "Alimentando";
    }
}

public class exercicio3 {
    public static void main(String[] args) {
        // Teste
        Cachorro cachorro = new Cachorro("Flokus");
        Gato gato = new Gato("Felicete");

        System.out.println("Cachorro:");
        System.out.println("Nome: " + cachorro.getNome());
        System.out.println("Faz som: " + cachorro.fazerSom());
        System.out.println("Brincando: " + cachorro.brincar());

        System.out.println("\nGato:");
        System.out.println("Nome: " + gato.getNome());
        System.out.println("Faz som: " + gato.fazerSom());
        System.out.println("Alimentando: " + gato.alimentar());
    }
}

