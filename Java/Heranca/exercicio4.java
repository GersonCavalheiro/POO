interface Animal {
    String fazerSom();
    String getNome();
}

interface AnimalDomestico {
    String brincar();
    String alimentar();
}

class AnimalBase implements Animal {
    private String nome;

    public AnimalBase(String nome) {
        this.nome = nome;
    }

    @Override
    public String fazerSom() {
        return "Som genérico do animal";
    }

    @Override
    public String getNome() {
        return nome;
    }
}

class Cachorro extends AnimalBase implements AnimalDomestico {
    private String cor;

    public Cachorro(String nome, String cor) {
        super(nome);
        this.cor = cor;
    }

    @Override
    public String fazerSom() {
        return "Au Au";
    }

    @Override
    public String brincar() {
        return "Cachorro " + super.getNome() + " está brincando";
    }

    @Override
    public String alimentar() {
        return "Cachorro " + super.getNome() + " está se alimentando";
    }
}

class Gato extends AnimalBase implements AnimalDomestico {
    private String cor;

    public Gato(String nome, String cor) {
        super(nome);
        this.cor = cor;
    }

    @Override
    public String fazerSom() {
        return "Miau";
    }

    @Override
    public String brincar() {
        return "Gato " + super.getNome() + " está brincando";
    }

    @Override
    public String alimentar() {
        return "Gato " + super.getNome() + " está se alimentando";
    }
}

public class exercicio4 {
    public static void main(String[] args) {
        // Teste
        Cachorro cachorro = new Cachorro("Flokus", "Marrom");
        Gato gato = new Gato("Felicete", "Branco");

        System.out.println("Cachorro:");
        System.out.println("Nome: " + cachorro.getNome());
        System.out.println("Faz som: " + cachorro.fazerSom());
        System.out.println("Brincando: " + cachorro.brincar());
        System.out.println("Alimentando: " + cachorro.alimentar());

        System.out.println("\nGato:");
        System.out.println("Nome: " + gato.getNome());
        System.out.println("Faz som: " + gato.fazerSom());
        System.out.println("Brincando: " + gato.brincar());
        System.out.println("Alimentando: " + gato.alimentar());
    }
}

