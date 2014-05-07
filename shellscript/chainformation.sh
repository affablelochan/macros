#script to collect all the filenames in the ESD folder of a run 
#!/bin/bash

clear
filen=''
ls /work/lochan/release15/periodD2/periodD >d

initialpart='chain->Add("/work/lochan/release15/periodD2/periodD'
final='/*.root");'

for i in $(cat d)
do
   
    
    filen="$initialpart""${i}""$final"
    echo "$filen" >>lochan

done





