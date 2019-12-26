top10 = list(map(int, input().split())).sort(reverse=True)

count = 0

while count < 3:
    print(top10[count])
