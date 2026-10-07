#program 8
#find number of digits

the_number = input("Enter a number :")

#as string
print(len(the_number))

#as int
the_number = int(the_number)
counter = 0
temp = the_number

while temp > 0:
    temp = temp // 10
    counter += 1

print(counter)