import math
def ln(x,r,n): 
    x_new=(x-1)/(x+1)
    r1=2*((x_new**n)/n)
    last=r
    r=r+r1
    n=n+2
    if abs(r-last)<=0.0001:
        return r
    else:
        return ln(x,r,n)
x=float(input('x='))
print(round(ln(x,0,1),3))
