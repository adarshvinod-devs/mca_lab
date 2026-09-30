#program 12
#Display 1st and last colors from a list of comma seperated color name

the_list = input("Enter colors seperated by comma :").split(",")

print(f"The List : {the_list}")

print(f"First color : {the_list[0]}")

print(f"Last color : {the_list[-1]}")