N, A, B = map(int, input().split())

total = 0

for i in range(1, N + 1):
    nums = str(i)
    tmp = 0
    for num in nums:
        tmp += int(num)
    if A <= tmp and tmp <= B:
        total += i

print(total)