/*
 ============================================================================
 Name        : array_05_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to find second largest element in an array
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

	int temporary;

	for(int currentX = 0; currentX < size; currentX++){

		for(int currentY = 0; currentY < size; currentY++){

			if(array[currentY] < array[currentX]){

				temporary = array[currentX];
				array[currentX] = array[currentY];
				array[currentY]	= temporary;

			}

		}

	}

	printf("[ ");
	for(int current = 0; current < size; current++){

		printf("%d ", array[current]);

	}
	printf("]");

	int secondMax = 0;

	for(int current = 0; current < size; current++){

		if(array[current] < array[0]){

			secondMax = array[current];
			break;

		}

	}

	printf("\nSecond largest value: %d ", secondMax);

}

