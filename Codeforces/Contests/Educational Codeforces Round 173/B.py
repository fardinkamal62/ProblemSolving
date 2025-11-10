import math

tests = int(input())

def is_divisible_by_7(fact_sum):
    return pow(fact_sum, 6, 7) == 1


for t in range(tests):
    sorted_list = []
    sorted_list.append(1)

    numbers = list(map(int, input().split()))
    n, d = numbers[0], numbers[1]

    fact = str(math.factorial(n))
    fact_sum = sum([int(i) for i in fact])

    for i in range(3, 10, 2):
        if (fact_sum % i == 0 or d % i == 0):
            sorted_list.append(i)
        elif i == 7 and is_divisible_by_7(fact_sum):
            sorted_list.append(i)

    print(" ".join(map(str, sorted_list)))
