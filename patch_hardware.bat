@echo off
::idea by methmvm, batch by gmzorz
echo 1: BACKUP
echo 2: REPLACE
choice /c 12 /m "Select: "
if errorlevel 2 goto rplace
if errorlevel 1 goto bckup
:bckup
copy hardware_mp.chp hardware_gmz.chp 
attrib hardware_gmz.chp +h
exit
:rplace
if exist hardware_gmz.chp del /f hardware_mp.chp
attrib hardware_gmz.chp -h
ren hardware_gmz.chp hardware_mp.chp