/*
 ============================================================================
 Name        : array_02_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to print all negative elements in an array
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

	printf("[ ");
	for(int current = 0; current < size; current++){

		if(array[current] < 0){

			printf("%d ", array[current]);

		}

	}
	printf(" ]");
}

