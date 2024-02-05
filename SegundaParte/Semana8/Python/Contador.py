class Contador:
    cont = 0

    def __init__(self):
        self.contadores = 0

    @staticmethod
    def inc():
        Contador.cont += 1

    @staticmethod
    def get():
        return Contador.cont

    def get_contadores(self):
        return self.contadores

def foo():
    c = Contador()
    c.inc()
    print(f"cont = {Contador.get()}, contadores = {c.get_contadores()}")

if __name__ == "__main__":
    for _ in range(10):
        foo()

