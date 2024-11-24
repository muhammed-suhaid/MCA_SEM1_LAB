n1 = int(input("Enter the first number : "))
n2 = int(input("Enter the second number : "))
n3 = int(input("Enter the third number : "))

if n1>n2 and n1>n3:
    print("The first number is the biggest")
elif n2>n1 and n2>n3:
    print("The second number is the biggest")
else:
    print("The third number is the biggest")