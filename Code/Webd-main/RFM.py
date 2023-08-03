from sympy import *
x=Symbol('x')
g=input('Enter the function : ' )
f=lambdify(x,g)
a=float(input("Enter the a value : "))
b=float(input("Enter the b value : "))
N=int(input('Enter the number of iterations : '))
for i in range(1,N+1):
    c=(a*f(b)-b*f(a))/f(b)-f(a)
    if((f(a)*f(c))<0):
        b=c
    else:
        a=c
    print('iteration %d\t the root %0.3f \t function value %0.3f \n %(i,c,f(c))');