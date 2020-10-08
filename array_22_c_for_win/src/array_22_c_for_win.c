/*
 ============================================================================
 Name        : array_22_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to right rotate an array
 Loop		 : https://www.youtube.com/watch?v=5aeLXxqAxiw
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

	int rotation;
	printf("By how many numbers do you want to rotate your array?");
	scanf("%d", &rotation);

	printf("Input %d values into the array:", size);

	for(int current = 0; current < size; current++){

		scanf("%d", &array[current]);

	}

	int rightRotation = size - rotation;
	int current = 0;

	while(current < rightRotation){

		array[current + size] = array[current];
		current++;

	}

	int restart = 0;
	for(int current = rightRotation; current < size + rightRotation; current++){

		array[restart] = array[current];
		restart++;

	}

	for(int current = size; current < size + rightRotation; current++)
		array[current] = '\0';

	printf("[ ");
	for(int current = 0; current < size; current++){

		printf("%d ",array[current]);

	}
	printf("]");

}
