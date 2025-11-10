n = int(input())
s = input()
x = int(input())
found = False

numbers = s.split(" ")

for i in range(n):
    if numbers[i] == str(x):
        found = True
        break

if found:
    print("Yes")
else:
    print("No")
