#script to form dq2-get -f bla bla bla
#!/bin/bash

clear
final=''

echo "Enter the run number: "
read run 

echo "enter data format: "
read datum

string="user.subraman.""$run"".RAW_skim_from_TAG_*""$datum""/"
echo $string
# dq2-ls "user.subraman.189184.RAW_skim_from_TAG_*1062011/" 
dq2-ls "$string" >list 
cat list


for i in $(cat list)
do
   dq2-list-files $i | grep '.dat' >log2
   python space.py log2 
   python extract.py
   
   cat prefinal | awk '{ print $1  }' >>file
    
    temp=""
    for j in $(cat file)
    do
      temp="$temp""$j"","
    done
    temp="dq2-get -f ""$temp"" ""$i"
   
   echo "$temp" >>final

   rm file
   rm log2
   rm prefinal
done

cat final
# rm list
