public class Fibonacci implements Serie {
    private int position;

    public Fibonacci(int position) {
        this.position = position;
    }

    @Override
    public void newPosition(int newPosition) {
        this.position = newPosition;
    }

    @Override
    public int compute() {
        if (position <= 1) {
            return position;
        } else {
            int a = 0, b = 1, result = 0;
            for (int i = 2; i <= position; i++) {
                result = a + b;
                a = b;
                b = result;
            }
            return result;
        }
    }

    @Override
    public String get() {
        return "Position: " + position + ", Value: " + compute();
    }
}

