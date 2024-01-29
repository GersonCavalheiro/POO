public class Main {
    public static void main(String[] args) {
        Serie fibonacciSeries = new Fibonacci(10);
        Serie fatorialSeries = new Fatorial(10);
        Serie harmonicaSeries = new Harmonica(10);
        Serie taylorSeries = new Taylor(10);

        System.out.println("Fibonacci: " + fibonacciSeries.get() + ", Computed Value: " + fibonacciSeries.compute());
        System.out.println("Fatorial: " + fatorialSeries.get() + ", Computed Value: " + fatorialSeries.compute());
        System.out.println("Série Harmônica: " + harmonicaSeries.compute());
        System.out.println("Série de Taylor para e^x: " + taylorSeries.compute());
    }
}

