import csv

file=open("file.csv","r")
lines=csv.reader(file)

for row in lines:
    print(row)

file.close()