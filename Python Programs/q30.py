def func():
    global x
    x = 5
    print("Inside func() x =", x)

x = 10
print("Before calling func() x =", x)
func()
print("After calling func() x =", x)
