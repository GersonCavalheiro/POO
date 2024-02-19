import java.util.HashMap;
import java.util.Map;

public class ExemploHashMap {
    public static void main(String[] args) {
        // Criar um HashMap
        Map<String, Cofrinho> mapa = new HashMap<>();

        // Adicionar Cofrinhos
        mapa.put("Carolina", new Cofrinho("Carolina", 100.0));
        mapa.put("Pedro", new Cofrinho("Pedro", 50.0));
        mapa.put("Simone", new Cofrinho("Simone", 75.0));

        // Acessar Cofrinhos por nome do proprietário
        System.out.println("Saldo do Cofrinho de Carolina: " + mapa.get("Carolina").getSaldo());

        // Iterar sobre os Cofrinhos
        System.out.println("Cofrinhos:");
        for (Cofrinho cofrinho : mapa.values()) {
            System.out.println("Proprietário: " + cofrinho.getProprietario() + ", Saldo: " + cofrinho.getSaldo());
        }
    }
}

