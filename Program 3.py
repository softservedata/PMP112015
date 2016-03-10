a = []
n=int(input('n='))
r=0
while r!=n: 
    a.append([])
    for c in range(n):
        k=int(input('k='))
        a[r].append(k)
       
    r=r+1
q=0
while q!=n:
    print(a[q])
    q=q+1
b=[]
z=0
q=0
MAX=0
y=0
l=1

while q!=n-1:
    while z!=n-l:
        if a[q][z]>a[q][z+1]:
            b.append(a[q][z])
            
        else:
            b.append(a[q][z+1])
        z=z+1
    
    q=q+1
    l=l+1
    z=0
    
b.append(a[n-1][0])
print(max(b))
