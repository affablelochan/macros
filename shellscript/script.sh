clear
filen=''

initialpart='fChain.Add("/net/work/rsu004/dataset/'


for i in $(cat rajivalochan)
do  
    filen="$filen""$initialpart""${i}"'");'
done
echo "$filen" >> lochan1



