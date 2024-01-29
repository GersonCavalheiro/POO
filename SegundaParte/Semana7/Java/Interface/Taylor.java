public class Taylor implements Serie {
    private int position;

    public Taylor(int position) {
        this.position = position;
    }

    @Override
    public void newPosition(int newPosition) {
        this.position = newPosition;
    }

    @Override
    public int compute() {
        double result = 1.0;
        double x = position;

        for (int i = 1; i <= 10; i++) {
            result += (Math.pow(x, i) / fatorial(i));
        }

        return (int) result;
    }

    private int fatorial(int n) {
        Fatorial fatorial = new Fatorial(n);
        return fatorial.compute();
    }

    @Override
    public String get() {
        return "Position: " + position + ", Value: " + compute();
    }
}

