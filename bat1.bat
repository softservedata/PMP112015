@echo off
echo My Program

cd %1
if exist %2 goto task
if not exist %2 goto error

:error
echo error
goto toexit

:task
ren %2 %3
echo some code
goto toexit

:toexit
pause
rem Exit
