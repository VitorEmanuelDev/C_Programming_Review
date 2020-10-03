/*
 ============================================================================
 Name        : string_10_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to count total number of words in a string
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

		if(string[current] == ' ' ||
		   string[current] == '\n' ||
		   string[current] == '\t'){

			count++;

		}

		current++;

	}

	if(count > 0 && string[current] != ' '){

		count++;

	}

	printf("%d", count);

}
