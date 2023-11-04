def main():
    room = get_rm("what is the room? ")
    print(f"the room is {room}")


def get_rm(prompt):
    while True:
        try:
            return int(input(prompt))
        except ValueError:
            pass

main()
