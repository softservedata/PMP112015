Matrix=[]
R=int(input('Кількість рядків='))
S=int(input('Кількість стовпців='))
print ('Напишіть матрицю')
for i in range(R):
    Matrix.append([float(x) for x in input().split()])
maxabsS=[]
for j in range(S):
    maxabsS.append(max([abs(Matrix[i][j]) for i in range(len(Matrix))]))
maxS1=[]
for j in range(S):
    maxS1.append(max([Matrix[i][j] for i in range(len(Matrix))]))
maxS2=[]
for t in maxabsS:
    if t in maxS1:
        maxS2.append(t)
    else:
        t=t*-1
        maxS2.append(t)
print ('Найбільші за абсолютною величиною елементи',maxS2)



