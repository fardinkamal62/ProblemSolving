string = input()

first = None
second = None
for i in range(len(string)):
    if string[i] == "#":
        if first is None:
            first = i
        elif second is None:
            second = i
    
    if first is not None and second is not None:
        print(first + 1, ",", second + 1, sep="")
        first = None
        second = None