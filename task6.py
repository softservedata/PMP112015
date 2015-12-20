x=int(raw_input('Enter x '))
n=int(raw_input('Enter number of terms '))
a=[]
print 'Enter constants '
for i in range(n):
    b=int(raw_input())
    a.append(b)
def horner(x,a,i=0):
    if i==len(a)-1:
        return a[i]
    else:
        return a[i]+horner(x,a,i+1)*x
print horner(x,a)
