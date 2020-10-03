/*
 ============================================================================
 Name        : string_7_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to toggle case of each character of a string
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

	while(string[current] != '\0'){

		if(string[current] >= 'A' && string[current] <= 'Z'){

			string[current] += 32;

		}else if(string[current] >= 'a' && string[current] <= 'z'){

			string[current] -= 32;

		}

		current++;

	}

	puts(string);

}
