import java.util.Scanner;
import java.util.Locale;

public class TiposDeDadosES {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
	Locale brLocale = new Locale("pt", "BR");
 //     scanner.useLocale(Locale.US); // Utilize PONTO como separador decimal
        scanner.useLocale(brLocale); // Utilize VIRGULA como separador decimal

        int intVar;
        float floatVar;
        double doubleVar;
        char charVar;
        boolean boolVar;
        String stringVar;

        System.out.print("Digite um valor inteiro: ");
        intVar = scanner.nextInt();

        System.out.print("Digite um valor decimal (float): ");
        floatVar = scanner.nextFloat();

        System.out.print("Digite um valor decimal (double): ");
        doubleVar = scanner.nextDouble();

        System.out.print("Digite um caractere: ");
        charVar = scanner.next().charAt(0);

        System.out.print("Digite um valor booleano (true ou false): ");
        boolVar = scanner.nextBoolean();

        scanner.nextLine(); // Consumir a nova linha após a leitura booleana

        System.out.print("Digite uma string: ");
        stringVar = scanner.nextLine();

        System.out.println("Tipo de Dado\tTamanho (bytes)\tValor");
        System.out.println("int\t\t\t" + Integer.BYTES + "\t\t" + intVar);
        System.out.println("float\t\t\t" + Float.BYTES + "\t\t" + floatVar);
        System.out.println("double\t\t\t" + Double.BYTES + "\t\t" + doubleVar);
        System.out.println("char\t\t\t" + Character.BYTES + "\t\t" + charVar);
        System.out.println("boolean\t\t\t" + Byte.BYTES + "\t\t" + boolVar);
        System.out.println("string\t\t\tReference\t" + stringVar);

        scanner.close();
    }
}

