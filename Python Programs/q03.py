num1 = int(input("Enter the num 1 : "))
num2 = int(input("Enter the num 2 : "))

print(f"Printing Prime Numbers from {num1} to {num2}")
for i in range(num1, num2):
    prime = True
    for j in range(2,int(i/2)+1):
        if(i % j == 0):
            prime = False
    if(prime):
        print(f"{i} is a Prime Number")
