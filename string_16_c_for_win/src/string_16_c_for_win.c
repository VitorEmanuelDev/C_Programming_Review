/*
 ============================================================================
 Name        : string_16_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to search all occurrences of a character in given string
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

	int flag = 0;

	printf("'%c' appears in: ", character);

	for(int current = 0; string[current] != '\0'; current++){

		if(character == string[current]){

			flag++;
			printf("\n position %d.", current);

		}

	}

	if(flag == 0){

		printf("no positions.");

	}

}
