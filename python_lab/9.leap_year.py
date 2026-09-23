#program 9
#check whether a year is leap year or not

year = int(input("Enter the year: "))

if year % 100 == 0:
    if year % 400 == 0:
        print("leap Year")
    else:
        print("Non leap Year")
elif year % 4 == 0:
    print("Leap Year")
else:
    print("Non leap Year")