/*
 ============================================================================
 Name        : string_35_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to trim leading white space characters from given string
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

    int spaces;
    for( int current = 0; string[current] == ' '; current++)
    	spaces = current;

    int current = 0;

    while(string[current] != '\0'){

    	string[current] = string[spaces + current + 1];
    	current++;

    }

    puts(string);

}
