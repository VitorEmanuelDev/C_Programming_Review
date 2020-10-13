/*
 ============================================================================
 Name        : array_30_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to find sum of each row and column of a matrix
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

	int rowSum[SIZE];
	int columnSum[SIZE];

	int sumRow = 0;
	int sumColumn = 0;

	for(int currentX = 0; currentX < rows; currentX++){

		sumColumn = 0;
		sumRow = 0;

		for(int currentY = 0; currentY < columns; currentY++){

			sumRow += matrix[currentX][currentY];
			sumColumn += matrix[currentY][currentX];

		}

		rowSum[currentX] = sumRow;
		columnSum[currentX] = sumColumn;

	}

	printf("Sum of each row:\n");
	for(int current = 0; current < rows; current++)
		printf("%d ",rowSum[current]);

	printf("\nSum of each column:\n");
	for(int current = 0; current < columns; current++)
		printf("%d ", columnSum[current]);

}
