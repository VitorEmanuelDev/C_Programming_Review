/*
 ============================================================================
 Name        : array_19_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to sort array elements in ascending or descending order.
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

	int temporary;

	for(int currentX = 0; currentX < size; currentX++){

		for(int currentY = 0; currentY < size; currentY++){

			if(array[currentX] < array[currentY]){

				temporary = array[currentX];
				array[currentX] = array[currentY];
				array[currentY] = temporary;

			}

		}

	}

	printf("Ascending order\n");
	for(int current = 0; current < size; current++){

		printf("%d ", array[current]);

	}

	for(int currentX = 0; currentX < size; currentX++){

		for(int currentY = 0; currentY < size; currentY++){

			if(array[currentX] > array[currentY]){

				temporary = array[currentX];
				array[currentX] = array[currentY];
				array[currentY] = temporary;

			}

		}

	}

	printf("\nDescending order\n");
	for(int current = 0; current < size; current++){

		printf("%d ", array[current]);

	}

}

