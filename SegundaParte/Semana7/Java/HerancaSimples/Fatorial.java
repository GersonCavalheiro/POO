public class Fatorial extends Serie {
    public Fatorial(int position) {
        super(position);
    }

    @Override
    public int compute() {
        int result = 1;
        for (int i = 1; i <= position; i++) {
            result *= i;
        }
        return result;
    }
}

