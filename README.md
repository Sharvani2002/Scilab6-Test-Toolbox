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

#### Contents of this repository:
This repository is a test toolbox for Scilab.
The "thirdparty" directory contains compiled library for a "transpose" function written in C.

#### Instructions for excecuting:
- After cloning this directory, open scilab and go to the location of the cloned folder
- Run `exec builder.sce` to build the toolbox
- Run `exec loader.sce` to load the toolbox
- Type `help` in the scilab console and browse through the help content of "test_toolbox" to get more details about the "transpose" function.
- Run the function `y = transpose(x)` where x is supposed to be 1 or 2 dimensional matrix (although it will also accept a scalar and few other types)
- Example for using the transpose function:
```
y = transpose([1,2,3;4,5,6]);
```


#### Sample outputs:
<br>
<a href="https://drive.google.com/uc?export=view&id=10WjMv6I2H5OGSIVNX4t9UdmhtkW_KQUE"><img src="https://drive.google.com/uc?export=view&id=10WjMv6I2H5OGSIVNX4t9UdmhtkW_KQUE" width="500" height="auto" title="Sample_output" />
