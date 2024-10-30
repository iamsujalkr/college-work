def fsum(n):
    sum = 0
    while n > 0:
        d = n % 10
        sum += d
        n//=10
    return sum

def frsum(n):
    if n == 0:
        return 0
    else:
        return n%10 + frsum(n//10)

n = int(input("Enter a number: "))
print("Sum of digits of", n, "from loop is", fsum(n))
print("Sum of digits of", n, "from recusrion is", frsum(n))