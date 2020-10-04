/*
 ============================================================================
 Name        : array_09_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to insert an element in an array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(void) {

	int array[SIZE];
	int size;

	printf("What's the size of your array?");
	scanf("%d", &size);

	printf("Input %d values into the array:", size);
	for(int current = 0; current < size; current++){

		scanf("%d", &array[current]);

	}

	printf("[ ");
	for(int current = 0; current < size; current++){

		printf("%d ", array[current]);

	}
	printf("]\n");

	int value;
	printf("Which value would you like to add to the array?");
	scanf("%d", &value);

	int position;
	printf("Into which position would you like to place it?");
	scanf("%d", &position);


	for(int current = size; current > position; current--){

		array[current] = array[current - 1];

	}

	array[position] = value;
	size++;

	printf("\n");
	printf("[ ");
	for(int current = 0; current < size; current++){

		printf("%d ", array[current]);

	}
	printf("]");

}

