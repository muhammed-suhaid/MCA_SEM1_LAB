clr_lst1=["red","black","blue","yellow"]
clr_lst2=["white","blue","red","brown"]

new_lst=[]

for i in clr_lst1:
        if i not in clr_lst2:
            new_lst.append(i)

print(new_lst)