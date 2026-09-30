#program 13
#Create a string from 2 string, swapping the character at position 1

string_1 = "Audio"

string_2 = "Video"

string_3 = string_2[0] + string_1[1:] + string_1[0] + string_2[1:]

print(string_3)