n=float(raw_input('n='))
k=1
S=0
while n>0:
      S1=int((k*(k-1)*(k+1))/(3))
      k+=1
      n-=1
      S=S+S1
print 'The result of summering =',S

    
