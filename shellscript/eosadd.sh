
#script to add pput at the begenning of all the statement in file 'lochan'
#!/bin/bash

clear
filen=''


for i in $(cat remain)
do

  

       filen="xrdcp ""${i}"' root://eosatlas//eos/atlas/user/s/subraman/data12_LCJES_new_D4pd/'
       echo "echo \"${filen}\" ">>inputlist1
       echo "${filen}" >>inputlist1    


done

