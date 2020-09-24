/*
 ============================================================================
 Name        : trace_normal_square_matrix.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : trace and normal from a square matrix
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	int matrix[5][5] = {
			{5,2,3,0,4},
			{0,0,3,4,0},
			{1,2,3,0,6},
			{0,0,1,2,5},
			{0,3,0,4,7}
		};

	int normal = 0;
	int trace = 0;

	for(int row = 0; row < 5; row++){

		for(int column = 0; column < 5; column++){

			if(row == column){

				trace += matrix[row][column];

			}

			//normal += pow(matrix[row][column], 2);
			normal += matrix[row][column] * matrix[row][column];

		}
	}

	printf("Normal = %d\nTrace = %d", normal, trace);

}
