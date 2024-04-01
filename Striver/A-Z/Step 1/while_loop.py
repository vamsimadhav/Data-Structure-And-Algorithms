
n = int(input())

evenSum = 0
oddSum = 0

while n != 0:
    rem = n % 10
    if rem % 2 == 0:
        evenSum += rem
    else:
        oddSum += rem
    n = n//10

print(evenSum, " ", oddSum)

## Python // performs integer division and / performs float division