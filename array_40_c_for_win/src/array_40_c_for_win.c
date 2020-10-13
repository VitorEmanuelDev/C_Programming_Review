/*
 ============================================================================
 Name        : array_40_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description :  program to check Symmetric matrix
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int main(void) {

	int matrixOriginal[SIZE][SIZE];
	int rows;
	int columns;

	printf("How many rows does your matrix have?");
	scanf("%d", &rows);

	printf("How many columns does your matrix have?");
	scanf("%d", &columns);

	printf("Input the values of your matrix:");

	for(int currentX = 0; currentX < rows; currentX++){

		for(int currentY = 0; currentY < columns; currentY++){

			scanf("%d", &matrixOriginal[currentX][currentY]);

		}

	}

	int matrixTransposed[SIZE][SIZE];

	for(int currentX = 0; currentX < rows; currentX++){

		for(int currentY = 0; currentY < columns; currentY++){

			matrixTransposed[currentY][currentX] = matrixOriginal[currentX][currentY];

		}

	}

	int flag = 0;

	for(int currentX = 0; currentX < rows; currentX++){

		for(int currentY = 0; currentY < columns; currentY++){

			if(matrixTransposed[currentX][currentY] != matrixOriginal[currentX][currentY]){

				flag = 1;

			}

		}

	}

	if(flag == 1){

		printf("It's not a symmetric matrix.\n");

	}else{

		printf("It's a symmetric matrix.\n");

	}

	for(int currentX = 0; currentX < rows; currentX++){

		printf("[ ");

		for(int currentY = 0; currentY < columns; currentY++){

			printf("%d ", matrixTransposed[currentX][currentY]);

		}

		printf("]");
		printf("\n");

	}

}
