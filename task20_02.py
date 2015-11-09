import math
eps=float(input('eps='))
k=1
s=(1+1/k)**k
while eps < abs(math.e-s):
    k=k+1
    s=(1+1/k)**k
print('limit=',s)
