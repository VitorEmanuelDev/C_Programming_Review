/*
 ============================================================================
 Name        : matrix_determinant_2x2.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : 2x2 matrix determinant
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


    int matrix[2][2];

    printf("Type four elements:\n");
    for(int row = 0; row < 2; row++){

    	for(int column = 0; column < 2; column++){

    		scanf("%d", &matrix[row][column]);

    	}

    }

    printf("Your matrix is:\n");
    for(int row = 0; row < 2; row++){

        	for(int column = 0; column < 2; column++){

            printf("%d ", matrix[row][column]);

        }

        printf("\n");

    }

    int determinant;
    int diagonalA = matrix[0][0]*matrix[1][1];
	int diagonalB = matrix[1][0]*matrix[0][1];

    determinant =  diagonalA - diagonalB;

    printf("\nThe determinant of your matrix is: %d - %d =  %d", diagonalA, diagonalB, determinant);

}
