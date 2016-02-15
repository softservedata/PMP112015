import math
print 'Input segment [A;B]'
print 'A and B should be higher than 0'
a=float(raw_input('A='))
b=float(raw_input('B='))
e=0.0001
def f(x):
    return (math.log10(x))+x**2-4
y1 = f(a)
y2 = f(b)
if y1 * y2 >= 0:
    print 'There is no solution on segment [{0};{1}] '.format(a,b)
else:
    c = (a+b)/2
    y3 = f(c)
    while abs(y3) > e:
        c = (a+b)/2
        y3 = f(c)
        if y1 * y3 < 0:
            b = c
        else:
            a = c
    print c

