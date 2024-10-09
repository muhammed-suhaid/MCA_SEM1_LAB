import math

lmt1=1000
lmt2=9999

lst=[]

for num in range(lmt1,lmt2+1):
    if math.sqrt(num).is_integer():
            is_even=True
            for digit in str(num):
                  if int(digit) % 2 != 0:
                        is_even=False
                        break
            if is_even:
                lst.append(num)

print(lst)