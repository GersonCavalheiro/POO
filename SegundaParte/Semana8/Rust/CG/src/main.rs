trait Renderable {
    fn render(&self);
}

struct Sprite;

impl Renderable for Sprite {
    fn render(&self) {
        println!("Renderizando sprite.");
    }
}

trait Animated {
    fn animate(&self);
}

impl Animated for Sprite {
    fn animate(&self) {
        println!("Animação do sprite.");
    }
}

struct Particle;

impl Renderable for Particle {
    fn render(&self) {
        println!("Renderizando partícula.");
    }
}

trait Updatable {
    fn update(&self);
}

impl Updatable for Particle {
    fn update(&self) {
        println!("Atualizando partícula.");
    }
}

struct GameObject {
    sprite: Sprite,
    particle: Particle,
}

impl Renderable for GameObject {
    fn render(&self) {
        println!("Renderizando GameObject.");
    }
}

impl Animated for GameObject {
    fn animate(&self) {
        self.sprite.animate();
    }
}

impl Updatable for GameObject {
    fn update(&self) {
        self.particle.update();
    }
}

impl GameObject {
    fn interact(&self) {
        println!("Interagindo com o objeto.");
    }
}

fn main() {
    let meu_objeto = GameObject {
        sprite: Sprite,
        particle: Particle,
    };

    meu_objeto.render(); // Renderizando GameObject
    meu_objeto.animate(); // Animação do sprite
    meu_objeto.update(); // Atualizando partícula
    meu_objeto.interact(); // Interagindo com o objeto
}

