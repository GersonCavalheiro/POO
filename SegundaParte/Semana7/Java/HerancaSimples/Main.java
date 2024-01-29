public class Main {
    public static void main(String[] args) {
        Fibonacci fibonacciSeries = new Fibonacci(10);
        Fatorial fatorialSeries = new Fatorial(10);
	Harmonica harmonicaSeries = new Harmonica(10);
	Taylor taylorSeries = new Taylor(10);

        System.out.println("Fibonacci: " + fibonacciSeries.get() + ", Computed Value: " + fibonacciSeries.compute());
        System.out.println("Fatorial: " + fatorialSeries.get() + ", Computed Value: " + fatorialSeries.compute());
        System.out.println("Série Harmônica: " + harmonicaSeries.compute());
        System.out.println("Série de Taylor para e^x: " + taylorSeries.get() + ", Computed Value: " + taylorSeries.compute());

    }
}

