/*
 ============================================================================
 Name        : string_32_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to remove first occurrence of a word from string
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
    int stringSize = strlen(string);

    printf("Which word are you looking for?");
    gets(substring);
    int substringSize = strlen(substring);

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

            	int position = current;
            	int size = stringSize - substringSize;

				while(position <= size){

					string[position - 1] = string[position + substringSize];

					position++;

				}

				break;

		   }

        }

        current++;

    }

    puts(string);

}
