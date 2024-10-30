price = {"banana": 4, "apple": 2, "orange": 1.5, "pear": 3}
qty = {"banana": 6, "apple": 0, "orange": 32, "pear": 15}
total = 0
for k in price:
    total += price[k] * qty[k]
print("Total price: ", total)

