#!/bin/sh
# This gets the environment
. /etc/bashrc


# The next part sets the current directory to the work
# directory as specified by the batch system
# $WORKDIR is set by sourcing /usr/local/etc/pbssetup.sh
# Some error checking is done.
WORKDIR="NONE"
if [ -r /usr/local/etc/pbssetup.sh ]; then
    . /usr/local/etc/pbssetup.sh
    echo "Found pbssetup.sh"
    echo "Workdir is now:"
    echo $WORKDIR
else
    echo "ERROR: Could not find /usr/local/etc/pbssetup.sh"
    echo "ERROR: Maybe the partition is not mounted correctly"
    echo "ERROR: Exiting..."
    exit 1
fi
if [ $WORKDIR = "NONE" ]; then
    echo "ERROR: WORKDIR is not defined, problem with batch system!"
    echo "ERROR: Exiting..."
    exit 1
fi
if [ $WORKDIR = $HOME ]; then
    echo "ERROR: WORKDIR is defined to be your homedir"
    echo "ERROR: This means there is a problem with setting WORKDIR!"
    echo "ERROR: Exiting..."
    exit 1
fi

# Go to working directory on executing machine
cd $WORKDIR


# ----------------------------------------------
#  Lee: 
#  please ignore everything above this line
#  only the code below matters
# ----------------------------------------------


#
# ----- cd to the directory in which you want to run root
#

cd /home/lochan/lochan17/ana-p17/

setup D0RunII 

#
# ------ run root in batch mode 
#

date > pTmax.log
root -b -q DoAll.C >> pTmax.log
sleep 2
date >> pTmax.log
