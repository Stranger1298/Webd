import random
secret_num=random.seed(1234)
secret_num=random.randint(1,20)
guess_num=int(input('Take a guess : '))
guess=0
# for i in range (1,7):
if guess_num<secret_num:
    print('Your guess is too low')
    guess+=1
elif guess_num>secret_num:
    print('Your guess is too high')
    guess+=1
elif guess_num==secret_num:
    guess+=1
    print(f'Good job you guessed the right num {guess}')
else:
    print('Invalid guess')