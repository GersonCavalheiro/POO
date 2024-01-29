public class Taylor extends Serie {
    public Taylor(int position) {
        super(position);
    }

    @Override
    public int compute() {
        double result = 1.0; 
        double x = position; 

        for (int i = 1; i <= 10; i++) {
            result += (Math.pow(x, i) / fatorial(i));
        }

        return (int) result; // <<-- Os valores desta série saõ em ponto flutuante.  
    }

    // Método auxiliar para calcular o fatorial usando a classe Fatorial
    private int fatorial(int n) {
        Fatorial fatorial = new Fatorial(n);
        return fatorial.compute();
    }
}

