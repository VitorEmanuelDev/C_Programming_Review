/*
 ============================================================================
 Name        : array_23_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to add two matrices
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int main(void) {

	int rows;
	int columns;

	printf("How many rows for both matrices?");
	scanf("%d", &rows);

	printf("How many columns for both matrices?");
	scanf("%d", &columns);

	int matrixA[SIZE][SIZE];
	int matrixB[SIZE][SIZE];
	int matrixC[SIZE][SIZE];

	printf("Input the values for the first matrix:");

	for(int currentX = 0; currentX < rows; currentX++){

		for(int currentY = 0; currentY < columns; currentY++){

			scanf("%d", &matrixA[currentX][currentY]);

		}

	}

	printf("Input the values for the second matrix:");

	for(int currentX = 0; currentX < rows; currentX++){

		for(int currentY = 0; currentY < columns; currentY++){

			scanf("%d", &matrixB[currentX][currentY]);

		}

	}

	for(int currentX = 0; currentX < rows; currentX++){
		printf("[ ");
		for(int currentY = 0; currentY < columns; currentY++){

			matrixC[currentX][currentY] = matrixA[currentX][currentY] + matrixB[currentX][currentY];
			printf("%d ", matrixC[currentX][currentY]);

		}

		printf("]");
		printf("\n");

	}




}
