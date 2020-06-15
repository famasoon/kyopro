x, y, z = map(int, input().split())

total = x + y + z

total = total - 7

if total % 10 == 0:
    print("YES")
else:
    print("NO")