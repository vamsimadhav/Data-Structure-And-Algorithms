from math import *
from collections import *
from sys import *
from os import *

## Read input as specified in the question.
## Print output as specified in the question.
n = int(input())

fib = [0,1,1]
i = 2
for i in range(2,n):
    fib.append(fib[i] + fib[i-1])
    i += 1

print(fib[n])