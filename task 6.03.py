def mysuma(n):
    if n==0:
        return 0
    else:
        a=n/(n+1)
        b=a+mysuma(n-1)
        return b
n=int(input('n='))
if n>3:
    print (1/(1+(2/(2+(3/(3+mysuma(n)))))))
else:
    print ('Error.Try other number')
