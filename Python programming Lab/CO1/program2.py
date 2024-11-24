fyear=int(input("Enter the final year : "))
cyear=2024

print("The leap years are : ") 
for year in range(cyear,fyear+1):
    if(year % 100 != 0 and year % 4 == 0):       
        print(year)
    elif(year % 100 == 0 and year % 400 ==0):
        print(year)