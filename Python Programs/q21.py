students = [("Raj", 1, 50), ("Rohan", 2, 60), ("Mahesh", 3, 70), ("Karan", 4, 80)]
print(students)
name, roll, marks = tuple(zip(*students))
print("Name:", name)
print("Roll:", roll)
print("Marks:", marks)
