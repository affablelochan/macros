#script to collect all the filenames in the ESD folder of a run 
#!/bin/bash

clear
filen=''

new=' user.subraman.1'
old='mv user.subraman'

for i in $(cat list)
do
  
   
    filen="$old""${i}""$new""${i}" 
    echo "$filen" >>lochan

done





