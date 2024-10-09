text="python is good and python is beautiful"
words=text.split()
print(words)
newlist=set()
for word in words:
    if word not in newlist:
        print(f"The word '{word}' appears {words.count(word)} times")
        newlist.add(word)