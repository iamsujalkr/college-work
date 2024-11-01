def calc_Distance(x1, y1, x2, y2):
    x3 = x2-x1
    y3 = y2-y1
    return ((x3**2)+(y3**2))**0.5

x1 = 5
y1 = 5
x2 = 10
y2 = 10
print("Difference between two points",calc_Distance(x1, y1, x2, y2))


