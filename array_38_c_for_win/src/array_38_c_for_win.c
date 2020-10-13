/*
 ============================================================================
 Name        : array_38_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to check Identity matrix
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

	int flag = 0;

	for(int currentX = 0; currentX < rows; currentX++){

		for(int currentY = 0; currentY < columns; currentY++){

			if(currentX == currentY && matrix[currentX][currentY] != 1){

				flag = 1;

			}

			if(currentX != currentY && matrix[currentX][currentY] != 0){

				flag = 1;

			}

		}

	}

	if(flag == 0){

		printf("It's an identity matrix.");

	}else {

		printf("It's not an identity matrix.");

	}


}
