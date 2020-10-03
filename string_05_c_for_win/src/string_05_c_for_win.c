/*
 ============================================================================
 Name        : string_05_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to convert lowercase string to uppercase
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

	while(string[current] >= 'a' && string[current] <= 'z'){

		string[current] -= 32;
		current++;

	}

	puts(string);

}
