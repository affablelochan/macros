#script to check events
#!/bin/bash

clear
final=''

echo "Enter the run number: "
read run 


echo "enter data format: "
read datum

string="user.subraman.""$run"".RAW_skim_from_TAG_*""$datum""/"


echo $string
dq2-ls "$string" >list 
cat list


for i in $(cat list)
do
   dq2-list-files $i | grep '.dat' >log2
   python space.py log2 
   python extract.py
   
   echo "$i" | awk '{gsub(/\/$/,"*/")}{ print "cd " $1 }' >>final
   
   cat prefinal | awk '{ print "AtlListBSEvents.exe -l "  $1 " >>logfile "   }' >>final
        
   echo " " >>final
      
   rm log2
   rm prefinal
done

cat final
rm list


