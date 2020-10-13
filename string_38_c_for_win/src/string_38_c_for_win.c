/*
 ============================================================================
 Name        : string_38_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to remove spaces, blanks from a string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 512

int main(void){

    char string[SIZE];
    char copy[SIZE];

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

	currentX = 0;
	currentY = 0;

	while(string[currentX] != '\0'){

		if(string[currentX] == ' '){

			copy[currentY] = ' ';// input a space after reading the word
			currentY++;

			while(string[currentX] == ' ')/// jump all spaces
				currentX++;

		}

		copy[currentY] = string[currentX];

		currentX++;
		currentY++;

	}

	copy[currentY] = '\0';

    puts(copy);

}
