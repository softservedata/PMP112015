m=int(input('кількість рядків '))
f=open('words.txt')
a=[]
for line in f:
    a.append([(x) for x in line.rstrip().split()])
r=0
i=0
z=0
small=0
big=0
t=[]
while r!=m: 
    t.append([])
    r=r+1
while i!=m:
    b=str(a[i])
    c=b[2:len(b[i])-3]
    while z!=(len(c)-1):
        if ord(c[z])>=97 and ord(c[z])<=122:
            small=small+1
            z=z+1
            t[i].append(c[z])
        if ord(c[z])>=65 and ord(c[z])<=90:
            big=big+1
            z=z+1
            t[i].append(c[z])




    
        
    
    z=0
    
    if big>small:
        print('в рядку ',i,' більше великих символів')
        c=c.upper()
        t[i]=c

    else:
        print('в рядку ',i,' більше маленьких символів')
        c=c.lower()
        t[i]=c
    small=0
    big=0
    i=i+1

i=0
z=0
r=0

def uppermy(c,z):
    r=0
    while r!=(len(c[z][r])):
              c[z][r]=chr(ord(c[z]-32))
              r=r+1
    
def lowermy(c,z):
    r=0
    while r!=(len(c[z][r])):
              c[z][r]=chr(ord(c[z]+32))
              r=r+1

def readfile(f,a):
    f=open('words.txt')
    a=[]
    for line in f:
        a.append([(x) for x in line.rstrip().split()]) 
