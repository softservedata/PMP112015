n=int(input('Введіть кількість текстових стрічок '))
c=0
b=[]
q=[]
sp=[]
m=0
while c!=n:
    z=input('Введіть текстову стрічку ')
    b.append(z)
    a=len(z)
    k=0
    while k!=a:
       l= z.count(z[k])
       k=k+1
       m=m+l
       
    if m==len(z):
        sp.append(z)
                
    m=0    
    c=c+1
c=0

n=len(sp)
while c!=n:
    print(sp[c])
    c=c+1
