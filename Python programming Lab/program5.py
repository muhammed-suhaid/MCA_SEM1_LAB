lst=[]
n=int(input("Enter the number of elements :"))

for i in range(0,n):
    num=int(input())
    lst.append(num)
print(f"Entered list = {lst}")

new_lst=[]
for num in lst:
    if int(num)>100:
        new_lst.append("over")
    else:
        new_lst.append(num)

print(f"Processed list = {new_lst}")