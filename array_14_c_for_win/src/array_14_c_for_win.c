/*
 ============================================================================
 Name        : array_14_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description :  program to delete all duplicate elements from an array.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(void) {

	int array[SIZE];
	int arrayCopy[SIZE];
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

	for(int current = 0; current < size; current++){

		printf("%d ", array[current]);

	}

	printf("\n");

	int counter;
	int current = 0;
	int newSize = 0;

	for(int currentX = 0; currentX < size; currentX++){

		counter = 0;

		for(int currentY =  0; currentY < size; currentY++){

			if(array[currentX] == array[currentY]){

				counter++;

				if(counter < 2 && arrayCopy[current - 1] != array[currentX]){

					arrayCopy[current] = array[currentX];
					newSize++;
					current++;

				} else if(counter >= 2){

					break;

				}

				if(arrayCopy[-1] == array[currentX]){

					arrayCopy[current] = array[currentX];
					newSize++;
					current++;

				}

			}

		}

	}

	for(int current = 0; current < size; current++){

		if(current > newSize){

			array[current] = '\0';

		}

		array[current] = '\0';
		array[current] = arrayCopy[current];

	}

	printf("[ ");
	for(int current = 0; current < newSize; current++){

		printf("%d ", array[current]);

	}
	printf("]");

}

