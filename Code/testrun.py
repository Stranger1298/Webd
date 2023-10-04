from sympy import *

x = Symbol('x')
g = input("Enter the function: ")
f = lambdify(x, g)
a = float(input("Enter the lower limit: "))
b = float(input("Enter the upper limit: "))
n = int(input("Enter the number of iterations: "))
tolerance = 1e-6

for i in range(1, n + 1):
    c = (a * f(b) - b * f(a)) / (f(b) - f(a))

    if abs(f(c)) < tolerance:
        print(f"Converged to the root {c} after {i} iterations.")
        break

    if f(a) * f(c) < 0:
        b = c
    else:
        a = c

    print(f'Iteration {i}: The root is {c}, and the function value is {f(c):.6f}')

# If the loop completes without finding a root, print a message
else:
    print("Did not converge within the specified number of iterations.")
