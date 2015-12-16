def importation(m,n):        #function for inputing elements
    if m>=2 and m<=10 and n>=4 and n<=50:
       t = [ ]
       mr=[]
       for i in range(m):
            row = raw_input('Type the ' + str(n) + ' elements in group ' + str(i+1) + ': ').split()
            if len(row)==n:
                for i in range(len(row)):
                  row[i] = int(row[i])
                t.append(row)
            else:
                print'Error, you typed wrong data' 
    else:
       print'Error, you typed wrong data'
    return t
#print importation(3,5)
def ToSort(a):
    for passnum in range(len(a)-1,0,-1):
      for i in range(passnum):
           if a[i]>a[i+1]:
                a[i], a[i+1] = a[i+1], a[i]
    return a
def same_sign(a):
    p=0
    n=0
    for i in a:
        if i>=0:
            p+=1
        else:
            n+=1
    return (p==len(a))or(n==len(a))
#print same_sign([3,4,5])
print'Dear user, please enter those numbers:  2<=m<=10;  4<=n<=50;    99<elements in n<1000'
m = int(raw_input('m = '))
n = int(raw_input('n = '))
alllist = importation(m,n)
for c in alllist:
    if same_sign(c):
        ToSort(c)
for i in alllist:
    print i
