/*
 ============================================================================
 Name        : array_25_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to perform Scalar matrix multiplication
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int main(void) {

	int rows;
	printf("How many rows for both matrices?");
	scanf("%d", &rows);

	int columns;
	printf("How many columns for both matrices?");
	scanf("%d", &columns);

	int multiplier;
	printf("Inform your multiplier:");
	scanf("%d", &multiplier);

	int matrixA[SIZE][SIZE];
	int matrixB[SIZE][SIZE];

	printf("Input the values of your matrix:");

	for(int currentX = 0; currentX < rows; currentX++){

		for(int currentY = 0; currentY < columns; currentY++){

			scanf("%d", &matrixA[currentX][currentY]);

		}

	}

	for(int currentX = 0; currentX < rows; currentX++){
		printf("[ ");
		for(int currentY = 0; currentY < columns; currentY++){

			matrixB[currentX][currentY] = multiplier * matrixA[currentX][currentY];
			printf("%d ", matrixB[currentX][currentY]);

		}

		printf("]");
		printf("\n");

	}


}
