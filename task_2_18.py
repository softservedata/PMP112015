f={}
b=0
x0=int(input('x0='))
m=int(input('m='))
for p in range (0,m+1):
    f.update({p:int(input('koef='))})
for p in range (m,-1,-1):
    b=f[p]+b*x0
print(b)
