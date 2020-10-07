/*
 ============================================================================
 Name        : string_19_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to find least occurring character in a string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(void)
{
    char string[SIZE];
    int frequency[SIZE];

    printf("Write a string:");
    gets(string);

    for(int current = 0; current < SIZE; current++){

        frequency[current] = 0;

    }


    int ASCII;
    int current = 0;

    while(string[current] != '\0'){

        ASCII = (int)string[current];
        //printf("%d ", ASCII);
        frequency[ASCII]++;

        current++;

    }


    int minFrequency = 0;

    for(current = 0; current < SIZE; current++){

    	 if(frequency[current] != 0){

			if(frequency[minFrequency] == 0 || frequency[current] < frequency[minFrequency]){

				minFrequency = current;

			}

		}

    }

    printf("'%c' => %d times.", minFrequency, frequency[minFrequency]);

}
