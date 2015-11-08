print('Type the array size (N x M) where n,m > 5')
n = int(input('n='))
m = int(input('m='))
if n and m > 5:
    Amt = [ ]
    for i in range(n):
        row = raw_input('Type the ' + str(m) + ' elements row ' + str(i+1) + ': ').split()
        for i in range(len(row)):
            row[i] = int(row[i])
        Amt.append(row)
        
    for i in range (n):
        Amt[i].sort()
   
    Amt.sort(reverse=True) 
    for i in range (len(Amt)):
        print(Amt[i])    
else:
    print('Error! n or m <= 5')
    
