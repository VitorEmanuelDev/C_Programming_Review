/*
 ============================================================================
 Name        : reverse_string.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : reverse a string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int main(void) {

	char string1[SIZE];
	char string2[SIZE];

	printf("Type a string:\n");
	fgets(string1, SIZE, stdin);

	int counter = 0;

	printf("Original string.\n");
	for(int currentX = 0; string1[currentX] != '\0'; currentX++){

		printf("%c", string1[currentX]);
		counter++;

	}

	for(int currentX = counter - 1, currentY = 0; currentX >= 0; currentX--, currentY++){

		string2[currentY] = string1[currentX];
		counter++;

	}

	printf("Reversed string.");
	for(int currentY = 0; string1[currentY] != '\0'; currentY++){

			printf("%c", string2[currentY]);

		}

}
