#program 20
#Character frequency in a string

the_string = input("Enter String : ")

counter = {}

for i in the_string:
    counter[i] = the_string.count(i)

for k,v in counter.items():
    print(f"{k} {v}")