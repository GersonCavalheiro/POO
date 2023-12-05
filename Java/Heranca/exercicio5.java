import java.util.ArrayList;
import java.util.List;

interface Animal {
    String fazerSom();
    String getNome();
}

interface AnimalDomestico {
    String acaoDomestica();
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
    public String acaoDomestica() {
        return "Cachorro está fazendo uma ação específica de animal doméstico";
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
    public String acaoDomestica() {
        return "Gato está fazendo uma ação específica de animal doméstico";
    }
}

public class exercicio5 {
    public static void main(String[] args) {
        // Teste
        Animal animalGenerico = new Animal() {
            @Override
            public String fazerSom() {
                return "Som genérico do animal";
            }

            @Override
            public String getNome() {
                return "Animal Genérico";
            }
        };

        Cachorro cachorro = new Cachorro("Flokus");
        Gato gato = new Gato("Felicete");

        List<Animal> listaAnimais = new ArrayList<>();
        listaAnimais.add(animalGenerico);
        listaAnimais.add(cachorro);
        listaAnimais.add(gato);

        fazerAcoesParaLista(listaAnimais);
    }

    static void fazerAcoesParaLista(List<Animal> animais) {
        for (Animal animal : animais) {
            System.out.println(animal.fazerSom());
            System.out.println("Nome: " + animal.getNome());

            if (animal instanceof AnimalDomestico) {
                System.out.println("Ação específica de animal doméstico: " + ((AnimalDomestico) animal).acaoDomestica());
            }

            System.out.println("-----------");
        }
    }
}

