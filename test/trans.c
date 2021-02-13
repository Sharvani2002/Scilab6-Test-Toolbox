/*This c program computes transpose of a nxm matrix*/
#include<stdio.h>
#include <stdlib.h>
#include "trans.h"

int transpose(double* matrix, double* transpose_matrix, int n, int m){

	int i,j;
	for(i = 0; i < n; i++){
		for(j=0; j < m; j++){
			transpose_matrix[j*n+i] = matrix[i*m+j];
		}
	}
 return 0;
}
