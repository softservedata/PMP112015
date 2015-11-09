n=int(input('n='))
i=2
j=2
p=3
s=0
A=True
if n<3:
    for k in range(n+1):
     s=s+k
    print('vuraz=',s)
else:
 while  A:
    i=i+1
    j=j+i
    if j>=n:
     i=i-(j-n)
     j=n
     A=False
    s=0
    m=j
    for k in range (1,i+1):
        s=s+m
        m=m-1
    p=p*s
 print('vuraz=',p)
