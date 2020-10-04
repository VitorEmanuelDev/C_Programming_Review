/*
 ============================================================================
 Name        : array_07_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to count total number of negative elements in an array.
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

	int negative = 0;

	for(int current = 0; current < size; current++){

		if(array[current] < 0){

			negative++;

		}

	}

	printf("There are %d negative numbers.", negative);

}
