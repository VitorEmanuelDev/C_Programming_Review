/*
 ============================================================================
 Name        : string_30_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description :  program to search all occurrences of a word in given string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 512

int main(void){

    char string[SIZE];
    char substring[SIZE];

    printf("Write a string:");
    gets(string);

    printf("Which word are you looking for?");
    gets(substring);

    int check;
    int current = 0;

    while(string[current] != '\0'){

    	if(string[current] == substring[0]){

            int position = 0;
            check = 0;

            while(substring[position] != '\0'){

                if(string[current + position] != substring[position]){

                    check++;
                    break;
                }

                position++;

            }

            if(check == 0){

				printf("\n'%s' at index %d", substring, current);

			}

        }

        current++;

    }

}
