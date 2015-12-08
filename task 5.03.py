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
def count_dodat(n):
    s=0
    for i in n:
        if i>0:
            
            s=s+1
    return s
def count_minus(n):
    m=0
    for i in n:
        if i<0:
            m+=1
    return m
def ShowList(all_list):        #outputing data
    f = all_list[a.index(max(a))]
    return f
def more_dodat(a):
    sr=0
    for i in a:
        sr=sr+i
    sr=sr/len(a)
    return sr
def more_minus(a):
    sr=0
    for i in a:
        sr=sr+i**2
    return sr
#print sar([5,5,6,4,5])
#- - - - - - - - - - - - - - - - - - -
a = [ ]
b=[]
print'Dear user, please enter those numbers:  2<=m<=10;  4<=n<=50;    99<elements in n<1000'
m = int(raw_input('m = '))
n = int(raw_input('n = '))
all_list = importation(m,n)
for i in all_list:
    a.append(count_dodat(i))
    b.append(count_minus(i))
print 'amount of dodat in each group:',a
print 'seredne arufmet of group with more dodat=',more_dodat(ShowList(all_list))
print 'amount of minus in each group:',b
print 'suma kvadrativ of group with more minus=',more_minus(ShowList(all_list))
