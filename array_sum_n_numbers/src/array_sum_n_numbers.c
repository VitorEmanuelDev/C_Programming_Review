/*
 ============================================================================
 Name        : array_sum_n_numbers.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : sum of n numbers using arrays
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

	int sum = 0;

	for(int current = 0; current < size; current++){

		sum += array[current];

	}

	printf("Sum: %d", sum);

}
