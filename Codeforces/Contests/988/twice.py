tests = int(input())

for _ in range(tests):
    array_length = int(input())
    numbers = input()

    number_array = list(map(int, numbers.split()))

    dic = {}
    
    count = 0
    for n in range(array_length):
        for n2 in range(array_length):
            if n == n2:
                continue
            if number_array[n] == number_array[n2]:
                if dic.get(n):
                    dic[number_array[n]] = int(dic.get(n)) + 1
                else:
                    dic[number_array[n]] = 1

    print(len(dic.keys()))
