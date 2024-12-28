l1=["suhaid","alhan"]

for word in l1:
    l2=[]
    for char in word:
        if char not in l2:
            print(f"'{char}' in '{word}' occurs {word.count(char)} times")
            l2.append(char)
            