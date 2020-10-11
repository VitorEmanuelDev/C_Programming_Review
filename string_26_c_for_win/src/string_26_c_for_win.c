/*
 ============================================================================
 Name        : string_26_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to replace last occurrence of a character with another in a string
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

    int current = size - 1;

    while(current >= 0){

        charString = string[current];

    	if(charString == charA){

    		string[current] = charA;
    		break;

		}

    	current--;

    }

    printf("\n");

    puts(string);

}
