class Contador {
    private static int cont;
    private int contadores;

    static { cont = 0; }

    public Contador() {
        contadores = 0;
    }

    public static void inc() {
        ++cont;
    }

    public static int get() {
        return cont;
    }

    public int getContadores() {
        return contadores;
    }

    public void incContadores() {
        ++contadores;
    }
}

public class ExContador {
    public static void main(String[] args) {
        for (int i = 0; i < 10; ++i) {
            foo();
        }
    }

    private static void foo() {
        Contador c = new Contador();
        c.inc();
        System.out.println("cont = " + Contador.get() + ", contadores = " + c.getContadores());
        c.incContadores();
    }
}

