line = input('Enter words: ')
m = line.split(' ')
for k in range(len(m)):
    z = m[k][1:]
    if len(z) > 1:
        print(z)
