dct={'a':5,'b':1,'c':4,'d':2,'e':3}

ascDct=sorted(dct.values())
desDct=sorted(dct.values(),reverse=True)

print(f"Ascending order = {ascDct}")
print(f"Descending order = {desDct}")