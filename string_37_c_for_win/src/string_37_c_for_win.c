/*
 ============================================================================
 Name        : string_37_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to trim both leading and trailing white space characters from given string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 512

int main(void){

    char string[SIZE];

    printf("Write a string:");
    gets(string);
    int size = strlen(string);

    int frontSpaces;
	for( int current = 0; string[current] == ' '; current++)
		frontSpaces = current;

	int currentX = 0;

	while(string[currentX] != '\0'){

		string[currentX] = string[frontSpaces + currentX + 1];
		currentX++;

	}

    int backSpaces = 0;

    for(int currentY = size - 1; string[currentY] == ' '; currentY--)
    	backSpaces++;

    int trim = size - backSpaces;
    int currentY = 0;

    while(currentY < size){

    	if(currentY >= trim){

    		string[currentY] = '\0';

    	}

    	currentY++;

    }

    puts(string);

}
