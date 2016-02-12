def scalar(X1,Y1):
    X1=[]
    Y1=[]
    for i in range (n):
        X1.append(int(input('elem=')))
    for i in range (n):
        Y1.append(int(input('elem=')))
    print(X1)
    print(Y1)
    scalar1=0
    for i in range (n):
        scalar1+=(X1[i]*Y1[i])
    print(scalar1)

n=int(input('n='))
X=[]
Y=[]
scalar(X,Y)


