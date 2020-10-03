/*
 ============================================================================
 Name        : string_08_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to find total number of alphabets, digits or special character in a string
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

		if(string[current] != ' '){

			count++;

		}

		current++;

	}

	printf("%d", count);

}
