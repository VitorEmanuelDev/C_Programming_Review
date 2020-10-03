/*
 ============================================================================
 Name        : string_09_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to count total number of vowels and consonants in a string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(void) {

	char string[SIZE];

	printf("Write a string:");
	gets(string);

	int current = 0;
	int count = 0;

	while(string[current] != '\0'){

		if((string[current] >= 'a' && string[current] >= 'z')
		|| (string[current] >= 'A' && string[current] >= 'Z')){

			count++;

		}

		current++;

	}

	printf("%d", count);

}
