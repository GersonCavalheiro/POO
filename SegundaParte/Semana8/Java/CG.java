interface Renderable {
    void render();
}

class Sprite implements Renderable {
    public void animate() {
        System.out.println("Animação do sprite.");
    }

    @Override
    public void render() {
        System.out.println("Renderizando objeto.");
    }
}

class Particle implements Renderable {
    public void update() {
        System.out.println("Atualizando partícula.");
    }

    @Override
    public void render() {
        System.out.println("Renderizando objeto.");
    }
}

class GameObject extends Sprite {
    public void interact() {
        System.out.println("Interagindo com o objeto.");
    }

    public void update() {
        System.out.println("Atualizando objeto do tipo GameObject.");
    }
}

public class CG {
    public static void main(String[] args) {
        GameObject meuObjeto = new GameObject();
        ((Renderable) meuObjeto).render(); // Herdado de Renderable
        meuObjeto.animate(); // Herdado de Sprite
        meuObjeto.update(); // Diretamente em GameObject
        meuObjeto.interact(); // Próprio método de GameObject
    }
}

