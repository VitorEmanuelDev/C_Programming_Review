/*
 ============================================================================
 Name        : square_matrix.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : square matrix
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int matrixB[5][5];
	int matrixA[5][5] = {

			{0,5,6,7,8},
			{4,0,5,6,7},
			{1,4,0,5,6},
			{3,1,4,0,5},
			{9,3,1,4,0}

	};


	for(int row = 0; row < 5; row++){

		for(int column = 0; column < 5; column++){

			matrixB[column][row] = matrixA[row][column];

		}
	}

	printf("Original matrix:\n");
	for(int row = 0; row < 5; row++){

		for(int column = 0; column < 5; column++){

			printf("%d ", matrixA[row][column]);

		}

		printf("\n");
	}

	printf("\nTransposed matrix:\n");
	for(int row = 0; row < 5; row++){

		for(int column = 0; column < 5; column++){

			printf("%d ", matrixB[row][column]);

		}

		printf("\n");
	}

	for(int row = 0; row < 5; row++){

		for(int column = 0; column < 5; column++){

			if(matrixB[row][column] != matrixA[row][column]){

				printf("\nNot symmetric\n");
				exit(0);

			}

		}
	}

	printf("\nSymmetric");

}
