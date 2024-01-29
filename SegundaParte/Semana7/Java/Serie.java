public abstract class Serie {
    protected int position;
    protected int value;

    public Serie(int position) {
        this.position = position;
        this.value = 0;
    }

    public void newPosition(int newPosition) {
        this.position = newPosition;
    }

    abstract public int compute(); // <<-- Método abstrato

    public String get() {
        return "Position: " + position + ", Value: " + value;
    }
}

