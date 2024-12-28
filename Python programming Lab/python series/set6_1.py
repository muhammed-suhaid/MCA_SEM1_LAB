str='india is my country'
l1=str.split(' ')
l2=[]

for word in l1:
    l2.append(word[::-1])

print(l2)

