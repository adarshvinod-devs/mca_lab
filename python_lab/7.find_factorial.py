#program 7
#factorial of a number

def fact(n : int) -> int:
    if n == 1:
        return n
    return n * fact(n-1)


n = int(input("Enter the number : "))

print(fact(n))