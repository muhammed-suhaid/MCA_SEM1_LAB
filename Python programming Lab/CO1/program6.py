lst=["suhaid","navaneeth","meghana","rohit","yasin"]
toatalA=0
for word in lst:
    a=word.count("a")
    toatalA+=a

print(f"total occurences of 'a' = {toatalA}")