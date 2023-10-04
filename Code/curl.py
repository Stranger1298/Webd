# from sympy import beta,gamma
# m=float(input('Enter m: '))
# n=float(input('Enter n: '))
# b=beta(m,n)
# g=gamma(n)
# print('Gama of n: %3.3f'%g)
# print('Beta of m n is: %3.3f'%b)



from sympy import *
import numpy as np
def RungeKutta(g,x0,h,y0,xn):
    x,y=symbols('x,y')
    f=lambdify([x,y],g)
    xt =x0+h
    Y=[y0]
    while xt<=xn:
        k1=h*f(x,y0)
        k2=h*f(x0+h/2, y0+k1/2)
        k3=h*f(x0+h/2, y0+k2/2)
        k4=h*f(x0+h, y0+k3)
        y1=y0+(1/6)*(k1+2*k2+2*k3+k4)
        Y.append(y1)
        print ('y(%3.3f'%xt,') is %3.3f'%y1)
        x0=xt
        y0-y1
        xt-xt+h
    return np.round (Y,2)
RungeKutta('1+(y/x)',1,0.2,2,2)