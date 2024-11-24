#section a
lst=[-4,-3,-2,-1,0,1,2,3,4]
plst=[]
for num in lst :
    if num > 0 :
        plst.append(num)

print(plst)
print()

#section b
n=10
for i in range(1,n+1):
    s=i**2
    print(f"{i}^2 = {s}")
print()

#section c
str="alhan"
lst=[]
for s in str:
    if s in ["a","e","i","o","u","A","E","I","O","U"]:
        lst.append(s)

print(lst)
print()

#section d
for s in str:
    a=ord(s)
    print(f"Ordinal value of '{s}' = {a}")