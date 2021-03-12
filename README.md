## Scilab Toolbox to compute the transpose of a given nxm matrix
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

#### About this repository:
- This repository is a test toolbox for Scilab.
- The "thirdparty" directory contains compiled library for a "transpose" function written in C.
- sci_gateway contains function, written in C++, that wraps the native function(transpose) so that it can be called from Scilab as a primitive
- Builder files (Scilab script) used to build the module i.e. to create a binary version which Scilab can load from a source version.
- Loader files (Scilab script) load a toolbox component (or the whole toolbox) in Scilab.
- "help" folder contains XML help files
- "test" folder contains the files for Part A
- The toolbox has been tested on linux sytsem(Ubuntu 18.04.5 LTS)

#### Instructions for testing/executing:
- Clone this repository, "Scilab6-Test-Toolbox" (using `git clone <link>`)
- To get thirdparty folder:
  - The "thirdparty" folder wont get downloaded as it is ignored by git (present in .gitignore). If it is present in the cloned repository(i.e. "Scilab6-Test-Toolbox"), "delete" it (as the .so files could not be compatible). 
  - Go to this <a href="https://drive.google.com/drive/folders/1cPSwouT3ZEtdJgaLvqsJffAO5nwxt9m1?usp=sharing" >link</a> and download the "external-library-Sharvani2002" folder.
  - Go to the location of this folder on the terminal and run the commands `chmod +x *` (to give permissions) and  `./run.sh` to create and copy the "libtrans.so" and "trans.h" files to the "thirdparty" folder.
  - Now, copy the "thirdparty" folder and paste it in the cloned repository(i.e. "Scilab6-Test-Toolbox")
- Open scilab and go to the location of the cloned folder
- To load the toolbox:
  - Run `exec loader.sce` to load the toolbox. It should load it without any errors.
- If the above step gives any error for some reason, build and exceute the toolbox(donot follow this step if above step is done successfully):
  - As this cloned repository was already loaded, run these commands to unload the toolbox, unlink any linked files, clean the directory (as scilab will not allow building a toolbox that is already loaded in the workspace):
  ```
  exec unloader.sce
  exec cleaner.sce
  ulink
  clear
  ```
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
  
  
  
#### Assignment/exercise:
-Repeated the screening task on a Windows OS
Note: Completed draft, need to check about the gcc version etc properly.
