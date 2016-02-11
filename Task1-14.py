#формула - ((-1)**n)*n**2
n=int(input('введіть перше число '))
lastnumber=int(input('введіть останнє число '))
s=0
while n<=lastnumber:
    s=s+((-1)**n)*n**2
    n=n+1
print('сума дорівнює', s)
