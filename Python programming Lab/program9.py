str = "suhaid"
if len(str) > 2:
    new_str = str[-1] + str[1:-1] + str[0]
else:
    new_str = str[0]
print(new_str)