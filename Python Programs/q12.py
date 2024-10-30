sum = 0
for i in range(1,21):
    if(i%2 != 0 and i%3 != 0 and i%5 !=0):
        sum+=i
print("The Sum is",sum)