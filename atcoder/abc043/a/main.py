def sigma(n: int) -> int:
    sum = 0
    if n != 1:
        sum += n
        sum += sigma(n-1)
    else:
        sum += n
        return sum

    return sum

n = int(input())
total = sigma(n)
print(total)