/*
 ============================================================================
 Name        : string_03_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to concatenate two strings
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(void) {

	char string1[SIZE];
	char string2[SIZE];
	char string3[SIZE];

	printf("Write your first string:");
	gets(string1);//fgets won't cut it for this exercise

	printf("Write your second string:");
	gets(string2);

	int size = 0;

	for(int current = 0; string1[current] != '\0'; current++, size++){

		string3[size] = string1[current];

	}

	for(int current = 0; string2[current] != '\0'; current++){

		string3[size] = string2[current];
		size++;

	}

	string1[size] = '\0';

	puts(string3);


}
