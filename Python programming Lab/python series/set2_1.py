l1=[123,456,789]
l2=[]

for num in l1:
    str_num=str(num)
    rev=''
    for char in str_num:
        rev=char+rev
    l2.append(rev)

print(l2)
