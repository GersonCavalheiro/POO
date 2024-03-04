// Definição da classe de exceção personalizada
class DivisaoPorZeroException extends Exception {
    public DivisaoPorZeroException() {
        super("Erro: Divisão por zero!");
    }
}

// Classe que realiza a divisão
class Divisor {
    public static double dividir(int numerador, int denominador) throws DivisaoPorZeroException {
        if (denominador == 0) {
            throw new DivisaoPorZeroException();
        }
        return (double) numerador / denominador;
    }
}

public class TratamentoExcecoes2 {
    public static void main(String[] args) {
        int numerador = 10;
        int denominador1 = 2;
        int denominador2 = 0;

        try {
            // Tentativa de divisão com denominador diferente de zero
            double resultado1 = Divisor.dividir(numerador, denominador1);
            System.out.println("Resultado 1: " + resultado1);

            // Tentativa de divisão com denominador igual a zero (lançará exceção)
            double resultado2 = Divisor.dividir(numerador, denominador2);
            System.out.println("Resultado 2: " + resultado2); // Esta linha não será alcançada

        } catch (DivisaoPorZeroException e) {
            // Captura da exceção personalizada
            System.out.println("Erro: " + e.getMessage());
        } catch (Exception e) {
            // Captura de exceções genéricas (não é recomendado, mas incluído aqui para ilustração)
            System.out.println("Erro inesperado: " + e.getMessage());
        }
    }
}

