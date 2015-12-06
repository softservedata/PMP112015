def Dodatni(a):
    s=0
    for i in a:
        if i>0:
            print i
            b=str(i)
            s=s+len(b)-1
        print s
allist=[]
n=int(input('n='))
m=int(input('m='))
for i in range(m):
    allist.append([float(input('Enter real numbers')) for k in range(n)])
print allist
for w in allist:
    print w
    Dodatni(w)

