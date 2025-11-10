import math

tests = int(input())

for _ in range(tests):
    pillar_length = int(input())
    pillars = input()

    numbers = list(map(int, pillars.split()))

    if pillar_length == 1:
        print(0)
        continue

    count = 0
    max_height = numbers[0]
    for i in range(1, pillar_length):
        if numbers[i] >= max_height:
            count += 1
            max_height = numbers[i]

    print(pillar_length - count - 1)
