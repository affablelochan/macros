import re

while True:
    strPassword = raw_input("Please enter your password: ")
    length = len(strPassword)
    if length < 6 or length > 12:
        print ('It is not the correct length')
    else:
        break
print ("Password OK")

upper = 0
lower = 0
number = 0

print 'The number of upper case in password '
print len(re.findall(r'[A-Z]', strPassword))

print 'number of lower case = '
print len(re.findall(r'[a-z]', strPassword))

print 'number of numbers'
print len(re.findall(r'[0-9]', strPassword))

