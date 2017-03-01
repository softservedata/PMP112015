a=float(input('a = '))
b=float(input('b = '))
import math
e=0.00000000001
while abs(b-a)>e :
    c=(a+b)/2
    fa=1/math.tan(1.05*a)-a**2
    fb=1/math.tan(1.05*b)-b**2
    fc=1/math.tan(1.05*c)-c**2
    if fa*fc<0: b=c
    else: a=c
print(c)
print(fc)
