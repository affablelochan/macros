# Fibonacci series
# the sum of two elements gives the third number


a,b = 0,1
lim =input('Please enter end of fibonacci series:')
print "Fibonacci series follows:"
print a
while b < lim:
   print b
   a, b = b, a+b
