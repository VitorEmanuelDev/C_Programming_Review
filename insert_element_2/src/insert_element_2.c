/*
 ============================================================================
 Name        : insert_element.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : Insert element into an array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int size;

	printf("What is the size of your array?");
	scanf("%d", &size);

	int array[size];

	printf("\nType %d values into the array:", size);

	for(int current = 0; current < size; current++){

		scanf("%d", &array[current]);

	}

	int value;

	printf("\nType a value you would like to insert:");
	scanf("%d", &value);

	int position;

	printf("\nWhere would you like to insert %d:", value);
	scanf("%d", &position);

	size++;

	for(int current = size - 2; current >= position; current--){

		array[current + 1] = array[current];
		//printf("%d", array[current]);

	}

	array[position] = value;

	for(int current = 0; current < size; current++){

		printf("%d", array[current]);

	}

}
