str=input("Enter a string : ")
fst_char=str[0]
new_str=str[1:]
lst=fst_char + new_str.replace(fst_char, '$')
print(lst)