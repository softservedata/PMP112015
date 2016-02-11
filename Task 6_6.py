import math
def syn(x, n):
    if n == 0:
        return 0
    else:
        return math.sin(x) + math.sin(syn(x, n - 1))
x = int(input('x='))
n = int(input('n='))
if n<5:
    print('Try other number')
else:
    print(syn(x,n))
    
    


