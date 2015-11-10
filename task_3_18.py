n=int(input('n='))
a=[]
b=[]
c=n//2
for i in range(1,n+1):
    a.append([0]*(n+1))
print('Enter an array please:')
for i in range(n*n):
    b.append(int(input('Enter an element of the array: ')))
a[c][c]=b[0]
k=2
d=1
count=1
while n>=3:
    for i in range(1-d,k):
        a[c+i][c-d]=b[count]
        count+=1
    if count>=n*n:break
    for i in range(1-d,k):
        a[c+d][c+i]=b[count]
        count+=1
    if count>=n*n:break
    for i in range(1-d,k):
        a[c-i][c+d]=b[count]
        count+=1
    if count>=n*n:break
    for i in range(1-d,k):
        a[c-d][c-i]=b[count]
        count+=1
    if count>=n*n:break
    d+=1
    k+=1
for i in range(n):
    for j in range(n):
        print('{0:<5}'.format(a[i][j]),end=' ')
    print()
