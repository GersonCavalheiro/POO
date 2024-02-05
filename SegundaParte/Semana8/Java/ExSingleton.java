import java.util.ArrayList;
import java.util.List;

class Log {
    private int cont;
    private List<String> log;
    static Log instance;

    static { instance = new Log(); }

    private Log() {
        cont = 0;
        log = new ArrayList<>();
    }

    public static Log getInstance() {
        return instance;
    }

    public void insereAtividade(String className) {
        cont++;
        log.add(cont + " & " + className);
    }

    public void printLog() {
        System.out.println("Log de criação de objetos:");
        for (String entry : log) {
            System.out.println(entry);
        }
    }
}

class XXX {
    public XXX() {
	Log inst = Log.getInstance();
        inst.insereAtividade(getClass().getName());
    }
}

class YYY {
    public YYY() {
	Log inst = Log.getInstance();
        inst.insereAtividade(getClass().getName());
    }
}

class ZZZ {
    public ZZZ() {
	Log inst = Log.getInstance();
        inst.insereAtividade(getClass().getName());
    }
}

public class ExSingleton {
    public static void main(String[] args) {
        XXX objetoXXX1 = new XXX();
        XXX objetoXXX2 = new XXX();
        YYY objetoYYY = new YYY();
        XXX objetoXXX3 = new XXX();
        ZZZ objetoZZZ = new ZZZ();

        Log.getInstance().printLog();
    }
}

