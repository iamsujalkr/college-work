def func():
    def func2():
        print("Inside func2()")
    print("Inside func()")
    func2()

func()

