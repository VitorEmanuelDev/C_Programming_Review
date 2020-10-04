/*
 ============================================================================
 Name        : array_08_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to copy all elements from an array to another array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(void) {

	int array1[SIZE];
	int array2[SIZE];
	int size;

	printf("What's the size of your array?");
	scanf("%d", &size);

	printf("Input %d values into the array:", size);
	for(int current = 0; current < size; current++){

		scanf("%d", &array1[current]);
		array2[current] = array1[current];

	}

	printf("Array1:\n");
	printf("[ ");
	for(int current = 0; current < size; current++){

		printf("%d ", array1[current]);

	}
	printf("]\n");

	printf("\nArray2:\n");
	printf("[ ");
	for(int current = 0; current < size; current++){

		printf("%d ", array2[current]);

	}
	printf("]");

}
