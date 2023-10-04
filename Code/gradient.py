from sympy.physics.vector import *
from sympy import var
# var('x,y,z')
# v=ReferenceFrame('v')
# f=v[0]**2*v[1]*v[2]
# g=gradient(f,v)
# f=f.subs([(v[0],x),(v[1],y),[v[2],z]])
# print(f)
# g=g.subs([(v[0],x),(v[1],y),[v[2],z]])
# print(g)


# x0=1
# y0=2
# y1=2.2156
# y2=2.4649
# y3=2.7514
# h=0.1
# x1=x0+h
# x2=x1+h
# x3=x2+h
# x4=x3+h
# def f(x,y):
#     return x**2+(y/2)
# y10=f(x0,y0)
# y11=f(x1,y1)
# y12=f(x2,y2)
# y13=f(x3,y3)
# y4p=y0+(4*h/3)*(2*y11-y12+2*y13)
# print('Predicted value of y4 is %3.3f'%y4p)
# y14=f(x4,y4p)
# for i in range(1,4):
#     y4=y2+(h/3)*(y14+4*y13+y12)
#     print('Corrected value of y4 after iteration %d is %3.5f'%(i,y4))
#     y14=f(x4,y4)

# var('x,y,z')
# v=ReferenceFrame('V')
# F=v[0]**2*v[1]*v.x+v[1]*v[2]**2*v.y+v[0]**2*v[2]*v.z
# G=divergence(F,v)
# F=F.subs([(v[0],x),(v[1],y),[v[2],z]])
# print("Given function is: ")
# print(F)
# G=G.subs([(v[0],x),(v[1],y),[v[2],z]])
# print("The divergence of given function is: ")
# print(G)



# var('x,y,z')
# v=ReferenceFrame('v')
# f=v[0]**2*v[1]*v.x+2*v[0]**2*v[1]*v[2]*v.y-3*v[1]*v[2]**2*v.z
# G=curl(f,v)
# f= f.subs([(v[0], x), (v[1], y), (v[2], z)])
# print('Given scalar function is: ')
# print(f)
# G= G.subs([(v[0], x), (v[1], y), (v[2], z)])
# print('The curl of given function is: ')
# print(G)

#Runge Kutta Method
from sympy import *
import numpy as np
def RungeKutta(g,x0,h,y0,xn):
    x,y=symbols('x y')
    f=lambdify([x,y],g)
    xt=x0+h
    Y=[y0]
    while xt<=xn:
        K1=h*f(x0,y0)
        K2=h*f(x0+h/2,y0+K1/2)
        K3=h*f(x0+h/2,y0+K2/2)
        K4=h*f(x0+h,y0+K3)
        y1=y0+(1/6)*(K1+2*K2+2*K3+K4)
        Y.append(y1)
        print('y(%3.3f'%xt,') is %3.3f'%y1)
        x0=xt
        y0=y1
        xt=xt+h
    return np.round(Y,2)
RungeKutta('1+(y/x)',1,0.2,2,2)