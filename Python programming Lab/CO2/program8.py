str = input("Enter words seperated by spaces : ")
lst=str.split()

m=max(len(i) for i in lst)

print(f"length of the longest word is {m}")

