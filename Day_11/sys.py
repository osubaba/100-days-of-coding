import sys

if len(sys.argv) > 2:
    sys.exit("above two arguments")
elif len(sys.argv) < 2:
    sys.exit("below two arguments")
print("Hello how are you today ", sys.argv[1])
