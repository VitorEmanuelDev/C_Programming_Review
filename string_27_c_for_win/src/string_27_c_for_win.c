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

    int size = strlen(string);

    char charString;

    char charA;

    printf("Pick a character from the string:");
    scanf("%c", &charA);

    int flag = 0;

    for(int current = 0; string[current] != '\0'; current++){

        charString = string[current];

        if(charA == charString){

            flag++;

        }

    }

    if(flag == 0){

        printf("Invalid character.");
        exit(0);

    }

	char charB;

    printf("Choose a character to replace it:");
    scanf("%c", &charB);

    int current = 0;

    while(current < size){

        charString = string[current];

    	if(charString == charA){

    		string[current] = charA;

		}

    	current++;

    }

    string[size] = '\0';

    printf("\n");

    puts(string);

}
