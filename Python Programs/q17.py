num = [1,2,3,4,5]
print("Current list : ",num)
num.append(6)
print("append(6) : ",num)
num.insert(1, 1.5)
print("insert(1, 1.5) : ",num)
num.remove(1.5)
print("remove(1.5) : ",num)
num.pop()
print("pop() : ",num)
num.reverse()
print("reverse() : ",num)
num.sort()
print("sort() : ",num)
print("Index of 3 : ",num.index(3))
print("Count of 3 : ",num.count(3))
num.clear()
print("clear() : ",num)
