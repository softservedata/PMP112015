n=str(input('str1='))
a=str(input('str2='))
e=set()
g=set()
if (len(n)<253)and(len(a)<21):
    for i in n:
        e.add(i)
    for i in a:
        g.add(i)
    onlye=e-g
    t=list(onlye)
    s=''
    for i in range(len(t)):
        s=s+t[i]
    print(s)
else:
    print('error')
