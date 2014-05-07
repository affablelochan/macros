#!/usr/bin/env python
#wonderful macro, 300 folder names given as input "allfolder"
#each files inside folder given new name with run number appended to them. 

import os
import sys, string, commands
import user
from os import listdir
 

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

                                    
