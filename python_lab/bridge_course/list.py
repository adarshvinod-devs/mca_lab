#input a list
the_list = input("Enter elemrnts seperated by spaces: ").split()
print(the_list)

#sort the list
sorted_list = sorted(list(map(int,the_list)))
print(sorted_list)

#reverse the list
reversed_list = list(reversed(the_list))
print(reversed_list)

#add an element to the list
element_to_add = input("Insert an element to add: ")
the_list.append(element_to_add)
print(the_list)

#remove an element from the list
element_to_remove = input("Enter an element to remove: ")
the_list.remove(element_to_remove)
print(the_list)

#add an element to a specific position
position_to_add = int(input("Enter the position to add element(index start from 0) :"))
element = input("Insert an element to add: ")
the_list.insert(position_to_add,element)
print(the_list)

#remove an element by position from the list
position_to_remove = int(input("Enter the position of element which is to be removed(index start from 0) :"))
the_list.pop(position_to_remove)
print(the_list)

#return the number of elements from the list
print(len(the_list))

#remove all elements from the list
the_list.clear()
print(the_list)

#extract all digits of a number into a list
the_number = (input("Enter a number: "))
list_of_numbers = list(map(int,the_number))
print(list_of_numbers)

#convert a number into its binary number
reminder_list = []
number_to_convert = int(the_number)
while number_to_convert !=1:
    reminder = number_to_convert % 2
    reminder_list.append(reminder)
    number_to_convert = number_to_convert // 2
reminder_list.append(1)
binary_no_list = list(reversed(reminder_list))
print(binary_no_list)

#return a list of all square roots of numbers in a list
from math import sqrt
root = [sqrt(i) for i in list_of_numbers]
print(root)

#copy a list
copied_list = list_of_numbers.copy()
print(copied_list)