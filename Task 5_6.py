def importation(m,n):        #function for inputing elements
    if m>=2 and m<=10 and n>=4 and n<=50:
        t = [ ]
        for i in range(m):
            row = raw_input('Type the ' + str(n) + ' elements in group ' + str(i+1) + ': ').split()
            if len(row)==n:
                for i in range(len(row)):
                    row[i] = int(row[i])
                if i>=1 and i<=999:
                    t.append(row)
                else:
                    print('Error, you typed wrong data')
            else: print('Error, you typed wrong data')     
    else: print('Error, you typed wrong data')
    return t
#----------------------------------------------------------------------------
def checking(i):  #square root from numbers
    k = 0
    for x in i :
        if (((x**0.5)*10)%10) == 0:
            k = k+1
    return k
        
#----------------------------------------------------------------------------
def ShowList(all_list):        #outputing data
    f = all_list[a.index(max(a))]
    return f
#----------------------------------------------------------------------------
a = [ ]
print('Dear user, please enter those numbers:  2<=m<=10;  4<=n<=50;    1<=elements in n<=999')
m = int(input('m = '))
n = int(input('n = '))
all_list = importation(m,n)
print ('checking what we typed:',all_list)
for i in all_list:
    a.append(checking(i))
print ('amount of square roots in all groups:',a)

print ('group with max amount of square roots:',ShowList(all_list))


