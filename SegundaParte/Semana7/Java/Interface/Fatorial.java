public class Fatorial implements Serie {
    private int position;

    public Fatorial(int position) {
        this.position = position;
    }

    @Override
    public void newPosition(int newPosition) {
        this.position = newPosition;
    }

    @Override
    public int compute() {
        int result = 1;
        for (int i = 1; i <= position; i++) {
            result *= i;
        }
        return result;
    }

    @Override
    public String get() {
        return "Position: " + position + ", Value: " + compute();
    }
}

