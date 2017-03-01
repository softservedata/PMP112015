a=int(input('write a numder  '))
def ln(z,n=1):
    x=(z-1)/(z+1)
    if n>1000:
        return 2*((x**n)/n)
    else:
        s=2*((x**n)/n)+ln(z,n=n+2)
        return s
print(round(ln(a),3))
