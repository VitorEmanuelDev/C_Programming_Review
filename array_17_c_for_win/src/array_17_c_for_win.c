/*
 ============================================================================
 Name        : array_17_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to put even and odd elements of array in two separate array
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

	printf("Array of even numbers\n");
	printf("[ ");
	for(int current = 0; current < evenCount; current++){

		printf("%d ", arrayEvens[current]);

	}
	printf("]\n");

	printf("Array of odd numbers\n");
	printf("[ ");
	for(int current = 0; current < oddCount; current++){

		printf("%d ", arrayOdds[current]);

	}
	printf("]");

}

