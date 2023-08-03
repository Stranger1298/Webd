##BMI
# w=int(input('Enter the weight (kg) : '));
# h=float(input('Enter the height : '));
# bmi=w/h**2;
# print(bmi)
# print(round(bmi))
##Alive program
# max_age=90
# age=input('Enter your age : ')
# alive=int(max_age)-int(age)
# days=int(alive)*365
# months=int(alive)*12
# weeks=int(alive)*52
# print(alive)
# print(f"You have {days} days, {months} months and {weeks} weeks left !!")
##BMI 2.0
# w=int(input('Enter the weight (kg) : '));
# h=float(input('Enter the height : '));
# bmi=w/h**2;
# bmi=round(bmi,2)
# print(bmi)
# if bmi>0 :
#     if bmi<18.5 :
#         print('You are underweight')
#     elif bmi>=18.5 and bmi<25 :
#         print('You care in normal weight')
#     elif bmi>=25 and bmi<30 :
#         print('You are overweight')
#     elif bmi>=30 and bmi<35 :
#         print('You are obese')
#     else :
#         print('You are clinically obese')
# else :
#     print('Enter the valid height and weight!!')
##Leap year finding
# print('Welcome to leap year finder :)')
# year=int(input('Enter a year to check whether it is a leap year or not. '))
# if year%4==0 :
#     if year%100==0 :
#         if year%400==0 :
#             print(f'{year} is the leap year')
#         else :
#             print(f'{year} is not a leap year')
#     else :
#         print(f'{year} is a leap year')
# else :
#     print(f'{year} is not a leap year')
##Pizza ordering
# print('Welcome to the pizza ordering system :')
# size=input('Enter the size of pizza you want S,M,L ? ')
# pepproni=input('Enter if you want pepperoni in pizza Y, N ? ')
# cheese=input('Enter if you want cheese on pizza Y , N ?')
# bill=0
# if size=='S':
#     bill+=15
# elif size=='M':
#     bill+=20
# elif size=='L':
#     bill+=25
# if pepproni=='Y':
#     if size=='Y':
#         bill+=2
#     if size=='M' or 'L':
#         bill+=3
# if cheese=='Y':
#     bill+=1
# print(f'Your final bill is ${bill}')
##Love Calculator
he=input('Enter his name: ')
she=input('Enter her name: ')
combined_name=he+she
lower_case=combined_name.lower()
t=lower_case.count('t')
r=lower_case.count('r')
u=lower_case.count('u')
e=lower_case.count('e')
l=lower_case.count('l')
o=lower_case.count('o')
v=lower_case.count('v')
e=lower_case.count('e')
true=t+r+u+e
love=l+o+v+e
print(f'Congrats your love score is {true}{love}%')
##Treasure finder game
# print('Welcome to treasure island.\n your mission is to find the treasure.')
# way=input('Enter which way you wanna go L OR R ? ')
# if way=='L':
#     way2=input('Enter by which means you wanna go for boat B and for swim S ? ')
#     if way2=='B':
#         door=input('Enter which door you wanna choose Red R blue B yellow Y ? ')
#         if door=='Y':
#             print("Boom you won!!")
#         else:
#             print('Game over!!')
#     else:
#         print('Game over!!')
# else:
#     print("Game over!!")