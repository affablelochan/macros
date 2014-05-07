\#script to collect all the filenames in the ESD folder of a run 
#!/bin/bash

clear
filen=''

initialpart='chain->Add("/tmp/subraman/'


for i in $(cat d)
do
   
    
    filen="$initialpart""${i}"'/*.root*");'
    echo "$filen" >>lochan

done
#echo "$filen" >lochan




