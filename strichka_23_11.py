n=raw_input()
if len(n)>253:
    print 'Your text must have less than 253 symbol!'
else:
    a=n.split()
    for i in a:
        print i,
