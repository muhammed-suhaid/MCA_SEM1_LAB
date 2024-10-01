cyear=2024
fyear=int(input("Enter the final year : "))

for year in range(cyear,fyear+1):
    if(year % 100 != 0 and year % 4 == 0):       
        print(f"{year} is a leap year")
    elif(year % 100 == 0 and year % 400 ==0):
        print(f"{year} is a leap year")