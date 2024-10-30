student = {"Ram":40, "Shyam":60, "Mohan":12}
print(student)
names = list(student.keys())
names.reverse()
for i in names:
    print(f"{i} : {student[i]}")
    student.pop(i)
print(student)


