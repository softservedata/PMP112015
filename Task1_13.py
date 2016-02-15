n=float(raw_input('n='))
k=1
S=0
a=abs(n)-abs(int(n))
if a!=0:
 print  'Error, "n" should integer and higher than zero'
else: 
 if n<=0:
  print 'Error, "n" should be integer and higher than zero'
 else:
   while n>0:
      S1=int((k*(k-1)*(k+1))/(3))
      k+=1
      n-=1
      S=S+S1
   print 'The result of summering =',S

    
