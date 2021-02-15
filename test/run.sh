#!/bin/bash

#compile the two files separately and link them 
#all together to one executable file "execute"
gcc main.c trans.c -o execute
#run the executable
./execute
#remove the executable
rm execute