n=int(input('n='))
import random
k=1
if n<=2:
    print('error')
else:
    a=[[int(input('input ')) for j in range(n)] for i in range(n)]
    for i in a:
        for j in i:
            print(j, end=' ')
        print()
    for i in range(n):
        for x in range(n):
            g=0
            for j in range(n):
                if x!=i:
                    s=a[i][j]*a[x][j]
                    g+=s
                else:
                    s=a[i][j]*a[x][j]
                    g+=s
            if x!=i:
                if g!=0:
                    k=0
            else:
                if g!=1:
                    k=0
            if k==0:break
        if k==0:break
    if k==0:
        print('Матриця не ортонормована')
    else:
        print('Матриця ортонормована')
