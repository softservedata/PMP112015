def up(c,r,d):
    r=0
    d=''
    while r!=(len(c)):
        if ord(m[r])>=65 and ord(m[r])<=90:
            d=d+c[r]
            
        if ord(m[r])>=97 and ord(m[r])<=122:
            d=d+chr((ord(c[r]))-32)
        r=r+1    
        
              
    return(d)
def lower(c,r,d):
    r=0
    d=''
    while r!=(len(c)):
        if ord(m[r])>=65 and ord(m[r])<=90:
            d=d+chr((ord(c[r]))+32)
            
        if ord(m[r])>=97 and ord(m[r])<=123:
            d=d+c[r]
        r=r+1    
        
              
    return(d)

n=int(input('vvedit kilkist radkiv '))
k=0
z=[]
while k!=n:
    t=''
    m=input('vvedit radok ')
    
    r=0
    small=0
    big=0
    while r!=(len(m)-1): 
        if ord(m[r])>=97 and ord(m[r])<=122:
                small=small+1
                r=r+1
    
        if ord(m[r])>=65 and ord(m[r])<=90:
                big=big+1
                r=r+1
    
    
    if small>big:
        t=lower(m,0,t)
    else:
        t=up(m,0,t)
    z.append(t)
    k=k+1
k=0
while k!=n:
    print(z[k])
    k=k+1
