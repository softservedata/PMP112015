a=str(input('M='))
def peretvorenia(n):
    b=n.split('E')
    k=b[0].split('.')
    n=int(k[0])
    m=int(k[1])
    s=1
    for i in range(len(k[1])):
        s=s*10
    q=m/s
    if k[0][0]=='-':
        drib=n-q
    else:
        drib=n+q
    z=int(b[1])
    r=10**z
    res=drib*r
    return(res)
b=peretvorenia(a)
print(b)
