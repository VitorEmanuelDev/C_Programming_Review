/*
 ============================================================================
 Name        : string_04_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to compare two strings
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(void) {

	char string1[SIZE];
	char string2[SIZE];

	printf("Write your first string:");
	gets(string1);

	printf("Write your second string:");
	gets(string2);

	for(int current = 0; string1[current] != '\0'; current++){

		if(string1[current] >= 'a' && string1[current] <= 'z'){

			string1[current] -= 32;

		}

	}

	for(int current = 0; string2[current] != '\0'; current++){

		if(string2[current] >= 'a' && string2[current] <= 'z'){

			string2[current] -= 32;

		}

	}

	int current = 0;

	while(string1[current] == string2[current]){

		if(string1[current] != '\0' && string2[current] != '\0'){

			break;

		}

		current++;

	}

	if(string1[current] - string2[current] == 0){

		printf("Strings are equal.");

	}else{

		printf("Strings are different.");

	}

}
