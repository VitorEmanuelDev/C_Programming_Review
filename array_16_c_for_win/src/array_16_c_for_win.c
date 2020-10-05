/*
 ============================================================================
 Name        : array_16_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to find reverse of an array.
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(void) {

	int array[SIZE];
	int array2[SIZE];
	int size;

	printf("What's the size of your array?");
	scanf("%d", &size);

	printf("Input %d values into the array:", size);
	for(int current = 0; current < size; current++){

		scanf("%d", &array[current]);

	}

	int reverse = size;

	for(int current = 0; reverse > 0; current++){

		array2[reverse - 1] = array[current];
		reverse--;

	}

	for(int current = 0; current < size; current++)
		array[current] = array2[current];

	printf("[ ");
	for(int current = 0; current < size; current++){

		printf("%d ", array[current]);

	}
	printf("]");

}

