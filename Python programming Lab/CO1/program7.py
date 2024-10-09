lst1=[1,3,4,8,9]
lst2=[2,7,6,5]
sum1=0
sum2=0
flag=0


if len(lst1) == len(lst2) :
    print("Length of both list are same")
else:
    print("Length of both list are not same")

for i in lst1:
    sum1=sum1+i

for i in lst2:
    sum2=sum2+i

if sum1 == sum2:
    print("Sum of both list are same")
else:
    print("Sum of both list are not same")


for i in lst1:
    for j in lst2:
        if i == j:
            print(f"{i} occurs in both list")
            flag=1

if flag == 0:
    print("There are no same values")

