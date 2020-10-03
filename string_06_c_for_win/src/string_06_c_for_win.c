/*
 ============================================================================
 Name        : string_6_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to convert uppercase string to lowercase
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

	while(string[current] >= 'A' && string[current] <= 'Z'){

		string[current] += 32;
		current++;

	}

	puts(string);

}
