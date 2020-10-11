/*
 ============================================================================
 Name        : array_26_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to multiply two matrices
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int main(void) {

	int matrixA[SIZE][SIZE];// =  {{0,3,5},
							 //	   {5,5,2}};
	int rowsA;// = 2;
	int columnsA;// = 3;

	printf("How many rows does your first matrix have?");
	scanf("%d", &rowsA);

	printf("How many columns does your first matrix have?");
	scanf("%d", &columnsA);

	int matrixB[SIZE][SIZE];// =  {{3,4},
			    				//{3,-2},
								//{4,-2}};
	int rowsB;// = 3;
	int columnsB;//; = 2;

	printf("How many rows does your second matrix have?");
	scanf("%d", &rowsB);

	printf("How many columns does your second matrix have?");
	scanf("%d", &columnsB);

	int matrixC[SIZE][SIZE];

	int sizeMatrixC = rowsA;

	if(columnsA == rowsB){

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

		int sum = 0;

		for(int currentX = 0; currentX < rowsA; currentX++){

			for(int currentY = 0; currentY < columnsB; currentY++){

				for(int currentZ = 0; currentZ < rowsB; currentZ++){

					sum += matrixA[currentX][currentZ] * matrixB[currentZ][currentY];

				}

				matrixC[currentX][currentY] = sum;
				sum = 0;

			}

		}

	}else{

		printf("It's impossible to multiply the two matrices.");
		exit(0);

	}


	for(int currentX = 0; currentX < sizeMatrixC; currentX++){

		printf("[ ");

		for(int currentY = 0; currentY < sizeMatrixC; currentY++){

			printf("%d ", matrixC[currentX][currentY]);

		}

		printf("]");
		printf("\n");

	}

}

