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

int main(void) {

	int matrixSum[5][5];
	int matrixSub[5][5];

	int matrixA[5][5] = {
			{5,2,3,0,4},
			{0,0,3,4,0},
			{1,2,3,0,6},
			{0,0,1,2,5},
			{0,3,0,4,7}
		};
	int matrixB[5][5] = {
			{0,2,3,0,4},
			{0,0,3,4,0},
			{1,2,0,0,6},
			{0,0,1,0,5},
			{0,3,0,4,0}
		};

	//add and print the resulting matrix
	printf("\nMatrix sum:\n");
	for(int row = 0; row < 5; row++){

		for(int column = 0; column < 5; column++){

			matrixSum[row][column] = matrixA[row][column] + matrixB[row][column];
			printf("%d ", matrixSum[row][column]);

		}

		printf("\n");

	}

	//subtract and print the resulting matrix
	printf("\nMatrix subtraction:\n");
	for(int row = 0; row < 5; row++){

		for(int column = 0; column < 5; column++){

			matrixSub[row][column] = matrixA[row][column] - matrixB[row][column];
			printf("%d ", matrixSub[row][column]);

		}

		printf("\n");

	}

}


