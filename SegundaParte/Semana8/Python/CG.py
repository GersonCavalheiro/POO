class Renderable:
    def render(self):
        print("Renderizando objeto.")

class Sprite(Renderable):
    def animate(self):
        print("Animação do sprite.")

class Particle(Renderable):
    def update(self):
        print("Atualizando partícula.")

class GameObject(Sprite, Particle):
    def interact(self):
        print("Interagindo com o objeto.")

    # Método update diretamente em GameObject
    def update(self):
        print("Atualizando objeto do tipo GameObject.")

meu_objeto = GameObject()

meu_objeto.render()   # Herdado de Renderable
meu_objeto.animate()  # Herdado de Sprite
meu_objeto.update()   # Diretamente em GameObject
meu_objeto.interact()  # Próprio método de GameObject

