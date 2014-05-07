#script to collect all the filenames in the ESD folder of a run 
#!/bin/bash
ls >> rajiv
gedit replace root.1 to root


clear
filen=''

initialpart='.1'


for i in $(cat rajiv)
do
   
    
    filen='mv '"${i}""$initialpart"' '"${i}"
    echo "$filen" >>lochan

done
#echo "$filen" >lochan




explanation here
=======================================================================
1) ls >> rajiv; all root file name will be saved into rajiv
2) gedit:  replace root.1 to root
3) run the following macro

sh filename.sh
=============================================================
#script to collect all the filenames in the ESD folder of a run
#!/bin/bash

clear
filen=''

initialpart='.1'


for i in $(cat rajiv)
do
  
   
    filen='mv '"${i}""$initialpart"' '"${i}"
    echo "$filen" >>lochan

done
======================================================================

'lochan' file will have all the move command. 
