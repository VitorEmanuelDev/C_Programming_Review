/*
 ============================================================================
 Name        : string_02_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to copy one string to another string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(void) {

	char string1[SIZE];
	char string2[SIZE];

	printf("Write a string:");
	fgets(string1, SIZE, stdin);

	for(int current = 0; string1[current] != '\0'; current++){

		string2[current] = string1[current];
		printf("%c", string2[current]);

	}

}
