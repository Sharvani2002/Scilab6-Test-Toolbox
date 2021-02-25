/*This c program computes transpose of a nxm matrix*/
//The files are written by:
//Sharvani Laxmi Somayaji

#include <stdio.h>
#include <stdlib.h>
#include "trans.h"

//"transpose_matrix" is the output matrix,
//which is the transpose of theinput matrix, "matrix"
int transpose(double* matrix, double* transpose_matrix, int n, int m){

	int i,j;
	for(i = 0; i < n; i++){
		for(j=0; j < m; j++){
			//There are n rows, m columns in matrix
			//transpose_matrix[j][i] = matrix[i][j]
			//Also, matrix[i][j] in 2D= matrix[i*m+j] in 1D
			//And transpose_matrix[j][i] in 2D= transpose_matrix[j*n+i] in 1D
			
			//Note:
			//This is what I tried initially in the part A which worked
			// fine just as a C program:
			// transpose_matrix[j*n+i] = matrix[i*m+j];

			//But mostly sciab stored the 2d arrays as 1d using
			//the "scilab_getDoubleArray" in sci_transpose.cpp in scilab gateway folder
			//as column wise order and not row wise order, after trying,
			//this works fine in scilab:
			transpose_matrix[i*m+j] = matrix[j*n+i];

		}
	}
 return 0;
}
