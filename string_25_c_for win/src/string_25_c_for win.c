/*
 ============================================================================
 Name        : string_25_c_for.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to replace first occurrence of a character with another in a string
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#define SIZE 512

int main(void)
{
    char string[SIZE];

    int size;
    printf("Write a string:");
    gets(string);

    char charA;
	printf("Which character are you looking for?\n");
	scanf("%c", &charA);

	char charB;
	printf("What's the replacement for character '%c'?\n", charA);
	scanf("%c", &charB);

    size = strlen(string);

    int current = 0;

    while(current < size){

    	if(string[current] == charA){

			string[current] = charB;

		}

    	current++;

    }

    string[current] = '\0';

    printf("\n");

    puts(string);

}
