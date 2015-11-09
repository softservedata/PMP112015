a = []
m=int(input('line='))
n=int(input('column='))
for i in range(m):
    a.append([])
    for j in range(n):
        k=int(input('elem='))
        a[i].append(k)
print('....')
print()
print('matrix')
print()
for i in a:
    print(i)
print()
print('transposed matrix')
print()

aT = []
for i in range(n):
    aT.append([])
    for j in range(m):
        aT[i].append(a[j][i])

for i in aT:
    print(i)

C=[]
for i in range(m):
    C.append([])
    for j in range(m):
        C[i].append(0)
for i in range(m):
    for j in range(m):
        s=0
        for k in range(n):
            s=s+a[i][k]*aT[k][j]
            C[i][j]=s
print()
print('multiplication')
print()
for i in C:
    print(i)       
    



        
