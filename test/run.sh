#!/bin/bash

#create an executable and name it as "execute"
gcc main.c trans.c -o execute
#execute the compiled code
./execute
#remove the executable
rm execute