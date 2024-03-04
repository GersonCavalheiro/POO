class MinhaExcecao(Exception):
    def __init__(self, a):
        self.cod = a

    def __str__(self):
        return f"Ocorreu a MinhaExcecao com código [{self.cod}]"


def main():
    try:
        a = 313
        if a > 10:
            minha_exc = MinhaExcecao(a)
            raise minha_exc
    except MinhaExcecao as e:
        print(f"Excecao capturada: {e}")


if __name__ == "__main__":
    main()

