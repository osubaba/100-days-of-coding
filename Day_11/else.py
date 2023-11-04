try:
    x = int(input("what is x? "))
except ValueError:
    print("x is not an integer")
else:
    print(f"x is {x}")

