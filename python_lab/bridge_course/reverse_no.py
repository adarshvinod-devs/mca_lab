number = int(input("Enter a natural number :"))
reversed_number = 0
while number > 0:
    remainder = number % 10
    reversed_number = reversed_number * 10 + remainder
    number = number // 10
print(reversed_number)
    