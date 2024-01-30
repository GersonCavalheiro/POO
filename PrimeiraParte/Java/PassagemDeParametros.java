class MyClass {
    int data;

    MyClass(int val) {
        data = val;
    }
}

public class PassagemDeParametros {
    public static void passByValue(int x, MyClass obj) {
        x = 10;
        obj.data = 100;
    }

    public static void passByReference(int[] x, MyClass obj) {
        x[0] = 20;
        obj.data = 200;
    }

    public static void main(String[] args) {
        int num = 5;
        MyClass myObj = new MyClass(50);

        passByValue(num, myObj);
        System.out.println("Passagem por valor: " + num + ", " + myObj.data);

        int[] numArray = {num};
        passByReference(numArray, myObj);
        System.out.println("Passagem por referência: " + numArray[0] + ", " + myObj.data);
    }
}

