#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the countingValleys function below.
def countingValleys(n, s):
    count_valleys = 0
    current_step = 0
    
    for step in list(s):
        if step == 'U':
            current_step += 1
        else:
            if current_step == 0:
                count_valleys += 1
            current_step -= 1
    
    return count_valleys

if __name__ == '__main__':
    n = int(input())

    s = input()

    result = countingValleys(n, s)

    print(result)
