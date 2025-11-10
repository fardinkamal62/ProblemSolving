def solve():
    [n, a, b] = input().split(" ")
    n = int(n)
    a = int(a)
    b = int(b)

    moves = input()

    target_cords_x = a
    target_cords_y = b

    current_cord_x = 0
    current_cord_y = 0

    for _ in range(100):
        for j in range(n):
            if moves[j] == 'N':
                current_cord_y += 1
            if moves[j] == 'E':
                current_cord_x += 1
            if moves[j] == 'S':
                current_cord_y -= 1
            if moves[j] == 'W':
                current_cord_x -= 1
            if j == (n-1):
                j = 0

            if current_cord_x == target_cords_x and current_cord_y == target_cords_y:
                print("YES")
                return
    
    print("NO")

tests = int(input())

for i in range(tests):
    solve()