tt = int(input())

for _ in range(tt):
    n = input()
    char = "-1"
    flag = True
    results = []
    for i in range(len(n)):
        if char == "-1":
            char = n[i]
        elif n[i] != char:
            print(0,'\n')
            flag = False
            break
    
    if flag:
        results.append(n[:int(len(n)/2)])
        print(len(results))
        for i in range(len(results)):
            print(results[i])

    tt-=1