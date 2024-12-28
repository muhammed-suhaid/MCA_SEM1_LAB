n=4

a=ord('A')
for i in range(1,n+1):
    for j in range(i):
        print(chr(a+j),end=' ')
    print()