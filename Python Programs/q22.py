share_data = [("Dabur", "2024-10-1", 100, 40, 102), ("ITC", "2024-10-2", 88, 30, 100), ("Bajaj", "2024-10-3", 120, 20, 105)]
total_cost = 0
total_selling_price = 0
for data in share_data:
    total_cost += data[2] * data[3]
    total_selling_price += data[3] * data[4]

print("Total Cost:", total_cost)
print("Total Selling Price:", total_selling_price)
net = total_selling_price - total_cost
percent = abs(net)/total_cost * 100
if net > 0:
    print(f"Profit% {percent:.2f}:")
elif net < 0:
    print(f"Loss% {percent:.2f}:")
else:
    print("No Profit, No Loss")



