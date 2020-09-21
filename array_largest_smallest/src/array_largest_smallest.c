/*
 ============================================================================
 Name        : array_largest_smallest.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : find smallest and largest value in an array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int size;

	printf("What's the size of your array?");
	scanf("%d", &size);

	int array[size];

	printf("Type %d values:", size);

	for(int current = 0; current < size; current++){

		scanf("%d", &array[current]);

	}

	int current = 0;
	int smallest = array[current];
	int largest = array[current];

	while(current < size){

		if(smallest > array[current]){

			smallest = array[current];

		}

		if(largest < array[current]){

			largest = array[current];

		}

		current++;

	}

	printf("The smallest number is: %d\n", smallest);
	printf("The largest number is: %d", largest);

}
