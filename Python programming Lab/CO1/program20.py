lst=[0,1,2,3,4,5,6,7,8,9]
new_lst=[]
for i in lst:
    if i%2 != 0:
        new_lst.append(i)
        
print(f"Given list = {lst}")
print(f"Odd list = {new_lst}")