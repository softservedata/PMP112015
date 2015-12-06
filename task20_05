def translate(text):
    T=[]
    for i in range (m):
            textt=text[i]
            textT=textt.translate(str.maketrans({'а':'a', 'б':'b', 'в':'v',
             'г':'g', 'ґ':'g', 'д':'d', 'е':'e', 'є':'ye','ж':'zh', 'з':'z',
             'и':'i','і':'і', 'ї':'yi', 'й':'y', 'к':'k', 'л':'l','м':'m', 'н':'n',
             'о':'o','п':'p', 'р':'r', 'с':'s', 'т':'t','у':'u','ф':'f', 'х':'h',
             'ц':'ts','ч':'ch', 'ш':'sh','щ':'sch','ь': '','ю':'yu', 'я':'ya'}))
            T.append(textT)
    print(T)
text=[]
m=int(input('m='))
for i in range(m):
        text.append(input('word='))
translate(text)
#--------------------------------------------------------------------------------------
text=[]
translate=[]
m=int(input('number of words='))
for i in range(m):
        text.append(input('word='))
for j in range (m):
            textt=text[j]
            textT=textt.translate(str.maketrans({'а':'a', 'б':'b', 'в':'v',
             'г':'g', 'ґ':'g', 'д':'d', 'е':'e', 'є':'ye','ж':'zh', 'з':'z',
             'и':'i','і':'і', 'ї':'yi', 'й':'y', 'к':'k', 'л':'l','м':'m', 'н':'n',
             'о':'o','п':'p', 'р':'r', 'с':'s', 'т':'t','у':'u','ф':'f', 'х':'h',
             'ц':'ts','ч':'ch', 'ш':'sh','щ':'sch','ь': '','ю':'yu', 'я':'ya'}))
            translate.append(textT)
print(translate)
