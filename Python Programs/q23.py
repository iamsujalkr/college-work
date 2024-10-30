months = {"January" : 31, "February" : 28, "March" : 31, "April" : 30, 
          "May" : 31, "June" : 30, "July" : 31, "August" : 31, 
          "September" : 30, "October" : 31, "November" : 30, "December" : 31
          }

mon = input("Enter the month: ")
print(f"Number of days in {mon} is {months[mon]}")

months_list = list(months.keys())
months_list.sort()
print(months_list)

print("Months with 31 days:")
for mon, day in months.items():
    if day == 31:
        print(mon, end=" ")

months_days = list(months.items())
months_days.sort(key=lambda x: x[1])
months_days = dict(months_days)
print("\nMonths sorted by number of days:")
print(months_days)
