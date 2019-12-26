n = int(input())
a_list = [int(input()) for i in range(n)]

max_value = -200000000
min_value = a_list[0]

for i in a_list:
    max_value = max([i - min_value, max_value])
    min_value = min([i, min_value])

print(max_value)


