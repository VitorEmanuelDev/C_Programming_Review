/*
 ============================================================================
 Name        : string_20_c_for_win.c
 Author      : vitor emanuel
 Version     :
 Copyright   : 
 Description : program to count frequency of each character in a string
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#define SIZE 512

int main(void)
{
    char string[SIZE];
    int current, size;
    int frequency[26];

    printf("Write a string:");
    gets(string);

    size = strlen(string);

    for(current = 0; current < 26; current++){

        frequency[current] = 0;

    }



    for(current = 0; current < size; current++){

        if(string[current] >= 'a' && string[current] <= 'z'){

            frequency[string[current] - 97]++;

        }else if(string[current] >= 'A' && string[current] <= 'Z'){

            frequency[string[current] - 65]++;

        }

    }

    for(current = 0; current < 26; current++){


        if(frequency[current] != 0){

            printf("'%c' => %d\n", (current + 97), frequency[current]);

        }

    }

}
