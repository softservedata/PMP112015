n=int(input('N='))
a=[]
Sd1=0
Sd2=0
#Zero matrix
for k in range(n):
  a.append([0]*n)
#Inputting
for i in range (n):
 for j in range (n):
   print ('Input element [',i,'][',j,']')
   a[i][j]=int(input('Element = '))
#Outputting
for i in range(n):
   for j in range(n):
      print('{0:5}'.format(a[i][j]),end='')
   print()      
#Summering
for i in range (n):
   Sd1=Sd1+a[i][i]
   Sd2=Sd2+a[i][n-i-1]
S=Sd1+Sd2
#Reapiting
if  n%2!=0:
 S=S-a[int((n-1)/(2))][int((n-1)/(2))]
print ('Sum =',S)
