public class Notas {
  public static void main(String[] args) {
   final int NUM_ALUNOS = 10;
   double [] vet = new double [NUM_ALUNOS] ;
   double acum = 0;
   System.out.println("Calcular a media de 10 notas.");
   System.out.println("Para simplificar, todo mundo tirou 10!!!");
   try {
     for( int cont = 0 ; cont <= NUM_ALUNOS ; ++cont )
     vet[cont] = 10;
   } catch( Exception e ) {
     System.out.print("Ups! Entrei uma nota que nao devia!");
     System.out.println(" Note: nao ha tratamento");
   }
   System.out.println("Observe a mesma falha, agora sem captura.");
   for( int cont = 0 ; cont <= NUM_ALUNOS ; cont++ )
     acum += vet[cont];
   System.out.println("Media = " + acum/NUM_ALUNOS);
 }
}

