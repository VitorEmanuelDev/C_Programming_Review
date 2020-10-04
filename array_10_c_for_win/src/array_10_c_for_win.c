/*
 ============================================================================
 Name        : array_10_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to delete an element from an array at specified position
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
	printf("Which value would you like to delete from the array?");
	scanf("%d", &value);

	int position;
	printf("From which position would you like to delete %d from?", value);
	scanf("%d", &position);

	position -= 1;

	if(array[position] == value){

		for(int current = position; current < size; current++){

			array[current] = array[current + 1];

		}

		size--;

	}else if(array[position + 1] == value){

		for(int current = position + 1; current < size; current++){

			array[current] = array[current + 1];

		}

		size--;

	}




	printf("\n");
	printf("[ ");
	for(int current = 0; current < size; current++){

		printf("%d ", array[current]);

	}
	printf("]");

}

