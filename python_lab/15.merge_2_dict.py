#program 15
#merge 2 dictionaries

dictonary_1 = {'a': 'alpha', 'b': 'bravo', 'c': 'charlie', 'd': 'delta'}

dictonary_2 = {'e' : 'echo', 'f' : 'foxtrot', 'g' : 'golf', 'h' : 'hotel'}

dictonary_3 =  dictonary_1 | dictonary_2

print(dictonary_3)