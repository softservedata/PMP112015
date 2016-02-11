import math
from decimal import *

a=int(input('x='))
S=0
def sinh(x,n=900):
    if n==0:
     return 0
    else:
     return ((x**(2*n+1)))/(math.factorial(2*n+1))+sinh(x,n-1)
print sinh(a)
print math.sinh(a)
#x=a
#n=5
#print Decimal(((((x**(2*n+1))))/((math.factorial(2*n+1))))).quantize(Decimal('.0000000000000000000'))
#x=a
#n=6
#print Decimal(((((x**(2*n+1))))/((math.factorial(2*n+1))))).quantize(Decimal('.0000000000000000000'))


