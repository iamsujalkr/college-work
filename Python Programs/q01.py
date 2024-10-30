num1 = int(input("Enter a int number 1 :  "))
num2 = int(input("Enter a int number 2 :  "))
num3 = float(input("Enter a floating number 1 :  "))
num4 = float(input("Enter a floating number 2 :  "))

def arth_opr(num1, num2):
    print(f"Arthimetic Operations on {num1} and {num2} :-")
    print("Sum is : ",num1 + num2)
    print("Difference is : ", num1 - num2)
    print("Product is : ", num1 * num2)
    print("Division is : ",num1 / num2)
    print("Modulus is : ",num1 % num2)
    print("Exponent is : ", num1 ** num2)
    print("Floor division is : ", num1 // num2)

arth_opr(num1, num2)
arth_opr(num3, num4)
