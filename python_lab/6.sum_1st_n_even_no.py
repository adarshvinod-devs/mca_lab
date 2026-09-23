#proogram 6
#Sum of 1st 100 even numbers

the_sum = 0
count = 0
is_even = 0

while(is_even <100):
    count += 1
    if count % 2 == 0:
        the_sum = the_sum + count
        is_even += 1

print(sum)

#better solutions
print(100 * 101) # n(n + 1)

print(sum(range(2,201,2)))