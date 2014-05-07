#!/bin/sh

#set variables
curdir=`pwd`
sleeptime=600
monlist=./list
log=./mon.log

touch list
touch largeDataset.dat

#set trap
trap "stty echo ; echo 'Interrupted' ; exit 1" 1 2 3 15

#set passs phrase
stty -echo
echo -n "pass phrase for grid: "
read passphrase
echo ""
echo -n "password for kerberos: "
read password
echo ""
stty echo

#certification for grid
function voms(){
  expect -c "
  spawn voms-proxy-init -hours 48 -voms atlas
  expect \"Enter GRID pass phrase:\" ; send \"$passphrase\r\";
  interact;
  "
}

function kin(){
  expect -c "
  spawn kinit;
  expect \"Password for username@CERN.CH:\" ; send \"$password\r\";
  interact;
  "
}

#setup grid, pathena
source /afs/cern.ch/atlas/offline/external/GRID/ddm/DQ2Clients/setup.sh
source /afs/cern.ch/atlas/offline/external/GRID/DA/panda-client/latest/etc/panda/panda_setup.sh

#certification for grid
voms
kin

#sync at first fime
pbook -c "sync()" >> $log 2>&1

#check list (voms must be listed)
touch list
vomsflag=0
while read num;do
  if [ "$num" = "voms" ];then
    vomsflag=1
    break
  fi
done < list
if [ $vomsflag -eq 0 ];then
  echo voms >> list
fi

#start loop
while [ 1 ];do
  num=`head -n1 list`
  sed -e '1d' list > list.tmp
  mv list.tmp list
  echo $num > list.tmp

  if [ "$num" = "" ];then
    echo voms >> list
    continue
  elif [ "$num" = "voms" ];then

    voms > /dev/null
    kin > /dev/null

    #check list (voms must be listed)
    touch list
    vomsflag=0
    while read num;do
      if [ "$num" = "voms" ];then
        vomsflag=1
        break
      fi
    done < list
    if [ $vomsflag -eq 0 ];then
      echo voms >> list
    fi

    echo at `hostname` >> $log
    date >> $log
    sleep $sleeptime
    pbook -c "sync()" >> $log 2>&1
    continue
  else
    #check jobID in list
    pbook -c "show(${num})" > job.tmp 2>>$log
    type=`grep " type : " job.tmp|awk '{print $3}'`
    status=`grep " status : " job.tmp|awk '{print $3}'`

    if [ "$type" != "pathena" -a "$type" != "prun" ];then
      #maybe there was some temporary problem  on pbook
      echo $type >> $log
      echo "$num is not pathena or prun job or failed to update.."|tee -a $log
      echo "$num was added to the list for the safe"|tee -a $log
      echo $num  >> list
      continue
    elif [ ! "$status" = "frozen" ];then
      #still running
      echo jobID = $num running >> $log 2>&1
      echo $num  >> list
    else
      retry=`grep " retrySetID : " job.tmp|awk '{print $3}'`
      outDS=`grep " outDS : " job.tmp|awk '{print $3}'`
      inDS=`grep " inDS : " job.tmp|awk '{print $3}'`
      if [ "$retry" !=  "" ];then
        if [ $retry -ne 0 ];then
          #done but some jobs failed, but already retried
          echo $retry >> list
          echo "$num was already retried -> $retry : $outDS"|tee -a $log
          continue
        fi
      fi
      build=`grep " nJobs : " job.tmp|grep build`
      nJobs=`grep " nJobs : " job.tmp|awk '{print $3}'`
      if [ "$build" != "" ];then
        nJobs=`expr $nJobs + 1`
      fi
      finished=`grep " finished : " job.tmp|awk '{print $3}'`
      failed=`grep " failed : " job.tmp|awk '{print $3}'`
      if [ "$finished" != $nJobs ];then
        #done but some jobs failed->retry
        pbook  -c "retry($num)" > retry.tmp 2>&1
        retry=`grep " Done." retry.tmp|awk '{split($6,tmp,"=")}{print tmp[2]}'`
        if [ "$retry" = "" ];then #maybe failed in build job
          echo $inDS >> datasets.toRetryByHand
        else
          echo $retry >> list
          echo "$num was not completed, then retry -> $retry: $outDS"|tee -a $log
        fi
      else
        #done, no fail jobs, completed
        echo "$num was completed : $outDS"|tee -a $log

        outDSName=`grep " outDS : " job.tmp|awk '{print $3}'`
        touch largeDataset.dat
        isLarge=`grep $outDSName largeDataset.dat`
        if [ "$isLarge" = "" ];then
          #this dataset has other run, then don't freeze till all runs are completed
          #dq2-freeze-dataset $outDSName >> $log
          #echo $outDSName >> waitingFrozenlist2
          echo $outDSName >> donelist
          #echo $outDSName was frozen|tee -a $log
        else
          #echo $outDSName >> waitingFrozenlist
          echo $outDSName >> donelist.large # there are other runs for this dataset, too
          #echo $outDSName should be frozen|tee -a $log
        fi
      fi
    fi
  fi
done
