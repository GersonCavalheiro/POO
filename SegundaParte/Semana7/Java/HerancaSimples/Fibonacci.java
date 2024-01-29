public class Fibonacci extends Serie {
    public Fibonacci(int position) {
        super(position);
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
}

