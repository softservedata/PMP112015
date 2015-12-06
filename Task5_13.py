a=int(raw_input('a='))
b=int(raw_input('b='))
c=int(raw_input('c='))
#------------------------
def IsTrian(x,y,z):
   if z+y < x or y+x <z or z+x <y:
       return 'Not possible to create trianfle'
   else:
        return 'Possible to create triangele'
#-----------------------
def TypeTrian(x,y,z):
    if x==y and y==z and z==x:
        return 'Triangle is equilateral'
    elif x==y or z==y or z==x:
        return 'Triangle is isosceles'
    else:
        return 'Triangle is scalene'
#----------------------
def DegreeTrian(x,z,y):
    if a*a+b*b==c*c or b*b+c*c==a*a or c*c+a*a==b*b:
        return 'Triangle is right'
    if a*a+b*b<c*c or b*b+c*c<a*a or c*c+a*a<b*b:
        return 'Triangle is obtuse'
    if a*a+b*b>c*c and b*b+c*c>a*a and c*c+a*a>b*b:
        return 'Triangle is acute'
#--------------------
print IsTrian(a,b,c)
print TypeTrian(a,c,b)
print DegreeTrian(a,b,c)
