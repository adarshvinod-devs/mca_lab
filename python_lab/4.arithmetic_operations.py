#program 4
#Arithematic operators
while True:
    choice = input("Enter operator (+.-,*,/) : ")
    if choice.lower() == 'q':
        break
    num_1 = int(input("Enter 1st number: "))
    num_2 = int(input("Enter 2nd number: "))
    match choice:
        case '+':
            print(num_1 + num_2)
        case '-':
            print(num_1 - num_2)
        case '*':
            print(num_1 * num_2)
        case '/':
            if num_2 == 0:
                print("Cannot divide by 0")
                continue
            print(num_1 / num_2)
        case _:
            print("Invalid Choice")