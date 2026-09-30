#program 14
#sort dictonary in ascending and descending order

the_dictionary = {"b" : "bravo", "d" : "delta", "a" : "alpha", "c" : "charlie"}

ascending_dictonary = dict(sorted(the_dictionary.items()))

descending_dictonary = dict(sorted(the_dictionary.items(), reverse= True))

print(ascending_dictonary)

print(descending_dictonary)