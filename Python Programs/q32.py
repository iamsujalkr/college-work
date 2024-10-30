def freq(s : str):
    d = {}
    words = s.split()
    words.sort()
    for word in words:
        d[word] = d.get(word, 0) + 1
    return d

s = input("Enter a string: ")
print(freq(s))

