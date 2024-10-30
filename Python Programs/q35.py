def fibo(n):
    if n == 0 or n == 1:
        return 1
    else:
        return fibo(n-1) + fibo(n-2)
    
n = int(input("Enter a number: "))
print("The", n, "th fibonacci number is", fibo(n))

