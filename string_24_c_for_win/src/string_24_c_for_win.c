/*
 ============================================================================
 Name        : string_24_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to remove all repeated characters from a given string
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

    size = strlen(string);

    int currentX = 0;

    while(currentX < size){

    	int count = 0;

    	for(int currentY = 0; currentY < size; currentY++){

    		if(string[currentX] == string[currentY]){

    			count++;

    			if(count >= 2){

    				int current = currentY;

    				while(current < size){

    					string[current] = string[current + 1];
						current++;

    				}

    				size--;

    			}

    		}

    	}

    	if(string[0] == string[1]){

			int current = 1;

			while(current < size){

				string[current] = string[current + 1];

				current++;

			}

			size--;

		}

    	if(string[size - 1] == string[size - 2]){

			int current = size - 1;

			while(current < size){

				string[current] = string[current + 1];

				current++;

			}

			size--;

		}

    	currentX++;

    }

    string[currentX] = '\0';

    puts(string);

}
