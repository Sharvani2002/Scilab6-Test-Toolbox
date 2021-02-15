#include <stdio.h>
#include <stdlib.h>
#include "trans.h"
#include "trans.c"
int main(void)
{	
	int m,n;
	printf("Enter the number of rows of the matrix: ");
	scanf("%d", &n);
	printf("Enter the number of columns of the matrix: ");
	scanf("%d", &m);
	double element;
	double matrix[n*m], transpose_matrix[m*n];

	for(int i=0; i<n; i++){
		printf("\nEnter the values of row %d:\n", i+1);
		for(int j=0; j<m; j++){
			scanf("%lf", &element);
			matrix[i*m+j] = element;
		}
	}
	//The input_matrix has dimension nxm
	//Calling the trans function to obtain it's transpose
	transpose(matrix, transpose_matrix, n, m);
	//Printing the input_matrix
	printf("\nInput matrix you entered is: \n");
	for(int i= 0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%lf ", matrix[m*i + j]);
		}printf("\n");
	}
	//Printing the output matrix 
	//which is the transpose of input matrix
	printf("\n\nTranspose of the input matrix is: \n");
	for(int i= 0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%lf ", transpose_matrix[i*n + j]);
		}printf("\n");
	}

  return 0;
}
