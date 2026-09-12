#program 3
#largest of 3 numbers

num_1 = int(input("Enter number 1: "))
num_2 = int(input("Enter number 2: "))
num_3 = int(input("Enter number 3: "))

largest = num_1
if num_2 > largest:
    largest = num_2
if num_3 > largest:
    largest = num_3
print(f"Largest : {largest}")