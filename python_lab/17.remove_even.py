#program 17
#From a list create a list removing all even numbers

the_list = [12,43,6,7,2,4,87,22,6,13]

non_even_list = [i for i in the_list if i % 2 != 0]

print(non_even_list)