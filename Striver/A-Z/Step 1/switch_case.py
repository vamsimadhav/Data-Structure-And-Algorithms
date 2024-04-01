import math
from typing import *

def areaSwitchCase(ch: int, a: List[float]):
    # Write your code here
    ans = -1
    match ch:
        case 1:
            return '{:.5f}'.format(math.pi * a[0] * a[0])
        case 2:
            return '{:.5f}'.format(a[0] * a[1])
        

## Formatting the Number was a new thing I came to know.