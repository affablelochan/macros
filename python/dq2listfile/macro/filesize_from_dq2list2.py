#!/usr/bin/env python
import os
import sys, string, commands
import user
from os import listdir
from decimal import Decimal 

"""
df=open("allfolder")
f = open('dsoutput1.txt','a')
for inputFile in df:
   splitstring= inputFile.split('d4pd_')[1]
   runnum=splitstring.split('.')[0]
   input=inputFile.split('\n')[0]
   files = os.listdir(input)
   for x in files:
      fnew=x.split('trig-daq')[1]
      newname=input+"/"+"group."+runnum+fnew
      oldname=input+"/"+x
      command="mv %s  %s" %(oldname,newname)
      print >>f,command

f.close()
"""

def convert_bytes(bytes):
    bytes = float(bytes)
    if bytes >= 1099511627776:
        terabytes = bytes / 1099511627776
        size = '%.2fT' % terabytes
    elif bytes >= 1073741824:
        gigabytes = bytes / 1073741824
        size = '%.2fG' % gigabytes
    elif bytes >= 1048576:
        megabytes = bytes / 1048576
        size = '%.2fM' % megabytes
    elif bytes >= 1024:
        kilobytes = bytes / 1024
        size = '%.2fK' % kilobytes
    else:
        size = '%.2fb' % bytes
    return size
                
totalsize=0
df=open("listbyte")
for inputFile in df:                        
   inputs=inputFile.split('\n')[0]
   print inputs
   totalsize=totalsize+Decimal(inputs)
print "grand total"
print totalsize

print "grand total GB"
print convert_bytes(totalsize)


