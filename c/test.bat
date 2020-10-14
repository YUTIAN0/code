setlocal ENABLEDELAYEDEXPANSION
set JH_HOSTS=node01 10 node02 10 node06 10 node04 2
for /F %%i in ('str.exe  "%JH_HOSTS%"  node') do ( set c=%%i) 
echo c=%c%
echo %c%