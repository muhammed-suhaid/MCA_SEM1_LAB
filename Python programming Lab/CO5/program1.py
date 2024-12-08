lineList=[]
file=open("file.txt","r")

for line in file:
    lineList.append(line.strip())

print(lineList)
file.close()
