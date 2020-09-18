/*
 ============================================================================
 Name        : find_largest_number.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : Find the largest number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int limit;

	printf("How many numbers do you want to compare?");
	scanf("%d", &limit);

	int numbers[limit];
	int number;

	for(int current = 0; current < limit; current++){

		scanf("%d", &number);
		numbers[current] = number;

	}

	int largest = numbers[0];
	int current = 0;

	while(current < limit){

		if(largest <= numbers[current]){

			largest = numbers[current];

		}

		current++;

	}

	printf("Largest = %d", largest);

}
