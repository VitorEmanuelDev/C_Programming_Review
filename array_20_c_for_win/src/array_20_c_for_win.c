/*
 ============================================================================
 Name        : array_20_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to sort even and odd elements of array separately.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(void) {

	int array[SIZE];
	int arrayEvens[SIZE];
	int arrayOdds[SIZE];
	int size;


	printf("What's the size of your array?");
	scanf("%d", &size);

	printf("Input %d values into the array:", size);
	for(int current = 0; current < size; current++){

		scanf("%d", &array[current]);

	}

	int evenCount = 0;
	int oddCount = 0;

	for(int current = 0; current < size; current++){

		if(array[current] % 2 == 0){

			arrayEvens[evenCount] = array[current];
			evenCount++;

		}else{

			arrayOdds[oddCount] = array[current];
			oddCount++;

		}

	}

	int temporaryEvens;

	for(int currentX = 0; currentX < evenCount; currentX++){

		for(int currentY = 0; currentY < evenCount; currentY++){

			if(arrayEvens[currentX] < arrayEvens[currentY]){

				temporaryEvens = arrayEvens[currentX];
				arrayEvens[currentX] = arrayEvens[currentY];
				arrayEvens[currentY] = temporaryEvens;

			}

		}

	}

	int temporaryOdds;

	for(int currentX = 0; currentX < oddCount; currentX++){

		for(int currentY = 0; currentY < oddCount; currentY++){

			if(arrayOdds[currentX] < arrayOdds[currentY]){

				temporaryOdds = arrayOdds[currentX];
				arrayOdds[currentX] = arrayOdds[currentY];
				arrayOdds[currentY] = temporaryOdds;

			}

		}

	}

	printf("Sorted even numbers\n");
	printf("[ ");
	for(int current = 0; current < evenCount; current++){

		printf("%d ", arrayEvens[current]);

	}
	printf("]");

	printf("\nSorted odd numbers\n");
	printf("[ ");
	for(int current = 0; current < oddCount; current++){

		printf("%d ", arrayOdds[current]);

	}
	printf("]");

}
