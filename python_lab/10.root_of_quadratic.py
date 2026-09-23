#program 10
#find roots of quadratic equation
from math import sqrt

a = int(input("Enter A :"))
b = int(input("Enter B :"))
c = int(input("Enter c :"))

b_square_minus_4_ac = (b * b) - (4 * a * c)

numerator_1 = (-b) + sqrt(b_square_minus_4_ac)

numerator_2 = (-b) - sqrt(b_square_minus_4_ac)

denominator = 2 * a

print(f"Solutions ({ numerator_1 / denominator} , { numerator_2 / denominator})")