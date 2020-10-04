/*
 ============================================================================
 Name        : array_06_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to count total number of even and odd elements in an array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(void) {

	int array[SIZE];
	int size;
	int value;

	printf("What's the size of your array?");
	scanf("%d", &size);

	printf("Input %d values into the array:", size);
	for(int current = 0; current < size; current++){

		scanf("%d", &array[current]);

	}

	int odd = 0;
	int even = 0;

	for(int current = 0; current < size; current++){

		if(array[current] % 2 == 0){

			even++;

		}

		if(array[current] % 2 != 0){

			odd++;

		}

	}

	printf("There are %d odd numbers and %d even numbers.", odd, even);

}
