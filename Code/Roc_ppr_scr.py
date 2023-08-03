import random
# print("1 - Rock\n2 - Paper\n3 - Sceisor\n")
opt=['1','2','3']
comp=int(random.choice(opt))
user=int(input('Choose any one: 1 - Rock\n2 - Paper\n3 - Sceisor\n'))
print(comp)
if user==comp:
    print("Match tie")
if user==1:
    if comp==2:
        print("won")
    if comp==3:
        print("won")
if user==2:
    if comp==1:
        print("lost")
    if comp==3:
        print("lost")
if user==3:
    if comp==1:
        print("lost")
    if comp==2:
        print("won")
if user<0 and user>3:
    print("Invalid input...You lost!!")