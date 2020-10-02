/*
 ============================================================================
 Name        : array_03_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to find sum of all array elements
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

	int sum = 0;

	for(int current = 0; current < size; current++){

		sum += array[current];

	}

	printf("%d", sum);

}
