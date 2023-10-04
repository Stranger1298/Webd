from sympy import *
# x=Symbol('x')
# y=Symbol('y')
# #a=symbol('a')
# #b=symbol('b')
# a=4
# b=6
# w3=4*integrate(1,(y,0,(b/a)*sqrt(a**2-x**2)),(x,0,a))
# print(w3)

# r=Symbol('r')
# t=Symbol('t')
# a=Symbol('a')
# res=integrate(r,(r,0,a*(1+cos(t))),(t,0,2*pi))
# print(res)

x=Symbol('x')
g=input("Enter the function: ")
f=lambdify(x,g)
a=float(input("Enter the lower limit: "))
b=float(input("Enter the upper limit: "))
n=int(input("Enter the number of iterations: "))
for i in range(1,n+1):
    c=(a*f(b)-b*f(a))/f(b)-f(a)
    if(f(a)*f(c)<0):
        b=c
    else:
        a=c
    print('iteration %d \t the root %0.3f \t function value %0.3f \n'%(i,c,f(c)))