n=int(input('n='))
a=[]
for i in range(n):
    a.append([int(x) for x in input().split()])
print(a)
b=[]
for i in range(n):
    b.append([a[k][i] for k in range(n)])
s1=1
for i in range(n):
    s1=s1*a[0][i]
s2=1
for i in range(n):
    s2=s2*a[n-1][i]
s3=1
for i in range(n):
    s3=s3*b[0][i]
s4=1
for i in range(n):
    s4=s4*b[n-1][i]
S=s1*s2*s3*s4/a[0][0]/a[0][n-1]/a[n-1][0]/a[n-1][n-1]
print(S)
