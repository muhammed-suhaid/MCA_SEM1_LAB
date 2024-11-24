str = "nlhaa"
if len(str) > 2:
    new_str = str[-1] + str[1:-1] + str[0]
else:
    new_str = str[0]
print(f"Given String = {str}")
print(f"New string = {new_str}")