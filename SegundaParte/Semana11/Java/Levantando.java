class MinhaExcecao extends Exception {
  private int cod;
  public MinhaExcecao() {
    cod = 0;
  }
  public MinhaExcecao( int a ) {
    cod = a;
  }
  public String toString() {
    return "Ocorreu a MinhaExcecao com codigo ["+ cod + "]";
  }
}

class Levantando {
  public static void main( String args[]) {
    try {
      int a = 313;
      if( a > 10 ) {
        MinhaExcecao minhaExc = new MinhaExcecao( a );
        throw minhaExc;
      }
    } catch (MinhaExcecao e) {
      System.out.println ("Excecao capturada: " + e);
    }
  }
}

