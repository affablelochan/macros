#!/bin/sh

#setup grid, pathena
source /afs/cern.ch/atlas/offline/external/GRID/ddm/DQ2Clients/setup.sh
source /afs/cern.ch/atlas/offline/external/GRID/DA/panda-client/latest/etc/panda/panda_setup.sh

#set list for monitor
monlist=./list
touch $monlist

touch datasets
while read input output;do #output should be smaller than 150-22 characters
  inputDS=$input
  outputDS=$output
  echo $submit for $inputDS, output=$outputDS

  # athena is necessary just for python/root setup
  prun --noBuild --excludeFile=dataset\*,\*.log,\*.tmp,\*.dat --athenaTag=15.6.11.4 --exec "python slim.py %IN" --outDS=$outputDS --inDS=$inputDS --outputs=qcd.root --nGBPerJob=10 >job.tmp 2>&1

  #change outputDS with slash (container name)
  outputDS=${outputDS}/

  cat job.tmp >> job.log

  #check number of jobs
  JobsetID=`grep JobsetID job.tmp|awk '{print $3}'`
  grep "INFO : use" job.tmp|awk '{print $4}' > nfiles.tmp
  nfiles=0
  while read n;do
    nfiles=`expr $nfiles + $n`
  done < nfiles.tmp
  warning=`grep "WARNING : Only" job.tmp`
  allfiles=`grep "all files are available" job.tmp`
  alreadydone=`grep "All input files were" job.tmp`
  if [ "$alreadydone" != "" ];then
    echo $inputDS, output=$outputDS were already done
    continue
  fi
  if [ "$warning" != "" ];then
    #Need to retry for same dataset
    #pathena can accept only 5000 jobs
    #If you submit same job (same input and output), pathena will use remaining files
    echo $outputDS >> needToRetry.dat
  fi
  if [ ! "$JobsetID" = "" ];then
    if [ "$allfiles" = "" ];then
      echo $outputDS >> notAllFile.dat
    fi
    cat $monlist > monlist.tmp
    echo $JobsetID > $monlist
    cat monlist.tmp >> $monlist
    rm -f monlist.tmp
    pbook -c "sync()"
    pbook -c "show(${JobsetID})" > job.tmp
    cat job.tmp >> job.log
    nJobs=`grep " nJobs : " job.tmp|awk '{print $3}'`
    echo "|  $inputDS  |  $nfiles |  $outputDS  |  $nJobs |" >> used.dat
    echo "|  $JobsetID  |  $inputDS | $nfiles | $outputDS |  $nJobs |" >> mylog.dat
  else
    echo $inputDS ">" $outputDS was not submitted >> notused.dat
  fi
done < datasets
