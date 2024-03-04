import java.util.Scanner;

public class TratamentoExcecoes1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite um número inteiro: ");
        String input = scanner.nextLine();

        try {
            // Tentativa de converter a string para um número inteiro
            int numero = Integer.parseInt(input);

            // Se a conversão for bem-sucedida, imprime o resultado
            System.out.println("Número digitado: " + numero);
        } catch (NumberFormatException e) {
            // Captura a exceção se a entrada não puder ser convertida para um número inteiro
            System.out.println("Erro: A entrada não é um número inteiro válido.");
        } finally {
            // Código que será executado independentemente de ocorrer ou não uma exceção
            System.out.println("Este bloco sempre é executado.");
        }

        // Resto do código continua normalmente após o bloco try-catch-finally
        System.out.println("Programa continua a execução...");

        // Fechar o scanner
        scanner.close();
    }
}

