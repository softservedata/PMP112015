s=str(input('enter the string please: '))
s=s.split()
if len(s)<21:
    for i in range(len(s)):
        a=list(s[i])
        for k in range(len(a)-1):
            if ord(a[k])<=ord(a[k+1]):
                pass
            else: break
            if k==(len(a)-2):
                print(s[i])
else: print('<21 words')
