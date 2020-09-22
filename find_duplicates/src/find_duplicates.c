/*
 ============================================================================
 Name        : find_duplicates.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : find duplicates
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 12

int main(void) {

	int deletions = 0;
	int array[SIZE] = {3,5,7,1,5,9,8,2,4,6,0,8};

	for(int currentX = 0; currentX < SIZE - deletions; currentX++){

		for(int currentY = currentX + 1; currentY < SIZE - deletions; currentY++){

			if(array[currentX] == array[currentY]){

				for(int currentZ = currentY; currentZ < SIZE - deletions; currentZ++){

					array[currentZ] = array[currentZ + 1];//replace the duplicate with the next number in line

				}

				deletions++;//count deletions to reduce the size of the array after this iteration inside the if block

			}

		}

	}

	printf("[ ");
	for(int current = 0; current < SIZE - deletions; current++){

		printf("%d ", array[current]);

	}
	printf("]");

}
