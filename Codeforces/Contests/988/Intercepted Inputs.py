import math

tests = int(input())

for _ in range(tests):
    array_length = int(input())
    numbers = input()

    number_array = list(map(int, numbers.split()))

    first_division = math.ceil(array_length / 2)
    second_division = math.ceil(array_length / first_division)

    print(f"{first_division} {second_division}")
