#program 5
#Find the 1st n multiples of a number

number = input("Enter number :\n")

multiples = int(input("Enter number of multiples :\n"))

for i in range(1, multiples):
    print(i * multiples)