/*
 ============================================================================
 Name        : string_17_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to count occurrences of a character in given string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(void) {

	char string[SIZE];

	printf("Write a string:");
	gets(string);

	char character;

	printf("Pick a character to find:");
	scanf(" %c", &character);

	int count = 0;

	for(int current = 0; string[current] != '\0'; current++){

		if(character == string[current]){

			count++;

		}

	}

	printf("'%c' appears %d times.\n", character, count);

}
