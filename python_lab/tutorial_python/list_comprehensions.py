the_list = [1,-2,3,0,5,7,-15]

#positive numbers
positive_number_list = [i for i in the_list if i > 0]
print(positive_number_list)

#square of N numbers
square_number_list = [i * i for i in the_list]
print(square_number_list)

#Vowels
vowels = ['a','e','i','o','u']
word = 'Audio'
vowel_list = [i for i in word.lower() if i in vowels]
print(vowel_list)

#ordinal value
ordinal_value = [ord(i) for i in word]
print(ordinal_value)