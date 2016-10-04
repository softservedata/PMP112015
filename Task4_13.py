A=raw_input('Input text:')
B=raw_input('Input word:')
a=A.find(B)
b=a+len(B)-1
print 'On segment:[',a,':',b,']'
b=b+1
while A.find(B ,b)!=-1:
 b=A.find(B,b)
 print 'On segment:[',b,':',b+len(B)-1,']'
 b=b+1
