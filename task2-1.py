N=int(input('Number='))
if N//100000<10 and N//100000>0:
    f=N%10
    e=N%100//10
    d=N%1000//100
    c=N%10000//1000
    b=N%100000//10000
    a=N%1000000//100000
    Sum=a+b+c+d+e+f
    print ('Sum=',Sum)
else:
    print ('print 6 figures')
    
