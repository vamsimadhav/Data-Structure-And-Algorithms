def nStarTriangle(n: int) -> None:
    for i in range(0,n):
        #Print space
        for j in range(0,n-i-1):
            print(" ",end='')
        #Print star
        for k in range(0,2*i + 1):
            print("*",end='')
        print()
    