/*
 ============================================================================
 Name        : string_11_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to find reverse of a string.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(void) {

	char string[SIZE];
	char stringReverse[SIZE];

	printf("Write a string:");
	gets(string);

	int size = 0;

	for(int current = 0; string[current] != '\0'; current++)
		size++;

	int reverseCount = 0;

	for(int originalCount = size - 1; originalCount >= 0; originalCount--){

		stringReverse[reverseCount] = string[originalCount];
		reverseCount++;

	}

	puts(stringReverse);

}
