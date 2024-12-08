import csv

dct = [
    {"Name":"Sahla","Age":24,"Gender":"female"},
    {"Name":"Suhaid","Age":21,"Gender":"male"},
    {"Name":"Shafeela","Age":19,"Gender":"female"},
    {"Name":"Alhan","Age":2,"Gender":"male"},
]

file = open("file2.csv","w", newline="")
writer = csv.writer(file)

writer.writerow(dct[0].keys())
for row in dct:
    writer.writerow(row.values())

file.close()

file = open("file2.csv","r")
lines = csv.reader(file)
for row in lines:
    print(row)

file.close()