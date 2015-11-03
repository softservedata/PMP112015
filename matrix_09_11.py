n=int(input('n='))
m=int(input('m='))
demomatrix=[]
if n<5:
    print('n must be greater than 5')
elif m<5:
    print('m must be greater than 5')
else:
    for i in range(m):
        demomatrix.append([abs(int(input())) for k in range(n)])
    for k in range(len(demomatrix)):
        b=demomatrix[k].sort()
        print demomatrix[k]
