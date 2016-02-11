b=input("short string, don't use the same letter twice   ")
a=input('long string  ')
c=b[:]
pos=a.find(c)
while len(c)>=2 :
    if pos==(-1):
        #cutting c
        if c[len(c)-1]==b[len(b)-1]:
            c=b[:len(c)-1]
            pos=a.find(c)
            continue
        #moving c
        else:
            c=b[b.find(c[0])+1:b.find(c[len(c)-1])+2]
            pos=a.find(c)
            continue
    else:
        #deleting с from а
        a=a[:pos]+a[pos+len(c):]
        pos=a.find(c)
print(a)
