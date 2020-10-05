/*
 ============================================================================
 Name        : array_18_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to search an element in an array
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

	int value;
	int present = 0;
	int position = 0;

	printf("Which value are you looking for?");
	scanf("%d", &value);

	for(int current = 0; current < size; current++){

		position++;

		if(array[current] == value){

			present++;
			break;

		}

	}

	if(present == 1){

		printf("%d was found in position %d.", value, position);

	}else{

		printf("%d isn't present in the array.", value);

	}

}


