/*
 ============================================================================
 Name        : string_01_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to find length of a string.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(void) {

	char string[SIZE];

	printf("Write a string:");
	fgets(string, SIZE, stdin);

	int size;

	for(int current = 0; string[current] != '\0'; current++){

		size = current;

	}

	printf("The size of the string is %d", size);

}
