#### Versions of some components in my system:

OS: Ubuntu 18.04.5 LTS<br>
Scilab: Scilab 6.1.0<br>
gcc: gcc (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0<br>
bash: GNU bash, version 4.4.20(1)-release (x86_64-pc-linux-gnu)<br>

### Part A:

The test folder is created and contains the following files:<br>
main.c, trans.c, run.sh and trans.h<br>
(further details in the test folder)
<br>

### Part B:
This repository is a test toolbox for Scilab.
The "thirdparty" directory contains compiled library for a "transpose" function written in C. After cloning this directory go to this location, on the scilab console run "exec builder.sce" to build the toolbox and then run "exec loader.sce" to load the toolbox.  Type "help" in the scilab console and browse through the help content of "test_toolbox".
