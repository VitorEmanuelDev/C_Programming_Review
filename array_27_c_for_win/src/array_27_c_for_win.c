/*
 ============================================================================
 Name        : array_27_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to check whether two matrices are equal or not
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int main(void) {

	int matrixA[SIZE][SIZE];
	int rowsA;
	int columnsA;

	printf("How many rows does your first matrix have?");
	scanf("%d", &rowsA);

	printf("How many columns does your first matrix have?");
	scanf("%d", &columnsA);

	int matrixB[SIZE][SIZE];
	int rowsB;
	int columnsB;

	printf("How many rows does your second matrix have?");
	scanf("%d", &rowsB);

	printf("How many columns does your second matrix have?");
	scanf("%d", &columnsB);

	if(columnsA == columnsB && rowsA == rowsB){

		printf("Input the values for the first matrix:");

		for(int currentX = 0; currentX < rowsA; currentX++){

			for(int currentY = 0; currentY < columnsA; currentY++){

				scanf("%d", &matrixA[currentX][currentY]);

			}

		}

		printf("Input the values for the second matrix:");

		for(int currentX = 0; currentX < rowsB; currentX++){

			for(int currentY = 0; currentY < columnsB; currentY++){

				scanf("%d", &matrixB[currentX][currentY]);

			}

		}

		for(int currentX = 0; currentX < rowsA; currentX++){

			for(int currentY = 0; currentY < columnsB; currentY++){

				if(matrixA[currentX][currentY] != matrixB[currentX][currentY]){

					printf("\nThe two matrices are not equal.");
					exit(0);

				}

			}

		}

		printf("\nThe two matrices are equal.");

	}else{

		printf("\nThe two matrices are not equal.");
		exit(0);

	}

}

