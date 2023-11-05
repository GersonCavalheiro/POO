class MyClass:
    def __init__(self, val):
        self.data = val

def pass_by_value(x, obj):
    x = 10
    obj.data = 100

def pass_by_reference(x, obj):
    x[0] = 20
    obj.data = 200

num = 5
my_obj = MyClass(50)

# Passagem por valor (para o primitivo e a instância de classe)
pass_by_value(num, my_obj)
print(f"Passagem por valor: {num}, {my_obj.data}")

# Passagem por referência (para o primitivo e a instância de classe)
num_list = [num]
pass_by_reference(num_list, my_obj)
print(f"Passagem por referência: {num_list[0]}, {my_obj.data}")

