/*
 ============================================================================
 Name        : array_12_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to print all unique elements in the array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(void) {

	int array[SIZE];
	int frequencyArray[SIZE];
	int valueArray[SIZE];
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

	int counter = 0;
	int current = 0;
	int newSize = 0;
	int frequency;
	int currentX = 0;

	while(currentX < size){

		frequency = 0;

		for(int currentY =  counter; currentY < size; currentY++){

			if(array[currentX] == array[currentY]){

				counter++;
				frequency++;

			}else if(array[currentX] != array[currentY]){

				frequencyArray[current] = frequency;
				valueArray[current] = array[currentX];
				newSize++;
				current++;
		        break;

			}

		}

		currentX = counter;

	}


	newSize++;
	valueArray[current] = array[size - 1];
	frequencyArray[current] = frequency;


	for(int current = 0; current < newSize; current++){

		if(frequencyArray[current] == 1){

			printf("%d => %d time\n", valueArray[current], frequencyArray[current]);

		}

	}

}

