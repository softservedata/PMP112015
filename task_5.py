def reader():
    f = open("file.txt")
    L = []
    for rows in f:
        L.append(rows)
    return L
    
def decode(s):
    D = [[],[]]
    for i in range(ord('A'), ord('Z')+1):
            D[0].append(chr(i))
    for i in range(ord('А'), ord('Ь')+1):
            D[0].append(chr(i))
    D[0].append('Є'); D[0].append('І'); D[0].append('Ї')
    D[0].append('Ю'); D[0].append('Я')
            
    for i in range(ord('a'), ord('z')+1):
            D[1].append(chr(i))
    for i in range(ord('а'), ord('ь')+1):
            D[1].append(chr(i))
    D[1].append('є'); D[1].append('і'); D[1].append('ї')
    D[1].append('ю'); D[1].append('я')
    
    L = list(s)
    for i in range(len(L)):
        if L[i] in D[0]:
            for j in range(len(D[0])):
                if L[i] == D[0][j]:
                    L[i] = D[1][j]
        else:
            if L[i] in D[1]:
                for j in range(len(D[1])):
                    if L[i] == D[1][j]:
                        L[i] = D[0][j]           
            else:
                if L[i] == '\n':
                    L[i] = ' '
    return L

def prn(lst):
    for i in lst:
        print(i)

#main()
l = reader()
lst = []

for i in l:
    L=decode(i)
    lst.append(''.join(L))

prn(lst)
