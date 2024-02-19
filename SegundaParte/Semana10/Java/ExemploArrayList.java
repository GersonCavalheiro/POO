import java.util.ArrayList;
import java.util.List;

public class ExemploArrayList {
    public static void main(String[] args) {
        // Criar uma ArrayList
        List<Cofrinho> lista = new ArrayList<>();

        // Adicionar Cofrinhos
        lista.add(new Cofrinho("Carolina", 100.0));
        lista.add(new Cofrinho("Pedro", 50.0));
        lista.add(new Cofrinho("Simone", 75.0));

        // Acessar Cofrinhos
        System.out.println("Saldo do Cofrinho de Carolina: " + lista.get(0).getSaldo());

        // Iterar sobre os Cofrinhos
        System.out.println("Cofrinhos:");
        for (Cofrinho cofrinho : lista) {
            System.out.println("Proprietário: " + cofrinho.getProprietario() + ", Saldo: " + cofrinho.getSaldo());
        }
    }
}

