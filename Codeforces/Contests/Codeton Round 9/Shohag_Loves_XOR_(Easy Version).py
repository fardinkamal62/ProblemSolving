tests = int(input())

for _ in range(tests):
    [x, m] = input().split()
    x = int(x)
    m = int(m)

    xors = 0

    for i in range(1, m + 1):
        xor = x ^ i
        if xor >= m:
            continue
        try:
            if x == i:
                continue

            # Check if xor is a divisor of either x or i or both
            if x % xor == 0 or i % xor == 0:
                xors = xors + 1
            # ixor = i % xor if i > xor else xor % i
            # xxor = x % xor if x > xor else xor % x
            # if ixor == 0 or xxor == 0:
            #     print(f'x: {x}, i: {i}, xor: {xor}')
            #     xors = xors + 1
        except ZeroDivisionError:
            continue
    
    print(xors)
