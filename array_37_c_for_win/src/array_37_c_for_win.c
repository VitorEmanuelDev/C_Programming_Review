/*
 ============================================================================
 Name        : array_37_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description :  program to find determinant of a 2x2 matrix
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int main(void) {

	int matrix[SIZE][SIZE];/* =   {{7,8,9},
								  {4,5,6},
								  {1,2,3}};*/
	int rows = 2;// = 3;
	int columns = 2;// = 3;

	printf("Input the values of your matrix:");

	for(int currentX = 0; currentX < rows; currentX++){

		for(int currentY = 0; currentY < columns; currentY++){

			scanf("%d", &matrix[currentX][currentY]);

		}

	}

	int mainDiagonal = 1;
	int minorDiagonal = 1;

	for(int currentX = 0; currentX < rows; currentX++){

		for(int currentY = 0; currentY < columns; currentY++){

			if(currentX == currentY){

				mainDiagonal *= matrix[currentX][currentY];

			}else{

				minorDiagonal *= matrix[currentX][currentY];

			}
		}

	}

	int determinant = mainDiagonal - minorDiagonal;

	printf("Matrix determinant => %d", determinant);

}
