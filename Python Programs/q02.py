num = input("Enter the number :  ")

sum = 0
power = len(num)
for i in num:
    sum += int(i)**power

if int(num) == sum:
    print(f"{num} is a Armstrong Number")
else:
    print(f"{num} is not a Armstrong Number")

