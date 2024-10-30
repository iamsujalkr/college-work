def getChar(word, pos):
    return word[pos]

s = input("Enter a string: ")
pos = int(input("Enter a position: "))
print("Character at position", pos, "is", getChar(s, pos))

