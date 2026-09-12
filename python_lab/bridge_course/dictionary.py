#input from user and create a dictionary
name = input("Enter name: ")
course = input("Enter course: ")
semester = input ("Enter which semester: ")

student_details = {"Name" : name, "Course" : course, "Semester" : semester}
print(student_details)

#insert a key value into a dictionary
department = input("Enter which department: ")

student_details["Department"] = department
print(student_details)

#print value of user input key
key_input = input("Insert a key ('Name','Course','Semester'...): ")
print(student_details[key_input])

#delet a value from dictionary
print(student_details.pop("Department"))
print(student_details)

del student_details["Semester"]
print(student_details)

#return all values from dictionary
for value in student_details.values():
    print(value)

#update a key with another value
course = input("Enter new course: ")

student_details["Course"] = course
print(student_details)

#return all keys from dictionary
for key  in student_details.keys():
    print(key)

#merge 2 dictionaries
course_details = {"course_id" : 501, "course_duration" : 6}

merged_dictionary = student_details | course_details
print(merged_dictionary)

#sort a dictionary
sorted_dictionary = dict(sorted(student_details.items()))
print(sorted_dictionary)

#remove all values from dictionary
student_details.clear()
print(student_details)