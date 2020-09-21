/*
 ============================================================================
 Name        : reverse_array.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : reverse an array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void) {

	int firstArray[SIZE] = {0,1,2,3,4,5,6,7,8,9};
	int secondArray[SIZE];

	printf("Original array:\n");
	printf("[");
	for(int current1st = 0, current2nd = 9; current1st < SIZE; current1st++, current2nd--){

		printf("%d ", firstArray[current1st]);
		secondArray[current2nd] = firstArray[current1st];

	}
	printf("]");

	printf("\n\nReversed array:\n");
	printf("[");
	for(int current = 0; current < SIZE; current++){

		firstArray[current] = secondArray[current];
		printf("%d ", firstArray[current]);

	}
	printf("]");

}
