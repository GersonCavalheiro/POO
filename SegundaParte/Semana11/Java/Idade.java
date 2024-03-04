import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Idade {
  public static void main(String[] args) {
    try {
      BufferedReader teclado = new BufferedReader( new InputStreamReader(System.in) );
      System.out.println("Quantos anos tens? (digite um valor inteiro)");
      String linha = teclado.readLine();
      int idade = Integer.parseInt(linha);
      ++idade;
      System.out.println("Ano que vem tu teras: " + idade + " anos!");
     } catch (IOException exception) {
      System.out.println("Erro de entrada e saida " + exception);
     } catch (NumberFormatException exception) {
      System.out.println("Nao digitado um numero como entrada");
     } catch (Exception exception) {
      System.out.println("Vou dar o tratamento mais generico");
   }
 }
}

