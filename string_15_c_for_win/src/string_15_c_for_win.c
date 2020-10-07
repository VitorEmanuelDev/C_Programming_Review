/*
 ============================================================================
 Name        : string_15_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to find last occurrence of a character in a given string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(void) {

	char string[SIZE];

	printf("Write a string:");
	gets(string);

	int size = strlen(string);

	char character;

	printf("Pick a character to find:");
	scanf(" %c", &character);

	for(int current = size; current >= 0; current--){

		if(character == string[current]){

			printf("'%c' appears last on position %d.", character, current);
			break;

		}

	}

}

