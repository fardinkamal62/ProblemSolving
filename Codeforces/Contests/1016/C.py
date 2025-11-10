# def sieve_of_eratosthenes(n):
#     is_prime = [True] * (n + 1)
#     is_prime[0] = is_prime[1] = False
#     for i in range(2, int(n**0.5) + 1):
#         if is_prime[i]:
#             for j in range(i * i, n + 1, i):
#                 is_prime[j] = False
#     return is_prime

# prime_table = sieve_of_eratosthenes(10**6)

# t = int(input())

# for _ in range(t):
#     x, k = map(int, input().split())
#     repeated_number = int(str(x) * k)
#     if repeated_number > 10**6:
#         print("NO")  # Out of range, assume it's not prime
#     else:
#         is_prime = prime_table[repeated_number]
#         print("YES" if is_prime else "NO")

import math

def is_prime(n):
    if n < 2:
        return False
    if n % 2 == 0:
        return n == 2
    r = int(math.isqrt(n))
    for i in range(3, r+1, 2):
        if n % i == 0:
            return False
    return True

t = int(input())
for _ in range(t):
    x, k = map(int, input().split())
    if k == 1:
        print("YES" if is_prime(x) else "NO")
    else:
        if x != 1:
            print("NO")
        else:
            print("YES" if k == 2 else "NO")
