l1=[1001,100,10]
l2=[]

for i in l1:
    num=i
    sum=0
    while(num>0):
        rem=num%10
        sum=sum+rem
        num=num//10
    l2.append(sum)
print(l2)
