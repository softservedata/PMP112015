f=(input('phrase:'))
if len(f)<=253:
    s=f.replace('ph','f')
    print ('First:',f,'Second:',s,sep='\n')
else:
    print('Too many symbols')
