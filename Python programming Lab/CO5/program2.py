file1=open("file1.txt","r")
line=file1.readlines()

file2=open("file2.txt","w")

for i in range(0,len(line)):
    if(i %2 == 0):
        file2.write(line[i])

print("Content added successfully")
file1.close()
file2.close()