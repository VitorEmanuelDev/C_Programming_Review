/*
 ============================================================================
 Name        : string_23_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to remove all occurrences of a character from string
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#define SIZE 512

int main(void){

    char string[SIZE];

    int size;
    printf("Write a string:");
    gets(string);

    char character;
	printf("Which character are you looking for?");
	scanf("%c", &character);

    size = strlen(string);

    int position = 0;

    for(int current = 0; current < size; current++){

    	if(string[current] == character){

    		position = current;
    		size--;

    		int current = position;

			while(current < size){

				string[current] = string[current + 1];
				current++;

			}

			string[current] = '\0';


    	}

    }

    puts(string);

}
