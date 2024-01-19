import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')

a = random.randint(-111, 111)
b = random.randint(-111, 111)

result_add = cops.add(a, b)
result_sub = cops.sub(a, b)
result_mul = cops.mul(a, b)
result_div = cops.div(a, b)
result_mod = cops.mod(a, b)

print("{} + {} = {}".format(a, b, result_add))
print("{} - {} = {}".format(a, b, result_sub))
print("{} x {} = {}".format(a, b, result_mul))
print("{} / {} = {}".format(a, b, result_div))
print("{} % {} = {}".format(a, b, result_mod))
