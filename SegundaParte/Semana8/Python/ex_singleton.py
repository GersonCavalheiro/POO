class Log:
    _instance = None

    def __new__(cls):
        if cls._instance is None:
            cls._instance = super(Log, cls).__new__(cls)
            cls._instance.cont = 0
            cls._instance.log = []
        return cls._instance

    def insere_atividade(self, obj):
        self.cont += 1
        self.log.append(f"{self.cont} & {obj}")

    def print_log(self):
        print("Log de criação de objetos:")
        for entry in self.log:
            print(entry)

class XXX:
    def __init__(self, log):
        log.insere_atividade("XXX")

class YYY:
    def __init__(self, log):
        log.insere_atividade("YYY")

class ZZZ:
    def __init__(self, log):
        log.insere_atividade("ZZZ")

log = Log()

# Criando objetos e registrando no log
objeto_xxx1 = XXX(log)
objeto_xxx2 = XXX(log)
objeto_yyy = YYY(log)
objeto_xxx3 = XXX(log)
objeto_zzz = ZZZ(log)

# Imprimindo o log
log.print_log()

