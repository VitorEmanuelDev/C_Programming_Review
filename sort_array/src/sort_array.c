/*
 ============================================================================
 Name        : sort_array.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : Sort array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void) {

	int array[SIZE] = {9,7,5,6,4,2,3,1,8,0};
	int temp = 0;

	for(int currentX = 0; currentX < SIZE; currentX++){

		for(int currentY = 0; currentY < SIZE; currentY++){

			if(array[currentX] < array[currentY]){

				temp = array[currentX];
				array[currentX] = array[currentY];
				array[currentY] = temp;

			}

		}

	}

	for(int current = 0; current < SIZE; current++){

		printf("%d ", array[current]);

	}

}
