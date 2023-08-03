##Calculating the average height of a bunch of students
# stud_height=input('Enter the list of heights of students : ').split()
# print(stud_height)
# sum_height=0
# for height in stud_height:
#     sum_height+=int(height)
# total_stud=0
# for studs in stud_height:
#     total_stud+=int(studs)
# average=sum_height/int(studs)
# print(average)
# print(round(average))

##Finding max and min from a list without builtin function(using for loop)
# score_chart=input('Enter the scores of students : ').split()
# print(score_chart)
# max_score=0
# for scores in score_chart:
#     if int(scores)>int(max_score):
#         max_score=scores
# print('The max score from the above list is:',max_score)

##Adding all the even numbers from 1 to 100
# sum=0
# for number in range(0,101):
#     if number%2==0:
#         sum=sum+number
# print(sum)

##FIZZ-BUZZ Exercise
# for number in range(1,101):
#     if number%3==0:
#         if number%5==0:
#             print('FizzBuzz')
#         print('Fizz')
#
#     elif number%5==0:
#         print('Buzz')
#
#     else:
#         print(number)

##Py Password Generator
# import random
# alphabet=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','y','z']
# numbers=[0,1,2,3,4,5,6,7,8,9]
# spl_char=['!','#','@','$','%','^','&','*','(',')','_','-','+','=']
# password=""
# alpha_num=int(input(f'How many alphabets you want to include in the password? '))
# numeric_num=int(input(f'How many alphabets you want to include in the password? '))
# symb_num=int(input(f'How many alphabets you want to include in the password? '))
# for char in range(1,alpha_num):
#     password+=random.choice(alphabet)
# for char in range(1,numeric_num):
#     password+=random.choice(numbers)
# for char in range(1,symb_num):
#     password+=random.choice(spl_char)
# print(password)
def func():
    global num
    num=5;
    print(num)
func()
global num
num=8
# print(num)

