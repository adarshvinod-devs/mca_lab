#input a strig
the_string = input("Enter the string: ")

#capitalize, small case, camel case and output the string
print(the_string.upper())
print(the_string.lower())
print(the_string.title().replace(" ",""))

#concatinate with another string
#string_2 = input("Enter another string: ")
#print(the_string +" "+ string_2)

#print number of characters in string
print(len(the_string))

#extract the 4th character of the string
character_4 = the_string[3]
print(character_4)

#extract a substring of a string
substring = the_string[2:4]
print(substring)

#split the string to 2 strings and print both strings
splited_string_list = the_string.split(None,1)
print(splited_string_list)
print(splited_string_list[0])
if len(splited_string_list) > 1:
    print(splited_string_list[1])

#remove the leading and trailing "*"
print(the_string.strip("*"))

#replace all occurance of "a" to "f"
print(the_string.replace("a","f"))

#remove all even characters from the string
odd_string = []
for i in range(len(the_string)):
    if i % 2 ==0:
        odd_string.append(the_string[i])
print("".join(odd_string))

#find number of occurance of "a" in string
print(the_string.lower().count("a"))

#return the index of "o" in the string
print(the_string.lower().find("o"))

#find the duplicate character of a string
duplicate_char = set()
for i in the_string:
    if the_string.count(i)==2:
        duplicate_char.add(i)
print(*duplicate_char)