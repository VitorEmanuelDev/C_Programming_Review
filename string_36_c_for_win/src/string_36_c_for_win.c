/*
 ============================================================================
 Name        : string_36_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to trim trailing white space characters from given string
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


    int spaces = 0;

    for(int current = size - 1; string[current] == ' '; current--)
    	spaces++;

    int trim = size - spaces;
    int current = 0;

    while(current < size){

    	if(current >= trim){

    		string[current] = '\0';

    	}

    	current++;

    }

    puts(string);

}
