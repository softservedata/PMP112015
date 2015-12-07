m=int(input('Print number of your groups from 2 to 10: '))
a=[]
b=[]
c=[]
d=[]
e=[]
f=[]
g=[]
h=[]
i=[]
j=[]
if m>=2 and m<=10:
    for l in range(97,107):
        if l==m+97:
            break;
        else:
            o=int(input('type quantity of your 3-figured positive numbers from 4 to 50: '))
        if o>=4 and o<=50:
            for k in range(1,o+1):
                n=int(input('Type your 3-figured positive "Z" number: '))
                if l==ord('a'):
                    a.append(n)
                if l==ord('b'):
                    b.append(n)
                if l==ord('c'):
                    c.append(n)
                if l==ord('d'):
                    d.append(n)
                if l==ord('e'):
                    e.append(n)
                if l==ord('f'):
                    f.append(n)
                if l==ord('g'):
                    g.append(n)
                if l==ord('h'):
                    h.append(n)
                if l==ord('i'):
                    i.append(n)
                if l==ord('j'):
                    j.append(n)
                if n//100>10 or n//100<1:
                        print('Error, number are not 3-figured')
                        break;
            else:
                continue;
        else:
            print('Error')
else:
    print('Error, quantity is not 4<=x<=50')
p=len(sorted(a))
p1=sorted(a)
q=len(sorted(b))
q1=sorted(b)
r=len(sorted(c))
r1=sorted(c)
s=len(sorted(d))
s1=sorted(d)
t=len(sorted(e))
t1=sorted(e)
u=len(sorted(f))
u1=sorted(f)
v=len(sorted(g))
v1=sorted(g)
w=len(sorted(h))
w1=sorted(h)
x=len(sorted(i))
x1=sorted(i)
y=len(sorted(j))
y1=sorted(j)
z={p:p1,q:q1,r:r1,s:s1,t:t1,u:u1,v:v1,w:w1,x:x1,y:y1}
z1=z.items()
z2=max(z1)
print(z2)
