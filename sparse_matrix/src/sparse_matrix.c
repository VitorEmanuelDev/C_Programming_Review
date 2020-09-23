/*
 ============================================================================
 Name        : brazilian_number.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : sparse matrix
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int matrix[5][5] = {
		{0,2,3,0,4},
		{0,0,3,4,0},
		{1,2,0,0,6},
		{0,0,1,0,5},
		{0,3,0,4,0}
	};

	int zeros = 0;
	int others = 0;

	for(int row = 0; row < 5; row++){

		for(int column = 0; column < 5; column++){

			if(matrix[row][column] == 0){

				zeros++;

			}else{

				others++;

			}

		}

	}

	if(zeros > others){

		printf("It's a sparse matrix.");

	}else{

		printf("It's not sparse matrix.");

	}

}
