/*
 ============================================================================
 Name        : array_34_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to find sum of upper triangular matrix
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int main(void) {

	int matrix[SIZE][SIZE];/* =   {{7,8,9},
								  {4,5,6},
								  {1,2,3}};*/
	int rows;// = 3;
	int columns;// = 3;

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

	int flag = 0;
	int sum = 0;

	for(int currentX = 0; currentX < rows; currentX++){

		for(int currentY = 0; currentY < columns; currentY++){

			if(currentX > currentY && matrix[currentX][currentY] != 0){

				flag = 1;

			}

			if(currentX <= currentY && matrix[currentX][currentY] != 0){

				sum += matrix[currentX][currentY];

			}

		}

	}

	if(flag == 0){

		printf("Upper triangle sum => %d.\n", sum);

	}else {

		printf("This matrix doesn't have an upper triangle.\n");

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
