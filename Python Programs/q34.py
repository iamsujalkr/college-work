def Eliminate_Letter(word, letter):
    s = ""
    for i in word:
        if i != letter:
            s += i
    return s

s = input("Enter a word: ")
letter = input("Enter a letter: ")
print("After eliminating", letter, "from", s, "we get", Eliminate_Letter(s, letter))

