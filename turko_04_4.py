n=input('Print words, splitted with Space: ')
from collections import Counter
if len(n)<=253:
    c=Counter(n.split())
    r=c.most_common()
    a=r[0]
print(a)
