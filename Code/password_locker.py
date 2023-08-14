PASSWORDS = {'email' : 'JKL:DF234@#$',
             'twitter' : 'asd;lfjk@#$',
             'youtube' : 'as;ldkjf;sljf234'}

import sys, pyperclip

if len(sys.argv) <2:
    print('Usage: python pw.py [account] - copy account password')
    sys.exit()

account = sys.argv[1]

if account in PASSWORDS:
    pyperclip.copy(PASSWORDS[account])
    print('Password ' + account + ' copied to clipboard.')
else:
    print('There is no account named ' + account)