n=int(input('n='))
a=[]
for i in range(n): #creating a matrix
    ar=[]
    for k in range(n):
        print('element',i+1,k+1)
        x=float(input('='))
        ar.append(x)
    a.append(ar)    
maxrow=a[0]
for i in range(n): #maxrow
    if max(a[i])>max(a[i-1]):
        maxrow=a[i]
print('maxrow=',maxrow)
minel=[0,0]
for i in range(n): #min stovpchuk
    for v in range(n):
        if a[i][v]<minel[0]:
            minel[0]=a[i][v]
            minel[1]=v
mincd=[]
for i in range(n): #min stovpchuk
    mincd.append(a[i][minel[1]])
print('mincd=',mincd)
S=[]
for i in range(n): #product
    for g in range(n):
        el=maxrow[i]*mincd[g]
        S.append(el)
print(S)
