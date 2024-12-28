n=5

for i in range(0,n):
    print(' '*i,end='')
    for j in range(n,i,-1):
        print('#',end='')
    print()