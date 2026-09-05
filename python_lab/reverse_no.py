number = int(input("Enter a natural number :"))
reversed_number = 0
while number > 0:
    reminder = number % 10
    reversed_number = reversed_number * 10 + reminder
    number = number // 10
print(reversed_number)
    