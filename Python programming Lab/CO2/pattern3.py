n=5 

for i in range(1,n+1):
    for j in range(1,i+1):
        if i%2==0:
            print("2",end="")
        else:
            print("1",end="")
    print()