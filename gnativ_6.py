import math
def teil(x,r,n):
    r1=(x**(2*n))/(math.factorial(2*n))
    r=r+r1
    n=n+1
    if r1<=0.0001:
        print(r)
        return r
    else:
        return teil(x,r,n)
x=float(input('x='))
print(teil(x,0,0))
