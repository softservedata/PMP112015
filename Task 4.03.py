s=input('text=')
if len(s)>253:
   print('Error')
else:
    l=s[::-1]
    w=l.split()
    for x in w:
        print (x)
