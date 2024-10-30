l1 = [1,2,3,4,8,2,4,9,20,4,5,6,7,8,9,1,6,9,0,5]
print(l1)
l2 = []
for i in l1:
    if i not in l2:
        l2.append(i)
print(l2)