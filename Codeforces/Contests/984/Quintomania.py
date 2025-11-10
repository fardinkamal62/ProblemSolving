tests = int(input())

for i in range(tests):
    notes_count = int(input())

    notes = input().split(" ")

    perfect = True

    for j in range(notes_count - 1):
        semi_tones = abs(int(notes[j]) - int(notes[j+1]))
        if (semi_tones != 5 and semi_tones != 7):
            perfect = False
            break
    
    if perfect:
        print("YES")
    else:
        print("NO")