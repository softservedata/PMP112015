a = (input('List: '))   #counting words
c = []
a = a.replace(' ','')

if len(a)<253:
    for i in a:
        c.append(i)
    c.sort()
    
    for i in range(len(c)):
        if c[i-1] != c[i]:
            d = c.count(c[i])
            print (c[i],':',d)
        
else:
    print ('Error. Lenth is bigger than possible')


