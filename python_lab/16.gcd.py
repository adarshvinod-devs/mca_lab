#program 16
#Find gcd of 2 numbers

num_1 = int(input("Enter 1st number :"))
num_2 = int(input("Enter 2nd number :"))

if num_2 > num_1:
    num_1 , num_2 = num_2 , num_1

while(num_2 != 0):
    num_1, num_2 = num_2 , num_1 % num_2

print(num_1)