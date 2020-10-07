/*
 ============================================================================
 Name        : string_14_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to find first occurrence of a character in a given string
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

	for(int current = 0; string[current] != '\0'; current++){

		if(character == string[current]){

			printf("'%c' first appears on position %d.", character, current);
			break;

		}

	}

}
