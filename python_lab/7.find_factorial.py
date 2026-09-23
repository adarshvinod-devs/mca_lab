#program 7
#factorial of a number

def fact(n : int) -> int:
    if n == 1 or n == 0:
        return 1
    return n * fact(n-1)


n = int(input("Enter the number : "))

print(fact(n))