def main():
    number = get_pip()
    print(f"number is {number}")

def get_pip():
    while True:
        try:
            return int(input("what is the number? "))
        except ValueError:
            pass

main()
