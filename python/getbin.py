
binwidth = 0.0174
start = 0.11
end = 4.46
nbins =250 

for i in range (nbins): 
   lower = start+i*binwidth
   upper = lower+binwidth
   lowen = 10**lower
   upen = 10**upper 
   #print "bin lower: %+5.2f, upper: %+5.2f"%(lower,upper)
   print "Bin %i ,[Gev] lower: %+5.2f, upper: %+5.2f"%(i,lowen,upen)
   

