#!/bin/bash

# 
# Clean and rebuild sick_scan_xd on Linux
# 

printf "\033c"
if [ -d ../../build_linux ] ; then rm -rf ../../build_linux ; fi
if [ -d ../../../msgpack11/build ] ; then rm -rf ../../../msgpack11/build ; fi
if [ -d ../../../libsick_ldmrs/build ] ; then rm -rf ../../../libsick_ldmrs/build ; fi

./make_linux.bash

