import math
k=float(input('x='))
def sinh(x,s=0,n=0):
     s0=(x**(2*n+1))/(math.factorial(2*n+1))
     s=s+s0
     n=n+1
     if s0<=0.0001:
        return s
     else:
         return sinh(x,s,n)

print sinh(k)
print math.sinh(k)
