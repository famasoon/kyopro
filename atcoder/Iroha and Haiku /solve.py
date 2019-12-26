N = int(input())
K = int(input())
X = int(input())
Y = int(input())

if N > K:
    total = K * X
    total += (N - K) * Y
else:
    total = N * X

print(total)