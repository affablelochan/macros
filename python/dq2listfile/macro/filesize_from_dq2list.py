#!/usr/bin/env python
import os
import sys, string, commands
import user
from os import listdir
 
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
                

df=open("data12_NTUP_SMQCD_141012_nov26.txt")
f = open('dsoutput1.txt','a')
for inputFile in df:                        
   inputs=inputFile.split('\n')[0]
   command="dq2-list-files  %s  | grep \"size\" >>sizefile" %(inputs)      
   print >>f,command

f.close()
