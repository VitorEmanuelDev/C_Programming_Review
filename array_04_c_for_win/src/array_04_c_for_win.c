/*
 ============================================================================
 Name        : array_04_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to find maximum and minimum element in an array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(void) {

	int array[SIZE];
	int size;

	printf("How many elements does your array have?");
	scanf("%d", &size);

	printf("Input the values of your array:");
	for(int current = 0; current < size; current++){

		scanf("%d", &array[current]);

	}

	int maximum = array[0];
	int minimum = array[0];

	for(int current = 0; current < size; current++){

		if(array[current] < minimum){

			minimum = array[current];

		}

		if(array[current] > maximum){

			maximum = array[current];

		}

	}

	printf("Largest value: %d\n", maximum);
	printf("Smallest value: %d", minimum);

}


