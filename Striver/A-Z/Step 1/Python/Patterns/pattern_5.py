def seeding(n: int) -> None:
    for i in range(0,n):
        for j in range(0,n-i):
            print("* ", end='')
        print()