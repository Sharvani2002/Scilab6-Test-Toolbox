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
			transpose_matrix[j*n+i] = matrix[i*m+j];
		}
	}
 return 0;
}
