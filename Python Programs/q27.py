students = {1: "Ram", 2: "Shyam", 3: "Mohan"}
roll = int(input("Enter roll number: "))
if roll in students:
    print(f"Congratulations {students[roll]}")
else:
    print("Congratulations student")

