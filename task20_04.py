a=[] 
b=[]  
d=int(input('number of words=')) 
for k in range (d):
    k=(input('word='))
    a.append(k) 
for i in range (len(a)):
    if len (a[i])%2==0:
        h=(int(len(a[i])/2))
        g=(a[i][h:])
        c=(a[i][:h])
        b.append(g+c)
    elif len (a[i]) %2==1:
        h=((len(a[i])//2)+1)
        g=(a[i][h:])
        c=(a[i][:h])
        b.append(g+c)
    else:
        break 
print(b)
