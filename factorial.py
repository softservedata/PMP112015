def Factorial(n):
    d=1
    if n==0 or n==1:
        return d
    else:
        d=d*Factorial(n-1)*n
        return d
n=int(raw_input('n='))
print Factorial(n)
