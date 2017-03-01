file=open('Groups5.txt','r')
a=[line.strip().split() for line in file.readlines()]
file.close()
#function for counting symbols
def symbols(a):
    amound=0
    for k in range(len(a)):
        t=a.count(a[k])
        if t>amound: amound=t
    return amound
#finding needed line
b=[]
for i in range(len(a)):
    b.append(symbols(a[i]))        
ind=b.index(max(b))
#function for printing line
def printing(a):
    f=''
    for k in range(len(a)):
        f=f+a[k]+'  '
    print(f)
printing(a[ind])

        
