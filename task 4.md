# PMP112015
Ivan Franko  University of L'viv, Group PMP-11 of 2015-2016
n=str(input("enter string ="))
k=n.split(" ")
m=len(k)
b=[]
if m<21:
    k=n.split(" ")
    b.append(sorted(k))
    print(b)
else:
    print("sory ,by by")    
