#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the sockMerchant function below.
def sockMerchant(n, ar):
    total_pairs = 0
    checked_color = []

    for color in ar:
        if color in checked_color:
            continue

        color_socks = len([i for i, x in enumerate(ar) if x == color])
        print(color_socks)
        pairs = color_socks // 2
        total_pairs += pairs
        checked_color.append(color)

    return total_pairs


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()
