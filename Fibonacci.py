print "\nChysla Fibonacci"
n=input("\nInput max number, n=");
f0=1
f1=1
f2=f0+f1
print "1 1 "
while f2<n:
  f0=f1
  f1=f2
  f2=f0+f1
  print f2
print "The End"



