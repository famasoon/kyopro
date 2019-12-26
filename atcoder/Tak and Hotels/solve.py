N = int(input())
K = int(input())
X = int(input())
Y = int(input())

if N > K:
    total = K * N
    total += (N - K) * Y
else:
    total = K * X
print(total)

