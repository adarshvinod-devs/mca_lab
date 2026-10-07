#program 22
#construct pattern using nested loop

"""
for i in range(5):
    print("*" * (i + 1))
for i in range(4):
    print("*" * (4 - i))
"""

n = 5

for i in range(1, n + 1):
    for j in range(i):
        print("*", end="")
    print()

for i in range(n -1):
    for j in range(n-i -1):
        print("*", end="")
    print()