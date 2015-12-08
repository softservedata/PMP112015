n=int(raw_input('n='))
m=int(raw_input('m='))
demomatrix=[]
for i in range(m):
    demomatrix.append([int(raw_input()) for k in range(n)])
for i in range(len(demomatrix)):
    b=demomatrix[i].sort()
    print demomatrix[i]
print 'Result'
for i in range(m):
    for j in range(1,n):
        a=demomatrix[i][j-1]
        if demomatrix[i][j]<abs(a):
            b=demomatrix[i][j]
            demomatrix[i][j]=a
            demomatrix[i][j-1]=b
    print demomatrix[i]
        
