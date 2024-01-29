public class Harmonica implements Serie {
    private int position;

    public Harmonica(int position) {
        this.position = position;
    }

    @Override
    public void newPosition(int newPosition) {
        this.position = newPosition;
    }

    @Override
    public int compute() {
        double result = 0.0;

        for (int i = 1; i <= position; i++) {
            result += 1.0 / i;
        }

        return (int) result; // Convertendo o resultado para inteiro
    }

    @Override
    public String get() {
        return "Position: " + position + ", Value: " + compute();
    }
}

