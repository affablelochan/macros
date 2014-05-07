#!/usr/bin/env python
# first creates matrix then finds smallest to biggest entried for dr matching. 

import sys, random, time
from itertools import count, izip

print "Creating a 4 by 5 matrix"
rows = 4
cols = 5


rowlist =[]
for i in range(rows):
	#print i,
	random.seed(i+time.time())
        temp =[]
	for j in range(cols):
		ele=-(i+j+3*j-10*i)
		print ele,
                temp.append(ele)
        rowlist.append(temp)        
	print ;



# Now dr part as we have a dummy matrix

print "Finding the minimum value in entire matrix...."

from itertools import count, izip 
exclude=[]

final=[]


for j in range(rows):
    minall = 1000000
    indexoffline = 1000000
    indexonline = 100000
    man=[]
    for i in range(rows):
        if i not in exclude:
            indexon = i
            mini,offlineind = min(izip(rowlist[i], count()))
            if mini < minall:
                minall = mini
                indexoffline = offlineind
                indexonline = indexon
    #print "minimum %+5.2f indexonline/row= %i indexoffline/col= %i"%(minall,indexonline,indexoffline)
    exclude.append(indexonline)
    man.append(indexonline)
    man.append(indexoffline)
    man.append(minall)
    final.append(man)
    for kk in range(cols):
        if kk == indexoffline:
            for kj in range(rows):
                rowlist[kj][kk] = 500
    #print "new matrix"
    #print rowlist        


print "........................................"
print "The row and column of min value is considered only once..."
print "........................................"
print "Read matrix below as [row,column,value]"
print final 
