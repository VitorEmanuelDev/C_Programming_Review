/*
 ============================================================================
 Name        : string_31_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to count occurrences of a word in a given string
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
    int count = 0;
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

				count++;

			}

        }

        current++;

    }

    printf("'%s' appears %d times.", substring, count);

}
