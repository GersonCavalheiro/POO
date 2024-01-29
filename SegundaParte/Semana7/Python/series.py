from math import pow, factorial

class Serie:
    def __init__(self, position):
        self.position = position

    def new_position(self, new_position):
        self.position = new_position
        return self

    def compute(self):
        pass

    def get(self):
        return f"Position: {self.position}, Value: {self.compute()}"


class Fatorial(Serie):
    def compute(self):
        result = 1
        for i in range(1, self.position + 1):
            result *= i
        return result


class Fibonacci(Serie):
    def compute(self):
        if self.position <= 1:
            return self.position
        else:
            a, b, result = 0, 1, 0
            for i in range(2, self.position + 1):
                result = a + b
                a, b = b, result
            return result


class Harmonica(Serie):
    def compute(self):
        result = sum(1.0 / i for i in range(1, self.position + 1))
        return result


class Taylor(Serie):
    def __init__(self, position):
        super().__init__(position)
        self.fatorial_series = Fatorial(0)

    def compute(self):
        result = 1.0
        x = float(self.position)

        for i in range(1, 11):
            self.fatorial_series.new_position(i)
            result += pow(x, i) / self.fatorial_series.compute()

        return result


if __name__ == "__main__":
    fibonacci_series = Fibonacci(10)
    fatorial_series = Fatorial(10)
    harmonica_series = Harmonica(10)
    taylor_series = Taylor(10)

    print(f"Fibonacci: {fibonacci_series.get()}, Computed Value: {fibonacci_series.compute()}")
    print(f"Fatorial: {fatorial_series.get()}, Computed Value: {fatorial_series.compute()}")
    print(f"Série Harmônica: {harmonica_series.compute()}")
    print(f"Série de Taylor para e^x: {taylor_series.get()}, Computed Value: {taylor_series.compute()}")

