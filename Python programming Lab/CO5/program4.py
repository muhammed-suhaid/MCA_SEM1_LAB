import csv

file=open("file.csv","r")
lines=csv.reader(file)

header=next(lines)
name = header.index("Name")
gender=header.index("Gender")

for col in lines:
    print(f"Name : {col[name]}, Gender : {col[gender]}")

file.close()