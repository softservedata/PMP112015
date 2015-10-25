numb=abs(int(input('numb=')))
x=numb//2
while x>1:
    if numb%x==0:
        print('Число',numb,'має дільники')
        break
    x-=1
else:
        print('Число',numb,'є простим')
        
