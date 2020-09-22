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

int main(void) {

	int size = 10;
	int array[size] = {9,7,5,6,4,2,3,1,8,0};
	int temp = 0;

	for(int currentX = 0; currentX < size; currentX++){

		for(int currentY = 0; currentY < size; currentY++){

			if(array[currentX] < array[currentY]){

				temp = array[currentX];
				array[currentX] = array[currentY];
				array[currentY] = temp;

			}

		}

	}

	for(int current = 0; current < size; current++){

		printf("%d ", array[current]);

	}

}
