/*
 ============================================================================
 Name        : array_36_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to find transpose of a matrix
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int main(void) {

	int matrixOriginal[SIZE][SIZE];/* =   {{7,8,9},
                   						  {4,5,6},
										  {1,2,3}};*/
	int rowsOriginal;// = 3;
	int columnsOriginal;// = 3;

	printf("How many rows does your matrix have?");
	scanf("%d", &rowsOriginal);

	printf("How many columns does your matrix have?");
	scanf("%d", &columnsOriginal);



	printf("Input the values of your matrix:");

	for(int currentX = 0; currentX < rowsOriginal; currentX++){

		for(int currentY = 0; currentY < columnsOriginal; currentY++){

			scanf("%d", &matrixOriginal[currentX][currentY]);

		}

	}

	int columnsTransposed = rowsOriginal;
	int rowsTransposed = columnsOriginal;
	int matrixTransposed[SIZE][SIZE];

	for(int currentX = 0; currentX < rowsOriginal; currentX++){

		for(int currentY = 0; currentY < columnsOriginal; currentY++){

			matrixTransposed[currentY][currentX] = matrixOriginal[currentX][currentY];

		}

	}

	printf("\nOriginal matrix:\n");

	for(int currentX = 0; currentX < rowsOriginal; currentX++){

		printf("[ ");

		for(int currentY = 0; currentY < columnsOriginal; currentY++){

			printf("%d ", matrixOriginal[currentX][currentY]);

		}

		printf("]");
		printf("\n");

	}

	printf("\nTransposed matrix:\n");

	for(int currentX = 0; currentX < rowsTransposed; currentX++){

		printf("[ ");

		for(int currentY = 0; currentY < columnsTransposed; currentY++){

			printf("%d ", matrixTransposed[currentX][currentY]);

		}

		printf("]");
		printf("\n");

	}

}
