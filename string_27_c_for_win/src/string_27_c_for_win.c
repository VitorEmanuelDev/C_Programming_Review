/*
 ============================================================================
 Name        : string_27_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to replace all occurrence of a character with another in a string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 512

int main(void)
{
    char string[SIZE];

    printf("Write a string:");
    fgets(string, SIZE, stdin);

    char charA;

    printf("Pick a character from the string:");
    charA = getchar();

    getchar();

    char charB;

	printf("Choose a character to replace it:");
	charB = getchar();

    for(int current = 0; string[current] != '\0'; current++){

        if(charA == string[current]){

        	string[current] = charB;

        }

    }

    puts(string);

}

