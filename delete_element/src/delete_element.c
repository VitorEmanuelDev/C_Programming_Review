/*
 ============================================================================
 Name        : insert_element.c
 Author      : vitor emanuel
 Version     :
 Copyright   :
 Description : Delete element from an array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int size;

	printf("What is the size of your array?");
	scanf("%d", &size);

	int array[size];

	printf("Type the values contained by your array:");

	for(int current = 0; current < size; current++){

		scanf("%d", &array[current]);

	}

	int value;

	printf("Type a value you would like to delete:");
	scanf("%d", &value);

	int position;

	for(int current = 0; current < size; current++){

		if(array[current] == value){

			array[current] = array[current + 1];
			position = current;

		}


	}

	for(int current = position; current < size - 1; current++){

		array[current] = array[current + 1];

	}

	size--;
	array[size] = 0;

	printf("[");
	for(int current = 0; current < size; current++){

		printf("%d ", array[current]);

	}
	printf("]");

}
