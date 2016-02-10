def sumetric(s,j,k):
    z=[]
    if s==z:
        return(1)
    if s[0]==s[len(s)-1]:
        s.pop(0)
        s.pop(len(s)-1)
        sumetric(s,j,k)
        
    else:
        return(0)
     
s=str(input("vvedit radok "))
l=[]
dov=0
while dov!=len(s):
    l.append(s[dov])
    dov=dov+1
j=int(input("1 koordunata"))
k=int(input("2 koordunata"))
l=l[j:k+1]
o=[]

z=sumetric(l,j,k)
if l==o:
    print ('URA ')
else:
    print ('NE URA')

