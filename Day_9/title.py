name = input("what is your name?" ).strip().title()
your_name = name.split()
if len (your_name) == 1:
    first, last = your_name[0], ""
elif len (your_name) == 2:
    first, last = your_name[0], your_name[1]
else:
    first, last = your_name[0], " ".join(your_name[1:])

print(f"Hello, {first}")
print(f"nice to meet you, {last}")
