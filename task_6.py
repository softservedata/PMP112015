def minrec(x,n):
    if n==1:
        return x[0]
    m=minrec(x,n-1)
    if m<x[n-1]:
        return m
    else:
        return x[n-1]

n = input('n = ')
l = []
for k in n.split(' '):
    l.append(int(k))
print(minrec(l,len(l)))
