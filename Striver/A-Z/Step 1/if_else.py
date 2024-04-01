def compareIfElse(a: int, b: int):
    if a < b:
        return "smaller"
    elif a > b:
        return "greater"
    else:
        return "equal"
    

a = compareIfElse(5,6)

print(a)