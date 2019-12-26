n = int(input())
x = list(map(int, input().split()))
sum = 0
while all(i % 2 == 0 for i in x):
  x = [i/2 for i in x]
  sum += 1

print(sum)