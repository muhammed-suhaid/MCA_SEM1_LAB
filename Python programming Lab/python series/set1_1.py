l1 = ["india", "is", "my", "Country"]
l2 = []

for word in l1:
    is_vowel=False
    for char in word:
        if char in ["a","e","i","o","u"]:
            is_vowel=True
            break
    if not is_vowel:
        l2.append(word)

print(l2)
        
