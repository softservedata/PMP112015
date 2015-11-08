print('Type n,m > 5')
n = int(input('n='))
m = int(input('m='))
if n and m > 5:
    Amt = [ ]
    for i in range(n):
        Amt.append([int(input('Type element=')) for j in range (m)])
    
    for i in range (n):
        Amt[i].sort()
   
    Amt.sort(reverse=True) 
    for q in range (len(Amt)):
        print(Amt[q])    
else:
    print('Error! n or m <= 5')
    
