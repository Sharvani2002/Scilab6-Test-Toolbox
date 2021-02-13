#include <stdio.h>
#include <stdlib.h>
#include "trans.h"
#include "trans.c"
int main(void)
{	int m,n;
	//Defining the input matrix (1x3)
	m=n=3;
	double *matrix, *transpose_matrix;
	matrix = malloc(n*m * sizeof(*matrix));
	transpose_matrix = malloc(m*n * sizeof(*transpose_matrix));
	// matrix = {1,2,3};
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			matrix[i*n+j] = j;
		}
	}
	//Defining the output matrix (3x1)
	//The input_matrix has dimension nxm
	//Calling the trans function
	transpose(matrix, transpose_matrix, n, m);
	//Printing the input_matrix
	printf("\nInput matrix: \n");
	for(int i= 0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%f ", matrix[n*i + j]);
		}printf("\n");
	}
	//Printing the output matrix 
	//which is the transpose of input matrix
	printf("\n\nTranspose of input matrix: \n");
	for(int i= 0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%f ", transpose_matrix[m*i + j]);
		}printf("\n");
	}

  return 0;
}
