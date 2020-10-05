/*
 ============================================================================
 Name        : array_15_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to merge two array to third array
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(void) {

	int array1[SIZE];
	int array2[SIZE];
	int array3[SIZE];
	int size1;
	int size2;

	int count = 1;
	printf("What's the size of your %dst array?", count);
	scanf("%d", &size1);

	printf("Input %d values into the array:", size1);
	for(int current = 0; current < size1; current++){

		scanf("%d", &array1[current]);

	}

	count = 2;
	printf("What's the size of your %dnd array?", count);
	scanf("%d", &size2);

	printf("Input %d values into the array:", size2);
	for(int current = 0; current < size2; current++){

		scanf("%d", &array2[current]);

	}

	int size3 = size1 + size2;

	for(int initializer = 0; initializer < size1; initializer++){

		array3[initializer] = array1[initializer];

	}

	int current = 0;

	for(int initializer = size1; initializer < size3; initializer++){

		array3[initializer] = array2[current];
		current++;
	}

	printf("[ ");
	for(int current = 0; current < size3; current++){

		printf("%d ", array3[current]);

	}
	printf("]");

}

