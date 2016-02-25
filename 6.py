import math
def sin(x,r,n):
    k=n*2-1
    znak=((-1)**(n-1))
    r1=znak*((x**k)/math.factorial(k))
    last=r
    r=r+r1
    n=n+1
    if abs(r-last)<=0.0001:
        return r
    else:
        return sin(x,r,n)
print("введіть число в радіанах ")
x=float(input('x='))
print(sin(x,0,1))
