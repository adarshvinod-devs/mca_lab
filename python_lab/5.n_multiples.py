#program 5
#Find the 1st n multiples of a number

number = int(input("Enter number :\n"))

multiples = int(input("Enter number of multiples :\n"))

for i in range(multiples):
    print((i + 1) * number)