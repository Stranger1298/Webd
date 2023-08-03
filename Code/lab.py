# name=input("Enter the name: ")
# usn=input("Enter the usn: ")
# marks1=int(input("Enter the marks of 1st IA: "))
# marks2=int(input("Enter the marks of 2nd IA: "))
# marks3=int(input("Enter the marks of 3rd IA: "))
# total=marks1+marks2+marks3
# average=total/3
# percentage=round((total/300)*100)
# print("Name is: ",name)
# print("usn is: ",usn)
# print("Average is: ",average)
# print("Percentage is: ",percentage)

# from datetime import date
# BirthYear=int(input("Enter the DOB year: "))
# CurrYear=date.today().year
# age=CurrYear-BirthYear
# if age>=60:
#     print("Age is: ",age)
#     print("You are a senior citizen")
# else:
#     print("Age is: ",age)
#     print("You are not a senior citizen")

# first_num=0
# second_num=1
# i=0
# num=int(input("Enter the digit till where you want fibonacci series: "))
# if num>=0:
#     while i<num:
#         print(first_num)
#         temp=first_num+second_num
#         first_num=second_num
#         second_num=temp
#         i+=1

def fact(num):
    if num==0:
        return 1
    else:
        return num*fact(num-1)
n=int(input('Enter the value of N: '))
r=int(input('Enter the value of R (R must be positive and less than N): '))
nCr=int(fact(n)/(fact(r)*fact(n-r)))
print(n,'C',r,"=",nCr)