/*
 ============================================================================
 Name        : array_39_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to check Sparse matrix
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int main(void) {

	int matrix[SIZE][SIZE];
	int rows;
	int columns;

	printf("How many rows does your matrix have?");
	scanf("%d", &rows);

	printf("How many columns does your matrix have?");
	scanf("%d", &columns);

	printf("Input the values of your matrix:");

	for(int currentX = 0; currentX < rows; currentX++){

		for(int currentY = 0; currentY < columns; currentY++){

			scanf("%d", &matrix[currentX][currentY]);

		}

	}

	int matrixSize = rows * columns;
	int zeroCount = 0;

	for(int currentX = 0; currentX < rows; currentX++){

		for(int currentY = 0; currentY < columns; currentY++){

			if(matrix[currentX][currentY] == 0){

				zeroCount += 1;

			}

		}

	}

	if(zeroCount > matrixSize/2){

		printf("It's a sparse matrix.\n");

	}else {

		printf("It's not a sparse matrix.\n");

	}
	for(int currentX = 0; currentX < rows; currentX++){

		printf("[ ");

		for(int currentY = 0; currentY < columns; currentY++){

			printf("%d ", matrix[currentX][currentY]);

		}

		printf("]");
		printf("\n");

	}

}
