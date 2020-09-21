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

	printf("Type the values contained by your array:");

	for(int current = 0; current < size; current++){

		scanf("%d", &array[current]);

	}

	int value;

	printf("Type a value you would like to insert:");
	scanf("%d", &value);

	size++;

	for(int current = 0; current < size; current++){

		if(array[current] == array[size - 1]){

			array[current] = value;

		}

		printf("%d ", array[current]);

	}

}
