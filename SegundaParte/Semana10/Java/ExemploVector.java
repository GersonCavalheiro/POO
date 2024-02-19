import java.util.Vector;

public class ExemploVector {
    public static void main(String[] args) {
        // Criar um Vector
        Vector<Cofrinho> vector = new Vector<>();

        // Adicionar Cofrinhos
        vector.add(new Cofrinho("Carolina", 100.0));
        vector.add(new Cofrinho("Pedro", 50.0));
        vector.add(new Cofrinho("Simone", 75.0));

        // Acessar Cofrinhos
        System.out.println("Saldo do Cofrinho de Carolina: " + vector.get(0).getSaldo());

        // Iterar sobre os Cofrinhos
        System.out.println("Cofrinhos:");
        for (Cofrinho cofrinho : vector) {
            System.out.println("Proprietário: " + cofrinho.getProprietario() + ", Saldo: " + cofrinho.getSaldo());
        }
    }
}

