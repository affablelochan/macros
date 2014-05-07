#!/usr/bin/env python

import os,ROOT

user='subraman'
job_name='D3PD_0816'
dq2='dq2-get '


df=open("F")
for sample in df :
   command_append_dupe=''
   print 'running %s' %(sample)
   
   short_sample_name=ROOT.TString(sample)
   short_sample_name=ROOT.TString(short_sample_name(0, short_sample_name.Index(".physics_JetTauEtmiss")))
   print short_sample_name
   command='%s user.%s.%s.%s/ %s' %(dq2,user, short_sample_name, job_name, command_append_dupe)
   f = open('dsoutput.txt','a')
   print >>f,command
   print command
   f.close()
