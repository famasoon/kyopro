n = int(input())

max_value = -2000000000
min_value = int(input())

for i in range(1, n):
    new_value = int(input())
    if new_value - min_value > max_value:
        max_value = new_value - min_value
    if min_value > new_value:
        min_value = new_value

print(max_value)
