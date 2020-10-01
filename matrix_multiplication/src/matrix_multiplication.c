/*
 ============================================================================
 Name        : matrix_multiplication.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : multiply matrices
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int rowsA, columnsA;
	int rowsB, columnsB;
	int rowsC, columnsC;

	printf("What is the number of rows and columns for the first matrix:");
	scanf("%d%d", &rowsA, &columnsA);

	printf("What is the number of rows and columns for the second matrix:");
	scanf("%d%d", &rowsB, &columnsB);

	int matrixA[rowsA][columnsA];
	int matrixB[rowsB][columnsB];

	//not necessary, but it makes the reading easier
	columnsC = rowsA;
	rowsC = columnsB;

	int matrixAxB[rowsC][columnsC];

	if(columnsC != rowsC){

		printf("These two matrices can't be multiplied.");
		exit(0);

	}else{

		printf("Input the values of your first matrix:");

		for(int currentX = 0; currentX < rowsA; currentX++){

			for(int currentY = 0; currentY < rowsB; currentY++){

				scanf("%d", &matrixA[currentX][currentY]);

			}

		}

		printf("Input the values of your second matrix:");

		for(int currentX = 0; currentX < rowsA; currentX++){

			for(int currentY = 0; currentY < rowsB; currentY++){

				scanf("%d", &matrixB[currentX][currentY]);

			}

		}

		printf("MatrixA:\n");

		for(int currentX = 0; currentX < rowsA; currentX++){

			printf("[ ");

			for(int currentY = 0; currentY < columnsA; currentY++){

				printf("%d ", matrixA[currentX][currentY]);

			}
			printf(" ]");
			printf("\n");

		}

		printf("MatrixB:\n");

		for(int currentX = 0; currentX < rowsB; currentX++){

			printf("[ ");

			for(int currentY = 0; currentY < columnsB; currentY++){

				printf("%d ", matrixB[currentX][currentY]);

			}
			printf(" ]");
			printf("\n");

		}

		int sum = 0;

		for(int currentX = 0; currentX < rowsA; currentX++){

			for(int currentY = 0; currentY < rowsB; currentY++){

				for(int currentZ = 0; currentZ < columnsB; currentZ++){

					sum += matrixA[currentX][currentZ] * matrixB[currentZ][currentY];

				}

				matrixAxB[currentX][currentY] = sum;
				sum = 0;

			}

		}


		printf("MatrixA x MatrixB:\n");

		for(int currentX = 0; currentX < rowsC; currentX++){

			printf("[ ");

			for(int currentY = 0; currentY < columnsC; currentY++){

				printf("%d ", matrixAxB[currentX][currentY]);

			}
			printf(" ]");
			printf("\n");

		}

	}


}


