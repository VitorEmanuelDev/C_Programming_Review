/*
 ============================================================================
 Name        : array_01_c_for_winc
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to read and print elements of array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(void) {

	int array[SIZE];
	int size;

	printf("How many elements does your array have?");
	scanf("%d", &size);

	printf("Input the values of your array:");
	for(int current = 0; current < size; current++){

		scanf("%d", &array[current]);

	}

	printf("[ ");
	for(int current = 0; current < size; current++){

		printf("%d ", array[current]);

	}
	printf("]");
}

